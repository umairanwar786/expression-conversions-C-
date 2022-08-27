#pragma once
#include<iostream>
#include"stack.h"
#include"queue.h"
using namespace std;
#include<string.h>
class postTOpre
{
	string pre="";
public:
	void convert(string input);
	
	bool isoperator(char a);
	void display();

	
};

