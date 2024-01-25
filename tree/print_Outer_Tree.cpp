#include <bits/stdc++.h>

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
    Node * root;
    queue <Node *> q;
    int val;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();

        int l,r;
        Node * leftNode, * rightNode;
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

void print_right(Node * root)
{
    if(root == NULL);
    cout << root->val << " ";
    print_right(root->right);
}

void print_left(Node * root)
{
    if(root == NULL) return ;
    print_left(root->left);
    cout << root->val << " ";
}

int main()
{
    Node * root = tree_input();
    if(root->left)print_left(root->left);
    cout << root->val << " ";
    if(root->right)print_right(root->right);

    return 0;
}



