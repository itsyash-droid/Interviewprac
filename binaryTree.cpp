#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value): data(value), left(nullptr), right(nullptr) {}
};

void preOrder(TreeNode *root) {
        if(root == NULL){
            return;
        }
        std::cout <<root->data <<endl;
        preOrder(root->left);
        preOrder(root->right);
        
    }

void postOrder(TreeNode *root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    std::cout <<root->data <<endl;
}

void inOrder(TreeNode *root) {
        if(root==NULL) return;
        
        inOrder(root->left);
        std::cout<< root->data<< " ";
        inOrder(root->right);
    }

int findHeight(TreeNode* root) {
    if (root == nullptr) 
        return -1; // If considering height as the number of edges, return -1. If considering nodes, return 0.
    
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int main() {
    // Creating a simple binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Height of the tree: " << findHeight(root) << endl;
    
    return 0;
}

void levelOrder(TreeNode * root) {
        if(root == NULL) return;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            
            cout <<curr->data<< " ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        cout<< endl;

    }