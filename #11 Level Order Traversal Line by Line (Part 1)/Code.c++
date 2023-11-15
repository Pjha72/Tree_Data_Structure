//Level Order Traversal Line by Line (Part 1)
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

//Time Complexity - O(N)
//Space Complexity - O(N) or O(W) where W is the width of the binary tree

void LevelOrderLineByLine(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node* node = q.front();
        q.pop();
        if(node==NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    LevelOrderLineByLine(root);
}

