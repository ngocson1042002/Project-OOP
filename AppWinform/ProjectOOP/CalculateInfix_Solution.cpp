#include "CalculateInfix_Solution.h"

const char* func[19] = { "cos", "sin", "tan", "acos", "asin", "atan", "cosh", "sinh", "tanh", "acosh", "asinh", "atanh", "exp", "abs", "ln", "log", "sqrt", "cbrt", "!" };

// Một mảng con trỏ hàm
float (*address[19])(float) = { cal_cos, cal_sin, cal_tan, cal_acos, cal_asin, cal_atan, cal_cosh, cal_sinh, cal_tanh, cal_acosh, cal_asinh, cal_atanh, cal_exp, cal_abs, cal_log, cal_log10, cal_sqrt, cal_cbrt, cal_factorial };

bool CalculateInfix_Solution::isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool CalculateInfix_Solution::isLetter(char c)
{
    return (c >= 'a' && c <= 'z');
}

int CalculateInfix_Solution::precedence(string c)
{
    if (c == ")")
        return 0;
    if (c == "(")
        return 1;
    if (c == "+" || c == "-")
        return 2;
    if (c == "*" || c == "/" || c == "%")
        return 3;
    if (c == "^")
        return 4;
    for (int i = 0; i < 19; i++)
    {
        if (func[i] == c)
            return 5;
    }
    if (c == ".")
        return 6;
    if (c != "0" && c != "pi" && c != "e" && atof(c.c_str()) == 0) // Hàm atof sẽ trả về 0 nếu truyền vào chuỗi khác dạng số
        return 7;
    return 8;
}

vector<string> CalculateInfix_Solution::StringHandling(string& str)
{
    for (unsigned int i = 0; i < str.size(); i++) // Kiểm tra trường hợp: "5    4", "5    .     4", "s    q    rt( 4)"
    {
        if (isDigit(str[i]) || isLetter(str[i]) || str[i] == '.')
        {
            unsigned int j = (i + 2 < str.size() && str[i + 1] == '.') ? i + 2 : i + 1;
            int remain = j;
            while (j < str.size() && str[j] == ' ')
                j++;
            if (j == str.size())
                break;
            if (j == remain)
                continue;
            if (isDigit(str[j]) || isLetter(str[j]) || str[j] == '.')
                throw "Something wrong with expression!";
            i = j - 1;
        }
    }

    // Xóa khoảng trắng
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    // Phần tử đầu là '!'. VD: !5+3
    if (str[0] == '!')
        throw "Something wrong with expression!";

    // Chuỗi chứa "()"
    size_t found = str.find("()");
    if (found != string::npos)
        throw "Something wrong with expression!";

    int minus = 0;
    unsigned int i = 0, k = 0;
    while (str[i] == '+' || str[i] == '-') // -+-+-+2+5
    {
        if (str[i] == '-') // Đếm số dấu '-'
            minus++;
        i++;
    }

    vector<string> s; // output

    if (minus % 2 != 0) // Số dấu '-' là số lẻ 
    {
        s.push_back("0");
        s.push_back("-");
        k = 2;
    }

    while (i < str.size())
    {
        int flag = 0;
        s.push_back("");
        if (str[i] == '-' || str[i] == '+')
        {
            flag = i - 1;
            minus = 0;
            while (str[i] == '+' || str[i] == '-')
            {
                if (str[i] == '-')
                    minus++;
                i++;
            }
            if (str[flag] == '%') // 5%-4 = 5%4
            {
                s.pop_back();
                continue;
            }
            if (str[flag] == '/' || str[flag] == '*') // 3+2/-5 = 3+2*-1/5 hay 3+2*-5 = 3+2*-1*5
            {
                s.insert(s.end() - 2, "*");
                if (minus % 2 == 0)
                    s.insert(s.end() - 2, "1");
                else
                    s.insert(s.end() - 2, "-1");
                k++;
                s.pop_back();
            }
            else if (str[flag] == '^') // 3+2^-2 = 3+(1/2)^2
            {

                if (minus % 2 != 0) {
                    s.insert(s.end() - 3, "(");
                    s.insert(s.end() - 3, "1");
                    s.insert(s.end() - 3, "/");
                    s.insert(s.end() - 2, ")");
                    k += 3;

                    s.pop_back();
                }
                else
                {
                    k -= 1;
                    s.pop_back();
                }
            }
            else
            {
                if (str[flag] == '(') // (-2+3)+6 = (0-2+3)+6
                {
                    s[k++].push_back('0');
                    s.push_back("");
                }
                if (minus % 2 == 0) // 2+-+-+7 = 2+7
                    s[k].push_back('+');
                else // 2+-+--+7 = -2+7
                    s[k].push_back('-');
            }
            i--;
        }
        else if (str[i] == '!')
        {
            int temp = precedence(s[k - 1]);
            if (temp > 0 && temp <= 5) // 2+!5, (!5+3)-2, 8+abs!5
                throw "Something wrong with expression!";
            else
                s[k].push_back(str[i]);

        }
        else if (isLetter(str[i])) // Kí tự đang xét là chữ từ 'a' đến 'z'
        {
            while (isLetter(str[i]))
            {
                s[k].push_back(str[i]);
                i++;
            }
            i--;
        }
        else if (isDigit(str[i])) // Kí tự đang xét là số từ '0' đến '9'
        {
            if (k != 0 && precedence(s[k - 1]) == 5) // Hàm thiếu ngoặc mở
                throw "Something wrong with expression!";
            //VD: 25.36+7
            while (isDigit(str[i])) // Lấy 25
            {
                s[k].push_back(str[i]);
                i++;
            }
            if (str[i] == '.') // Lấy '.'
            {
                s[k].push_back(str[i]);
                i++;
            }
            while (isDigit(str[i])) // Lấy 36
            {
                s[k].push_back(str[i]);
                i++;
            }
            i--;
        }
        else if (str[i] == '.')
        {
            s[k].push_back(str[i]); // Lấy '.'
            i++;
            while (isDigit(str[i])) // Lấy số
            {
                s[k].push_back(str[i]);
                i++;
            }
            if (k != 0 && precedence(s[k - 1]) == 5) // Hàm thiếu ngoặc mở
                throw "Something wrong with expression!";
            i--;
        }
        else
            s[k].push_back(str[i]);
        k++;
        i++;
    }
    return s;
}

vector<string> CalculateInfix_Solution::InfixToPostfix(vector<string> s)
{
    vector<string> ans;
    Stack<string> myStack;
    int flag = 0;
    for (unsigned int i = 0; i < s.size(); i++)
    {
        int temp1 = (myStack.empty()) ? -1 : (precedence(myStack.top())); // Độ ưu tiên của phần tử đỉnh trong Stack
        int temp2 = precedence(s[i]); // Độ ưu tiên của phần tử đang xét trong mảng s
        if (temp2 == 8) // Phần tử trong mảng là số
        {
            ans.push_back(s[i]);
            continue;
        }
        if (temp2 == 1) // Phần tử trong mảng là dấu "("
        {
            myStack.push(s[i]);
            if (temp1 == 5) // Phần tử đỉnh trong Stack đang là dạng hàm (sqrt, abs, cos....)
                flag++;
            continue;
        }
        if (temp2 == 0)
        {
            if (flag > 0) // Trong Stack có chứa hàm 
            {
                while (myStack.top() != "(")
                {
                    ans.push_back(myStack.top()); // Thêm vào output
                    myStack.pop();
                }
                myStack.pop(); // Bỏ dấu "("

                if (precedence(myStack.top()) == 5) // Đỉnh của Stack là hàm
                {
                    ans.push_back(myStack.top()); // Thêm vào ouput
                    myStack.pop();
                    flag--;
                    continue;
                }
                if (i + 1 < s.size() && s[i + 1] == "^") // Trước phần tử đang xét là dấu "^"
                {
                    ans.push_back(myStack.top()); // Thêm vào ouput
                    myStack.pop();
                    continue;
                }
            }
            else // Trong Stack không chứa hàm 
            {
                while (!myStack.empty() && myStack.top() != "(")
                {
                    ans.push_back(myStack.top());
                    myStack.pop();
                }
                if (myStack.empty()) // Thiếu ngoặc "("
                    throw "Something wrong with expression!";
                myStack.pop(); // Xóa ngoặc "("
            }
            continue;
        }

        // Độ ưu tiên của phần tử đang xét trong mảng lớn hơn độ ưu tiên của phần tử trong đỉnh Stack
        // Hoặc top = s[i] = "^"
        if (temp2 > temp1 || (temp2 == temp1 && temp1 == 4))
            myStack.push(s[i]);
        else
        {
            while (!myStack.empty() && temp2 <= temp1)
            {
                ans.push_back(myStack.top()); // Thêm vào ouput
                myStack.pop();
                temp1 = (myStack.empty()) ? -1 : (precedence(myStack.top()));
            }
            myStack.push(s[i]); // push s[i] vào Stack
        }
    }

    while (!myStack.empty()) // Nếu chưa rỗng push hết tất cả vào ouput
    {
        ans.push_back(myStack.top());
        myStack.pop();
    }
    return ans;
}

float CalculateInfix_Solution::calculatePostfix(vector<string> s)
{
    map<string, float (*)(float)> mp; // key: Chuỗi, value: Địa chỉ của hàm
    for (int i = 0; i < 19; i++) {
        mp[func[i]] = address[i];
    }

    Stack<string> myStack;
    for (unsigned int i = 0; i < s.size(); i++)
    {
        int temp = precedence(s[i]);
        if ((temp == 2 || temp == 3 || temp == 4) && myStack.size() == 1) // Phần tử là các toán tử +,-,*,/,^ và kích thước của Stack có nhiều hơn một phần tử
            throw "Something wrong with expression!";
        if (temp == 8) // Phần tử là số
        {
            if (s[i] == "pi")
                myStack.push("3.141593");
            else if (s[i] == "e")
                myStack.push("2.718282");
            else
                myStack.push(s[i]);
        }
        else if (temp == 5) // Phần tử là các hàm
        {
            if (myStack.empty()) // Stack rỗng => Không có tham số truyền vào hàm
                throw "Something wrong with expression!";

            float t = atof(myStack.top().c_str()); // Lấy giá trị của đỉnh Stack           
            if (s[i] == "!") // Giai thừa
            {
                if (t == int(t)) // Giá trị t phải là số nguyên
                {
                    if (mp["!"](t) == -1) // Giá trị t là số âm
                        throw "Something wrong with expression!";
                    myStack.pop();
                    myStack.push(to_string(mp["!"](t)));
                    continue;
                }
                else // Không nguyên
                    throw "Something wrong with expression!";
            }

            float x = mp[s[i]](t);
            if (isnan(x)) // Kiểm tra tham số truyền vào hàm có trả về NAN hay không. VD: sqrt(-4) => NAN, log(-1) => NAN
                throw "Something wrong with expression!";
            myStack.pop();
            myStack.push(to_string(x));
        }
        else // Phần tử có thể là các toán hạng +,-,*,/,^ hoặc kèm với các kí tự đặc biệt như ~,@,#...
        {
            if (myStack.empty()) // Trường hợp Stack rỗng => Không có top
                throw "Something wrong with expression!";
            float y1 = atof(myStack.top().c_str()); // Stack không rỗng => Lấy được giá trị top
            myStack.pop();

            if (myStack.empty())
                throw "Something wrong with expression!";
            float y2 = atof(myStack.top().c_str());
            myStack.pop();
            if (s[i] == "+")
                myStack.push(to_string(y2 + y1));
            else if (s[i] == "-")
                myStack.push(to_string(y2 - y1));
            else if (s[i] == "*")
                myStack.push(to_string(y2 * y1));
            else if (s[i] == "/")
            {
                if (y1 == 0) // Trường hợp chia cho 0
                    throw "Division by zero!";
                myStack.push(to_string(y2 / y1));
            }
            else if (s[i] == "%")
            {
                if (y1 == int(y1) && y2 == int(y2))
                {
                    if (y1 == 0) // Trường hợp chia lấy dư cho 0
                        throw "Division by zero!";
                    else
                        myStack.push(to_string(int(y2) % int(y1)));
                }
                else // Trường hợp 1 trong 2 số không nguyên
                    throw "The 2 operator must have 2 operands of type int and int";
            }
            else if (s[i] == "^")
                myStack.push(to_string(pow(y2, y1)));
            else // Trường hợp các kí tự đặc biệt như ~,@,#...
                throw "Something wrong with expression!";
        }
    }

    // Nếu kết quả cuối cùng là 1 Stack rỗng hoặc kích thước của 1 Stack > 1 => Sai
    // Kết quả đúng thì trong Stack phải còn 1 phần tử duy nhất
    if (myStack.empty() || myStack.size() > 1)
        throw "Something wrong with expression!";

    float ans = atof(myStack.top().c_str());
    return ans;
}