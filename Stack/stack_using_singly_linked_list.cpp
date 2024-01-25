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
public:
    Node * head = NULL;
    int sz = 0;
    void push(int val)
    {
        Node * newNode = new Node(val);
        sz++;
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void pop()
    {
        Node * deleteNode = head;
        if(head == NULL) return;
        head = head->next;
        delete deleteNode;
        sz--;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return head->val;
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
