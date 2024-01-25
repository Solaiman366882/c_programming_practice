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
    Node * root;
    queue <Node *> q;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();

        int l,r;
        Node * leftNode;
        Node * rightNode;
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

void lavel_order(Node * root)
{
    if(root == NULL)
    {
        cout << "Tree is Empty" << endl;
        return;
    }
    queue <Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int countNode(Node * root)
{
    if(root == NULL) return 0;
    int l = countNode(root->left);
    int r = countNode(root->right);
    int total =  l+r+1;
    return total;
}

int countLeafNode(Node * root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    else
    {
        int l = countLeafNode(root->left);
        int r = countLeafNode(root->right);
        return l+r;
    }
}

int maxHeight(Node * root)
{
    if(root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r) +1;
}

int main()
{
    Node * root = tree_input();
    lavel_order(root);

    cout << endl << endl << "Total Node:" << countNode(root) << " Leaf Node:" << countLeafNode(root) << " Max Height:" << maxHeight(root) << endl;
    return 0;
}

/*

input

10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1

*/
