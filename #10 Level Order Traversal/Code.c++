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

// Time Complexity - O(N)
// Space Complexity - O(N) or O(W) where W is a width of binary tree

void printLevelOrder(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);

    while(q.empty()==false){
        Node* node = q.front();
        q.pop();
        cout<<node->data<<" ";
        if(node->left!=NULL){
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLevelOrder(root);
}