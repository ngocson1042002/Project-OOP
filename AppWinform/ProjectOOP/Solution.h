#ifndef Solution_h
#define Solution_h

#include "MathFunctions.h"
#include "Stack.h"
#include <sstream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
	bool isDigit(char c);
	bool isLetter(char c);
	int precedence(string c);
	vector<string> StringHandling(string& str);
	vector<string> InfixToPostfix(vector<string> s);
	float calculatePostfix(vector<string> s);
};

template < typename Type >
string to_str(const Type& t)
{
	ostringstream os;
	os << t;
	return os.str();
}

#endif