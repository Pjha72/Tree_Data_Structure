#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(H) where H is the height of the tree
void Inorder(Node * root){
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    Inorder(root);
}