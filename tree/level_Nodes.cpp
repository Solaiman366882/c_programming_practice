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

void print_level(Node * root)
{
    if(root == NULL) return;
    int pos;
    cin >> pos;
    queue <pair<Node * , int>> q;
    int totalLevel = 0;
    if(root) q.push({root,0});
    while(!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node * node = pr.first;
        int level = pr.second;
        q.pop();

        if(level > totalLevel) totalLevel++;
        if(level == pos) cout << node->val << " ";

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }

    if(totalLevel < pos) cout << "Invalid" << endl;

}

int main()
{
    Node * root = tree_input();
    print_level(root);
    return 0;
}


