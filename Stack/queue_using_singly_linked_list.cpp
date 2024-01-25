#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val = val;
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
        sz++;
        Node * newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail =  newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        Node * deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL) tail = NULL;
        sz--;
    }
    int front()
    {
        return head->val;
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
        cout << st.front() << endl;
        st.pop();
    }
    return 0;
}
