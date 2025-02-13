#include <bits/stdc++.h>

using namespace std;

int count = 0;

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

int numberOfNodes(TreeNode* root){
    if(root == nullptr)
        return 0;
    ::count++;
    numberOfNodes(root->left);
    numberOfNodes(root->right);

    return ::count;
}

void maxmin(TreeNode* root,int &minNode,int &maxNode){
    if(root == nullptr)
        return;
    
    minNode = min(root->data,minNode);
    maxNode = max(root->data,maxNode);

    maxmin(root->left,minNode,maxNode);
    maxmin(root->right,minNode,maxNode);
}

/*void levelOrder(TreeNode * root) {
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

    }*/

TreeNode* insertion(TreeNode* root, int data){
    if(!root){
        root == new TreeNode(data);
        return root;
    }

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(!temp->left){
            temp->left = new TreeNode(data);
        }
        else{
            q.push(temp->left);
        }
        if(!temp->right){
            temp->right = new TreeNode(data);
        }
        else{
            q.push(temp->right);
        }
    }
    return root;
}

bool comparingBT(TreeNode* root1, TreeNode* root2) {

    if (root1 == nullptr && root2 == nullptr) return true;
    
    if (root1 == nullptr || root2 == nullptr) return false;

    return (root1->data == root2->data) &&
           comparingBT(root1->left, root2->left) &&
           comparingBT(root1->right, root2->right);
}


int main() {
    // Creating a simple binary tree
    int maxNode = 0;
    int minNode = 999;
    bool x = false;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    TreeNode* roott = new TreeNode(1);
    roott->left = new TreeNode(2);
    roott->right = new TreeNode(3);
    roott->left->left = new TreeNode(4);
    roott->left->right = new TreeNode(6);

    //int minVal = numeric_limits<int>::max();
    //int maxVal = numeric_limits<int>::min();
    
    // Compute minimum and maximum
    cout<<comparingBT(root,roott,x);
    
    //cout << "Minimum data is: " << minVal << endl;
    //cout << "Maximum data is: " << maxVal << endl;
    
    return 0;
}

