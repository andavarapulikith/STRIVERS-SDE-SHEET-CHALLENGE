#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
 
void leftSide(TreeNode<int> *root, vector<int> &res) {
    if (!root || (!root->left && !root->right))
        return;

    res.push_back(root->data);

    if (root->left)
        leftSide(root->left, res);
    else
        leftSide(root->right, res);
}

void rightSide(TreeNode<int> *root, vector<int> &res) {
    if (!root || (!root->left && !root->right))
        return;

    if (root->right)
        rightSide(root->right, res);
    else
        rightSide(root->left, res);

    res.push_back(root->data);
}

void leaves(TreeNode<int> *root, vector<int> &res) {
    if (!root)
        return;

    if (!root->left && !root->right) {
        res.push_back(root->data);
        return;
    }

    leaves(root->left, res);
    leaves(root->right, res);
}

vector<int> traverseBoundary(TreeNode<int> *root) {
    if (!root)
        return {};

    vector<int> res;
    res.push_back(root->data);

    leftSide(root->left, res);
    leaves(root->left, res);
    leaves(root->right, res);
    rightSide(root->right, res);

    return res;
}