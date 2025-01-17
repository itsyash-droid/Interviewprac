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