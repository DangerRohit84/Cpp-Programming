#include<bits/stdc++.h>
using namespace std;

class stacks{
    private:
        int top, st[100];
    
    public:
        stacks() : top(-1) {}

        bool isEmpty()
        {
            return top==-1;
        }

        bool isFull()
        {
            return top==99;
        }

        void push(int n)
        {
            if(!isFull()) st[++top]=n;
        }

        int pop()
        {
            if(!isEmpty()) return st[top--];
            return -1;
        }

        int peek()
        {
            return (isEmpty()) ? -1:st[top];
        }
        void display()
        {
            if(!isEmpty())
            {
                for(int i=0;i<=top;i++)
                {
                    cout << st[i] << " ";
                }
            }
            else cout << "Stack is Full";
            cout << endl;
        }

};

int main()
{
    stacks s;
    s.push(10);
    s.push(20);
    s.display();
}