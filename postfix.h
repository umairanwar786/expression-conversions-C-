#pragma once
#include<iostream>
using namespace std;
#include"stack.h"
class postfix
{
	stack<char> obj;
	string post="";
public:
	postfix();
	int priorty(char oper);
	bool isoperaned(char value);
	void convert(string);
	void displaypost();
	int length(string);
	string getpost();
	~postfix();



};

