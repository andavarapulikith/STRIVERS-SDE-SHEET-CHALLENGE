#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {

    map<int, int> hash;
    vector<int> ans;
    if(root == NULL) return ans;
    // We will do a Level Order Traversal
    queue<pair<TreeNode<int>*, int>> q;
    pair<TreeNode<int>*, int> p = make_pair(root, 0);
    q.push(p);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            pair<TreeNode<int>*, int> curr = q.front();
            q.pop();
            if(hash.find(curr.second) == hash.end()){
                hash[curr.second] = curr.first->val;
            }
            if(curr.first->left != NULL){
                pair<TreeNode<int>*, int> p = make_pair(curr.first->left, curr.second - 1);
                q.push(p);
            }
            if(curr.first->right != NULL){
                pair<TreeNode<int>*, int> p = make_pair(curr.first->right, curr.second + 1);
                q.push(p);
            }
        }
    }

    for(auto it : hash){
        ans.push_back(it.second);
    }

    return ans;
}