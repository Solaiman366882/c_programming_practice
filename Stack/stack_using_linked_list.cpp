#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * prev;
    Node * next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class myStack
{
private:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
public:
    void push(int val)
    {
        Node * newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        sz++;
    }
    void pop()
    {
        Node * deleteNode = tail;
        if(tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        tail = tail->prev;
        delete deleteNode;
        sz--;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
