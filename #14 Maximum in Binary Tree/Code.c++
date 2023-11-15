// Largest node(key) in a Tree is the maximum of the Tree.
#include<bits/stdc++.h>.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Time Complexity : O(N)
// Aux Space : O(H) , H is the height of the tree.

int LargestNode(Node* root){
    if(root==NULL){
        return INT_MIN;
    }
    else{
        return max(root->data, max(LargestNode(root->left),LargestNode(root->right)));
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->left->left  = new Node(60);
    root->left->right = new Node(70);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout<<LargestNode(root);
}