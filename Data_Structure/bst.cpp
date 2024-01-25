#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * left;
    Node * right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};

Node * tree_input()
{
    int val;
    cin >> val;
    Node * root;
    if(val == -1) root = NULL;
    else root =  new Node(val);
    queue <Node *> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();

        int l,r;
        Node * leftNode;
        Node *rightNode;
        cin >> l >> r;
        if(l == -1) leftNode = NULL;
        else leftNode = new Node(l);
        if(r == -1) rightNode = NULL;
        else rightNode = new Node(r);
        f->left = leftNode;
        f->right = rightNode;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

void level_order(Node * root)
{
    queue <Node *> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();

        cout << f->val << " ";
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

bool search(Node * root,int v)
{
    if(!root) return false;
    if(root->val == v) return true;

    if(root->val > v) return search(root->left,v);
    else return search(root->right,v);
}

int main()
{
    Node * root = tree_input();
    int n;
    cin >> n;
    if(search(root,n)) cout << "Yes,Found" <<endl;
    else cout << "No, Not Found" << endl;
    return 0;
}
