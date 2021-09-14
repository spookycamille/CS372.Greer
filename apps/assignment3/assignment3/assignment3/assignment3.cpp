#Camille Greer

#include<iostream>
#include<cctype>
#include<cstring>
#include<stack>

using namespace std;
double readAndEvaluate(istream& ins);
void evaluateStackTops(stack<double>& numbers, stack<char>& ops);
void infixToPostfix(string s);
string infixToPrefix(stack<char> s, string infix);
int main()
{
	int answer, answer2, answer3;
	cout << "Type a fully parenthsized expression" << endl;
	answer = readAndEvaluate(cin);
	cout << "That evaluates to " << answer << endl;
	answer2 = infixToPostfix(cin);
	cout << "That evaluates to " << answer2 << endl;
	answer3 = infixToPrefix(cin);
	cout << "That evaluates to " << answer3 << endl;
	return 0;
}

double readAndEvalute(istream& ins)
{
	const char DECIMAL = '.';
	const char RIGHTPAREN = ')';
	stack<double> numbers;
	stack<char> operations;
	double number;
	char symbol;
	while (ins && ins.peek() != '\n')
	{
		if (isdigit(ins.peek()) || (ins.peek() = DECIMAL))
		{
			ins >> number;
			numbers.push(number);
		}
		else if (strchr("+-*/", ins.peek()) != NULL)
		{
			ins >> symbol;
			operations.push(symbol);
		}
		else if (ins.peek() == RIGHTPAREN)
		{
			ins.ignore();
			evaluateStackTops(numbers, operations);
		}
		else
		{
			ins.ignore();
		}
	}
	return numbers.top();
}

void evaluateStackTops(stack<double>& numbers, stack<char>& ops)
{
	double op1, op2;
	op2 = numbers.top();
	numbers.pop();
	op1 = numbers.top();
	numbers.pop();
	switch (operations.top())
	{
	case '+': numbers.push(op1 + op2);
		break;
	case '-': numbers.push(op1 - op2);
		break;
	case '*': numbers.push(op1 * op2);
		break;
	case '/': numbers.push(op1 / op2);
		break;
	}
	operations.pop();
}

void infixToPostfix(istream& ins) 
{
	const char DECIMAL = '.';
	const char RIGHTPAREN = ')';
	stack<double> numbers;
	stack<char> operations;
	double number;
	char symbol;
	for (int i = 0; i<ins.peek(); i++)
	{
		if (isdigit(ins.peek()) || (ins.peek() = DECIMAL))
		{
			ins >> number;
			numbers.push(number);
		}
		else if (operations)
		{
			ins >> symbol;
			operations.push(symbol);
		}
		else if (ins.peek() == RIGHTPAREN)
		{
			ins.ignore();
			evaluateStackTops(numbers, operations);

			while (!numbers.empty && numbers.top != '(')
			{
				ins.peek() += numbers.top();
				numbers.pop();
			}
			numbers.pop();
		}
		else
		{
			ins.ignore();
		}
	}
	return numbers.top();
}

string infixToPrefix(istream& ins)
{
	const char DECIMAL = '.';
	const char RIGHTPAREN = ')';
	stack<double> numbers;
	stack<char> operations;
	double number;
	char symbol;
	for (int i = 0; i < ins.peek(); i++)
	{
		if (isdigit(ins.peek() = RIGHTPAREN) || (ins.peek() = DECIMAL))
		{
			ins >> number;
			numbers.push(number);
		}
		else if (strchr("+-*/", ins.peek()) != NULL)
		{
			ins >> symbol;
			operations.push(symbol);
		}
		else if (ins.peek() == RIGHTPAREN)
		{
			ins.ignore();
			evaluateStackTops(numbers, operations);
		}
		else
		{
			ins.ignore();
		}
	}
	return numbers.top();
}