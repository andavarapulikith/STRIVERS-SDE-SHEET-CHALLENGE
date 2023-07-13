#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    
    BinaryTreeNode<int>* head = NULL;
    BinaryTreeNode<int>* prev = NULL;
    BinaryTreeNode<int>* curr = root;

    while(curr != NULL){
        if(curr->left == NULL){
            // head will store head of linked list
            if(head == NULL) head = curr;
            curr->left = prev;
            if(prev) prev->right = curr;
            prev = curr;
            curr = curr->right;
        }
        else{
            BinaryTreeNode<int>* next = curr->left;
            // move to extreme right
            while(next->right != NULL && next->right != curr) next = next->right;
            if(next->right == NULL){
                next->right = curr;
                curr = curr->left;
            }
            else{
                curr->left = prev;
                prev = curr;
                curr = curr->right;
            }

        }
    }
    return head;
}