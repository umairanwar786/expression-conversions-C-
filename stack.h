#pragma once
#include<iostream>
using namespace std;
template<typename T>
class stack
{

    T* arr;
    int maxsize;
    int top;


   
public:
    stack()
    {
        this->maxsize = 100;
        this->top = 0;
        this->arr = new T[maxsize];
      

    }stack(int ma)
    {
        maxsize = ma;
        top = 0;
        arr = new T[maxsize];
    }

    bool empty()
    {
        if (this->top <= 0)
            return true;
        else
        {
            return false;
        }
    }bool full()
    {
        if (this->top == this->maxsize)
            return true;
        else
            return false;
    }
    int size()
    {
        return this->top;
    }
    T topel()
    {
        if (size() > 0)
            return this->arr[this->top - 1];
        else
            return -1;
    }
    void push(T value)
    {


        if (this->top < this->maxsize)
        {
            this->arr[this->top] = value;
            top++;
        }
      /*  else
        {
            this->regrow(value);
            top++;
        }*/
    }
    T pop()
    {
        if (this->top >=-1)
        {
            

            return this->arr[--top];
        }
        else
        {
            return 0;
        }
    }
    ~stack()
    {
        
    }
    stack(stack& obj)
    {
        this->top = obj.top;
        this->maxsize = obj.maxsize;
        for (int i = 0; i < this->top; i++)
        {
            this->arr[i] = obj.arr[i];
        }
    }
    void display()
    {


        for (int i = 0; i < this->top; i++)
        {
            cout << this->arr[i];
        }
    }
};

