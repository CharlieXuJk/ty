/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
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
    bool isFather(TreeNode* root, TreeNode*p){
        if(root == nullptr) return false;
        if(root->val == p->val) return true;
        return isFather(root->left,p) || isFather(root->right,p);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* search = root;
        //if((!isFather(search->left,p)||!isFather(search->left,q))&&(!isFather(search->right,p)||!isFather(search->right,q))) return search;
        if(search->left!=nullptr&&isFather(search->left,p)&&isFather(search->left,q)) return lowestCommonAncestor(search->left,p,q);
        if(search->right!=nullptr&&isFather(search->right,p)&&isFather(search->right,q)) return lowestCommonAncestor(search->right,p,q);
        return search;   
    }
};

