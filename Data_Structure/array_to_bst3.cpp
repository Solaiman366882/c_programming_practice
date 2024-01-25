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

bool search(Node * root, int v)
{
    if(!root) return false;
    if(root->val == v) return true;

    if(v < root->val) return search(root->left,v);
    else return search(root->right,v);
}

void insert_at_bst(Node * &root,int v)
{
    if(root == NULL)
    {
        root = new Node(v);
        return;
    }
    if(root->val > v)
    {
        if(root->left == NULL) root->left = new Node(v);
        else insert_at_bst(root->left,v);
    }
    else
    {
        if(root->right == NULL) root->right = new Node(v);
        else insert_at_bst(root->right,v);
    }
}

Node * convert(int a[], int l, int r)
{
    if(l > r) return NULL;
    int mid = (l + r)/2;
    Node * root = new Node(a[mid]);
    Node * leftNode = convert(a,l,mid-1);
    Node * rightNode = convert(a,mid+1,r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++) cin >> arr[i];
    Node * root = convert(arr,0,n-1);
    level_order(root);
    return 0;
}

/*

10 5 15  2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1

*/


