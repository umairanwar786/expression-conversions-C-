#pragma once
#include<iostream>
#include"stack.h"
#include"queue.h"
using namespace std;
class preTOpost
{
	string post = "";
public:
	void convert(string input);
	void display();
	bool isoperand(char c);
};

