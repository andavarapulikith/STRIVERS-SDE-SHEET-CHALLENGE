#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int solve(TreeNode<int>* node,int x,int &res){

if(!node) return -1e9;

if(node->val>x) solve(node->left,x,res);

if(node->val<=x){

res=max(res,node->val);

solve(node->right,x,res);

}

return res;

 

}

 

int floorInBST(TreeNode<int> * root, int X)

{

// Write your code here.

int res=-1e9;

return solve(root,X,res);

}

