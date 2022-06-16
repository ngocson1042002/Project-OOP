#ifndef Solution_h
#define Solution_h

#include "MathFunctions.h"
#include "Stack.h"
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class CalculateInfix_Solution {
public:
	bool isDigit(char c);
	bool isLetter(char c);
	int precedence(string c);
	vector<string> StringHandling(string& str);
	vector<string> InfixToPostfix(vector<string> s);
	float calculatePostfix(vector<string> s);
};

#endif