#include "postfix.h"
postfix::postfix()
{
	
}
int postfix::priorty(char a)
{
    if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    return -1;

   
}
bool postfix::isoperaned(char oper)
{
    if (oper >= 'a' && oper <= 'z' || oper >= 'A' && oper <= 'Z' || oper >= '0' && oper <= '9')
        return true;
    else
        return false;
}
void postfix::convert(string infix)
{
    
   int l= length(infix);

   for(int i=0;i<l;i++)
    {
       
        if(isoperaned(infix[i]))
        {
            this->post += infix[i];
            
        }

        else if (infix[i] == '(')
        {
            obj.push(infix[i]);
        }

        else if (infix[i] == ')')
        {
            while (obj.topel() != '(') {
                post += obj.pop();
               
            }
            obj.pop();
           
        }
        else
        {
            while (!obj.empty() && priorty(infix[i]) <= priorty(obj.topel())) 
                     post += obj.pop();

                     obj.push(infix[i]);
           
        }
    }
    while (!obj.empty()) 
      post += obj.pop();
       
    

}
void postfix::displaypost()
{
    cout << "post fix is :" << post << endl;
}
postfix::~postfix()
{

}
int postfix::length(string input) {
    int l = 0;
    while (input[l] != '\0')
    {
        l++;
    }
    return l;
}

string postfix::getpost()
{
    if (length(post) > 1)
        return post;
    else
        return " No postfix found \n";

}
