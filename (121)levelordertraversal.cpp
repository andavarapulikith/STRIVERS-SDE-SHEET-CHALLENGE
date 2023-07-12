#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void dfs(BinaryTreeNode<int>* root, int level, vector<vector<int>>& result) {

    if (root == NULL)

        return;

 

    if (level >= result.size()) {

        result.push_back({});

    }

 

    result[level].push_back(root->val);

 

    dfs(root->left, level + 1, result);

    dfs(root->right, level + 1, result);

}

 

vector<int> getLevelOrder(BinaryTreeNode<int> *root)

{

    vector<vector<int>> v;

    dfs(root, 0, v);

   // return result;

 

//Copy 2D vector value into ans vector

     vector<int>ans;

       for(int i=0;i<v.size();i++)

       {

           for(int j=0;j<v[i].size();j++)

           {

               ans.push_back(v[i][j]);

           }

       }

       return ans ;

}