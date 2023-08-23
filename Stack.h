#pragma once
#include "List.h"
#include "Location.h"
#define MAX 225

class Stack : public Nord
{
private:
    Location arr[MAX];
    int top;
public:
    Stack();
    bool isEmpty();
    void Push(Location s);
    Location Pop();
    void print();
};