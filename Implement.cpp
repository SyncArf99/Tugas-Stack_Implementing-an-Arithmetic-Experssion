#include<iostream>
#include<stack>
#include<string>
using namespace std;

int InfixtoPostfix();
int Evaluate();
bool isOperand(char);
bool isOperator(char);
int evalOperation(char,int,int);

int main ()
{
	string Q;
	cout<<"Enter Infix Expression : ";
	getline(cin,Q);

}

int InfixtoPostfix ()
{
	stack<char> P;
	int i=0;
	while (i<Q.length())
	{
		if(isOperand(Q[i]))
		{
			//add it to P
		}
		else if(Q[i]=='(')
		{
			P.push(Q[i])
		}
		else if(Q[i]==')')
		{
			while(!P.empty() && P.top() != '(')
			{
				//Pop the stack and add the popped value to P
			}
			P.pop();
		}
		else if(isOperator(Q[i]))
		{
			if(P.empty() || P.top()='(')
			{
				P.push(Q[i]);
			}
			else
			{
				while(!P.empty() && P.top() != '(' && /*prendence...*/)
				{
					//Pop the stack and add the top value to P
				}
				P.push(Q[i])
			}
		}
	} i++;
	while(!P.empty())
	{
		//Pop the stack and add the popped value to P
	}

	return 0;
}

int Evaluate() 
{
	stack<char> P;
	int i=0;
	while(i<P.length())
	{
		if(isOperand(P[i]))
		{
			P.push(P[i])
		}
		if(isOperator(P[i]))
		{
			int operandA = P.top(); P.pop();
			int operandB = P.top(); P.pop();
			int eval = evalOperation(P[i], operandA, operandB);
			P.push(P[i]);
		}
	} i++;
	P.pop();
}

bool isOperand(char A) 
{
	if(A >= '0' && A <= '9') return true;
	if(A >= 'a' && A <= 'z') return true;
	if(A >= 'A' && A <= 'Z') return true;
	return false;
}

bool isOperator(char A)
{
	if(A == '+' || A == '-' || A == '*' || A == '/')
		return true;

	return false;
}

int evalOperation(char operation, int operandA, int operandB)
{
	 if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
