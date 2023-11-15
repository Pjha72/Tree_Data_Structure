#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node*right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Height of a binary tree is the number of edges in the longest path from the root node to a leaf node.
//Time Complexity: O(n)
//Space Complexity: O(h) where h is the height of the tree

int Height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = Height(root->left);
    int rHeight = Height(root->right);
    return max(lHeight,rHeight)+1;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout<<Height(root);
}