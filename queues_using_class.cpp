#include<bits/stdc++.h>
using namespace std;

class queues{
    private:
        int front,rear,q[100];
    
    public:
        queues() : front(-1),rear(-1) {}

        bool isFull()
        {
            return front!=-1 && rear!=-1; 
        }
        bool isEmpty()
        {
            return front==-1 && rear==-1;
        }
        void enqueue(int n)
        {
            if(!isFull()) 
            {
                q[++rear]=n;
                front=1;
            }
        }
        int dequeue()
        {
            if(!isEmpty()) return front++;
        }
        void display()
        {
            for(int i=front;i<=rear;i++)
            {
                cout << q[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    queues qu;
    qu.enqueue(10);
    qu.enqueue(20);
    // cout << qu.dequeue();
    qu.display();

}