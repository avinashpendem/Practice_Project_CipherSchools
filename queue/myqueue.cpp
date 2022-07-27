include <bits/stdc++.h>

using namespace std;

class MyQueue
{
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        while (s1.empty())
        {
            int t = s1.top();
            s2.push(t);
            s1.pop();
        }

        s1.push(x);
        while (s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop()
    {
        int t = s1.top();
        s1.pop();
        return t;
    }

    int peek()
    {
        return s1.top();
    }

    bool empty()
    {
        return s1.empty();
    }
};

int main()
{
    MyQueue *obj = new MyQueue();
    obj->push(12);
    cout << obj->pop() << endl;
    cout << obj->peek() << endl;
    cout << obj->empty() << endl;

    return 0;
} 
