#pragma once
#include<iostream>
using namespace std;
#include"stack.h"
#include<string>
class prefix
{
	string pre = "";
	stack<char> obj;
public:
	string revers(string);
	int priorty(char oper);
	bool isoperaned(char value);
	void convert(string infix);
	void display();
	int length(string);
	string getpre();


};

