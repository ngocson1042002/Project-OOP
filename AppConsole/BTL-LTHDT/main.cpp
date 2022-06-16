#include "CalculateInfix_Solution.h"
#include<iostream>

int main() {
    vector<string> list;
    int choice = 0, n = 0;
    string str;
    do
    {
        system("cls");
        cout << "**********************************FUNCTIONS********************************" << endl;
        cout << "** cos(x)  \tsin(x)  \ttan(x)  \tacos(x) \tasin(x)  **" << endl;
        cout << "** sinh(x) \ttanh(x) \tacosh(x)\tasinh(x)\tatanh(x) **" << endl;
        cout << "** ln(x)   \tlog(x)  \tsqrt(x) \tcbrt(x) \tabs(x)   **" << endl;
        cout << "** atan(x) \tcosh(x) \texp(x)  \t!       \t         **" << endl;
        cout << "***************************************************************************" << endl;
        cout << "pi = 3.141593 \te = 2.718282 " << endl;
        cout << "========================================================\n";
        cout << "What do you want to do?\n";
        cout << "1. Enter an expression\n";
        cout << "0. Exit\n\n";
        if (!(choice >= 0 && choice <= 1))
        {
            cout << "Please enter again!" << endl;
        }
        cout << "Please enter your choice: ";
        cin >> choice;
        cout << "\n========================================================\n";

        if (choice == 1)
        {
            cout << "\nEnter an expression: ";
            cin.ignore();
            getline(cin, str);
            list.push_back(str);
            n++;
        }

    } while (choice);

    cout << "The list of expressions that you've entered";
    if (n == 0)
    {
        cout << ": Empty";
        return 0;
    }

    cout << endl;
    for (unsigned int i = 0; i < list.size(); i++)
        cout << i + 1 << ". " << list[i] << endl;

    cout << "\n========================================================\n";
    cout << "Result" << endl;
    for (unsigned int i = 0; i < list.size(); i++)
    {
        try {
            CalculateInfix_Solution sol;
            vector<string> s = sol.StringHandling(list[i]);
            vector<string> a = sol.InfixToPostfix(s);
            float t = sol.calculatePostfix(a);
            cout << i + 1 << ". " << list[i] + " = " << t << endl;
        }
        catch (const char* message) {
            cerr << i + 1 << ". " << message << endl;
        }
    }
    system("pause");
    return 0;
}