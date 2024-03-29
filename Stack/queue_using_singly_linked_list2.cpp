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

class myQueue
{
private:
    Node * head = NULL;
    Node * tail =  NULL;
    int sz = 0;
public:
    void push(int val)
    {
        Node * newNode = new Node(val);
        sz++;
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
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
    myQueue q;
    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}

