#pragma once
template<typename T>
class queue 
{
    T * arr;
    int maxsize;
    int top;
    
public:
    queue()
    {

        this->maxsize = 20;
        top = 0;
        arr = new T[maxsize];

    }
    void enqueue(T value)
    {

        if (this->top < this->maxsize)
        {
            this->arr[this->top++] = value;
        }

    }T dequeue()
    {
        T value = this->arr[0];
       
        for (int i = 0; i < this->top - 1; i++)
        {
            this->arr[i] = this->arr[i + 1];

        }
        this->top--;
        return value;
    }
    bool empty()
    {
        if (this->top <= 0)
            return true;
        else
            return false;
    }
    bool full()
    {
        if (this->top == this->maxsize)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int size()
    {
        return this->top;
    }
    T value(int i)
    {
        T val = 0;
        val = this->arr[i];
        return val;
    }
};

