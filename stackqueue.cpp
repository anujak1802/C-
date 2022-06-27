#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    Stack()
    {
        N = 0;
    }
    void push(int x)
    {
        q2.push(x);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        if(q1.empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        q1.pop();
        N--;
    }
    int top()
    {
        return q1.front();
    }
    int size()
    {
        return N;
    }
};

int main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    
    return 0;
}