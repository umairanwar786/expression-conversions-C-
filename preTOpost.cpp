#include "preTOpost.h"


void preTOpost::convert(string input)
{
	int c = 1;


	stack<string> obj;
	stack<char> ob1;
	string o1 = " ";
	string o2 = " ";
	string tempresult = " ";
	for (int i = input.length() - 1; i >= 0; i--)
	{
		if (!isoperand(input[i]))
		{
			
			o1 = ob1.pop();
			if (c > 1)
			o2 = ob1.pop();
			c++;

			tempresult =  o1 + o2+input[i] ;
			obj.push(tempresult);
		}
		else
		{
			ob1.push(input[i]);
		}

	}
	while (!ob1.empty())
		ob1.pop();
	while(!obj.empty())
	post += obj.pop();



}

void preTOpost::display()
{
	cout << "postfix is:" << post << endl;
	this->post = "\0";

}
bool preTOpost:: isoperand(char c)
{
	if (c >= 'a' && c <= 'a' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
		return true;
	else
		return false;


}
