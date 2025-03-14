#include <bits/stdc++.h>

using namespace std;

int count = 0;
int maxi = INT_MIN;

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
        cout <<root->data <<endl;
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

bool comparingBT(TreeNode* root1, TreeNode* root2){

    if (root1 == nullptr && root2 == nullptr) return true;
    
    if (root1 == nullptr || root2 == nullptr) return false;

    return (root1->data == root2->data) &&
           comparingBT(root1->left, root2->left) &&
           comparingBT(root1->right, root2->right);
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    if(!root || p == root || q == root) return root;

    TreeNode* left = lowestCommonAncestor(root->left,p,q);
    TreeNode* right = lowestCommonAncestor(root->right,p,q);

    if (left && right)
        return root;

    return left ? left : right;
}

TreeNode* minNode(TreeNode* root){
    while(root->left){
        root = root->left;
    }
    return root;
}

TreeNode* deleteNode(TreeNode* root,int key){
    if(!root) return root;

    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }
    else{
        if(!root->left && !root->right){
            delete root;
            return nullptr;
        }
        else if(!root->left){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        else{
            TreeNode* temp = minNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

vector<int> leftView(TreeNode* root) {
    if (!root) return {};

    vector<int> result;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    map<int, int> levelMap;

    while (!q.empty()) {
        auto [node, level] = q.front();
        q.pop();

        if (levelMap.find(level) == levelMap.end()) {
            levelMap[level] = node->data;
            result.push_back(node->data);
        }

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }

    return result;
}

// Function to get the Right View of the Binary Tree
vector<int> rightView(TreeNode* root) {
    if (!root) return {};

    vector<int> result;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    map<int, int> lastNodeAtLevel;

    while (!q.empty()) {
        auto [node, level] = q.front();
        q.pop();

        lastNodeAtLevel[level] = node->data;

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }

    for (auto& pair : lastNodeAtLevel) {
        result.push_back(pair.second);
    }

    return result;
}

int sumAll(TreeNode* root,int &sum){
    if(root == nullptr){
        return 0;
    }
    sum += root->data;
    sumAll(root->left, sum);
    sumAll(root->right, sum);

    return sum;
}

int diameter(TreeNode* root,int& maxi){
    if(!root){
        return 0;
    }

    int LH = diameter(root->left,maxi);
    int RH = diameter(root->right,maxi);

    maxi = max(maxi,LH+RH);

    return 1 + max(LH,RH);
}

int diameterOfBt(TreeNode* root){
   int maxi = INT_MIN;
   diameter(root,maxi);
   return maxi;
}

int checkHeight(TreeNode* root) {
    if (!root) return 0;

    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1) return -1;  // If left subtree is unbalanced, propagate -1

    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1) return -1;  // If right subtree is unbalanced, propagate -1

    if (abs(leftHeight - rightHeight) > 1) return -1;  // If unbalanced, return -1

    return max(leftHeight, rightHeight) + 1;  // Return actual height
}

bool BalancedBt(TreeNode* root) {
    return checkHeight(root) != -1;  // If checkHeight returns -1, tree is unbalanced
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
    cout<<comparingBT(root,roott);
    
    //cout << "Minimum data is: " << minVal << endl;
    //cout << "Maximum data is: " << maxVal << endl;
    
    return 0;
}

