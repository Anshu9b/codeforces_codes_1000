#include <bits/stdc++.h>
using namespace std;
struct node()
{
    int data;
    struct node* left;
    struct node* right;

};



void inorder ( Node *root)
{
    if(root! = NULL)
    {
        inorder (root->left);
        cout<<(root->key) <<" ";
        inorder ( root->right);

    }
}


int main()


