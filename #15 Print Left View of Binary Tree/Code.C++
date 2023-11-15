// To Print Left View of Binary Tree we need to print the leftmost node at every level of the Binary Tree.
#include <bits/stdc++.h>
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

int maxLevel = 0;
//Method - 1 : Using Recursion(Preorder Traversal)
void leftView(Node* root, int level){
    if(root==NULL) return;
    if(maxLevel < level){
        cout<<root->data<<" ";
        maxLevel = level;
    }

    leftView(root->left, level+1);
    leftView(root->right, level+1);
}

//Method - 2 : Using Queue(BFS) : Level order Traversal
// Time Complexity: O(N)
// Space Complexity: O(N) or O(W) where W is the width of the Binary Tree

void leftView(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        int count = q.size();
        for(int i=0;i<count;i++){
            Node* curr = q.front();
            q.pop();
            if(i==0){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(40);
    root->left->left = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    leftView(root,1);
}