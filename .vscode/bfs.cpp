#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
}
void printLevelOrder ( Node* root)
{
    if( root==NULL)
    return;
    queue <Node*> q;
    q.push(root);
    while (q.empty()== false)
    {
        Node* node= q.front();
        cout<< node->data << 
    }
}
int main()
{
    class node
    {
        int data;
        node *left, *right;
    };

}