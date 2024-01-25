#include <bits/stdc++.h>

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
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail=tail->next;
    }
    void pop()
    {
        Node * deleteNode = tail;
        sz--;
        tail =  tail->prev;
        if(tail == NULL)
        {
            head = NULL;
            delete deleteNode;
            return ;
        }
        tail->next = NULL;
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

class myQueue
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
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        Node * deleteNode = head;
        sz--;
        if(head == NULL) return;
        head = head->next;
        //head->prev = NULL;
        delete deleteNode;
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
    // Write your code here
    int n,m;
    cin >> n >> m;
    myStack s;
    myQueue q;
    bool flag = true;
    for(int i=0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    for(int i=0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    if(s.size() != q.size()) flag = false;
    else
    {
        while(!s.empty() && !q.empty())
        {
            if(s.top() != q.front())
            {
                flag = false;
                break;
            }
            //cout << s.top() << " = " << q.front() << endl;
            s.pop();
            q.pop();
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

