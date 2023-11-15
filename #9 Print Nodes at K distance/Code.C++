#include<bits/stdc++.h>
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

// Time Complexity: O(N)
// Space Complexity: O(N)

void PrintKNodes(Node* root, int k){
    if(root==NULL){
        return;
    }

    if(k==0){
        cout<<root->data<<" ";
        return;
    }

    PrintKNodes(root->left, k-1);
    PrintKNodes(root->right, k-1);
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);
    PrintKNodes(root,2);
}