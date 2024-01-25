#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * next;
    Node * prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
        sz++;
        if(head ==  NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail =  tail->next;
    }
    void pop()
    {
        Node * deleteNode = tail;
        tail = tail->prev;
        sz--;
        if(tail == NULL)
        {
            head = NULL;
            delete deleteNode;
            return ;
        }
        tail->next =  NULL;
        delete deleteNode;
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
    myStack st1,st2;
    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    int n2;
    cin >> n2;
    for(int i=0; i < n2; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    bool flag = true;
    if(st1.size() != st2.size())
    {
        flag = false;
    }
    else
    {
        while(!st1.empty() && !st2.empty())
        {
            //cout << st1.top() << " " << st2.top() << endl;
            if(st1.top() != st2.top())
            {
                flag =  false;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;

}

