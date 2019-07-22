/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool Symmetric(TreeNode*p, TreeNode*q){
        if((p==nullptr && q != nullptr)||(p!=nullptr&&q==nullptr)){
            return false;
        }
        if(p==nullptr && q == nullptr) return true;
        if(p->val!=q->val) return false;
        return Symmetric(p->left,q->right) && Symmetric(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        if(root->left==nullptr && root->right == nullptr) return true;
        return Symmetric(root->left,root->right);
        
        
    }
};

