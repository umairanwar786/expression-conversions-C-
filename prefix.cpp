#include "prefix.h"
string prefix::revers(string real)
{
    string temp = real;
    reverse(temp.begin(),temp.end());
    int l = length(temp);

   
 
    return temp;
}
int prefix::priorty(char oper)
{
    switch (oper)
    {
    case '-':
        return 1;
        break;
    case '+':
        return 2;
        break;
    case '*':
        return 3;
        break;
    case'/':
        return 4;
        break;
    default:
        return 0;
        break;


    }
}
bool prefix::isoperaned(char oper)
{
    if (oper >= 'a' && oper <= 'z' || oper >= 'A' && oper <= 'Z' || oper >= '0' && oper <= '9')
        return true;
    else
        return false;
}
void prefix::convert(string infix)
{

    string rev = revers(infix);
    int l = length(rev);
    for (int i = 0; i < l; i++)
    {
        if (isoperaned(rev[i]))
        {
            this->pre+= rev[i];

        }

        else if (rev[i] == ')')
        {
            obj.push(rev[i]);
        }

        else if (rev[i] == '(')
        {
            while (obj.topel() != ')') {
                pre += obj.pop();

            }
            obj.pop();

        }
        else
        {
            while (!obj.empty() && priorty(rev[i]) <= priorty(obj.topel()))
                pre += obj.pop();

            obj.push(rev[i]);
            
        }
   }
    while (!obj.empty())
        pre += obj.pop();

    pre= revers(pre);


}
void prefix::display()
{
    cout << "prefix is:" << pre;
}
int prefix::length(string input)
{

    int l = 0;
    while (input[l] != '\0')
    {
        l++;
    }
    return l;
}

string prefix::getpre()
{
    if (length(pre) > 1)
        return pre;
    else
        return " No Prefix is found\n";
}
