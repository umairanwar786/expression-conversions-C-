#include "postTOpre.h"
void postTOpre::convert(string input)
{
	queue<string> obj;
	queue<char> ob1;
	string o1 = " ";
	string o2 = " ";
	string tempresult=" ";
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (isoperator(input[i]))
		{
			
			o1 = ob1.dequeue();
			if (ob1.empty())
				o2 = " ";
			else
				o2 = ob1.dequeue();
				tempresult = input[i] + o1 + o2;
				obj.enqueue(tempresult);
			
		}
		else
		{
		
			ob1.enqueue(input[i]);
		}
		
	}
	while(!obj.empty())
	pre += obj.dequeue();
	

}
bool postTOpre::isoperator(char a)
{
	if (a == '+' || a == '-' || a == '*' || a == '/')
		return true;
	else
	return false;
}
void postTOpre::display()
{
	cout << "Prefix is: " << pre << endl;
	this->pre = "\0";
}