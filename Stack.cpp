#include "Stack.h"
Stack::Stack()
{
    top = -1;
}
bool Stack::isEmpty()
{
    if (top == -1)
    {
        cout << endl << "Stack is Empty" << endl;
        return true;
    }
    else
        return false;
}
void Stack::Push(Location s)
{
    if (top == MAX - 1)
    {
        cout << endl << "Stack is full";
        return;
    }
    top++;
    arr[top].setx(s.getx());
    arr[top].sety(s.gety());
}

Location Stack::Pop()
{
    if (isEmpty() == true)
    { 
        Location newloc(-1, -1);
        return newloc;
    }
    top--;
   /* cout << this->arr[top].getx() << this->arr[top].gety() << endl;*/
    Location newLoc(this->arr[top].getx(), this->arr[top].gety());
    return newLoc;
}
void Stack::print()
{
    for (int i = 0; i < top;)
    {
        Location loc;
        loc = this->Pop();
        cout << '(' << loc.getx() << ',' << loc.gety() << ')' << endl;
    }
}
