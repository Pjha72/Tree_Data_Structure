#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left ;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
// Time Complexity : O(N)
// Aux Space : O(H) , H is the height of the tree.
// Size of Binary Tree is the total numbers of nodes present in that Tree.
int getSize(Node* root){
    if(root == NULL) return 0;

    else return 1+getSize(root->left)+getSize(root->right);
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    cout<<getSize(root);
}