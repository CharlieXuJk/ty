/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层次遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qu1;
        queue<TreeNode*> qu2;
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        qu1.push(root);
        while(qu1.size() || qu2.size()){
            vector<int> temp1;
            vector<int> temp2;
            while(qu1.size()){
                temp1.push_back(qu1.front()->val);
                if(qu1.front()->left) qu2.push(qu1.front()->left);
                if(qu1.front()->right) qu2.push(qu1.front()->right);
                qu1.pop();
            }
            if(!temp1.empty()) ans.push_back(temp1);
            while(qu2.size()){
                temp2.push_back(qu2.front()->val);
                if(qu2.front()->left) qu1.push(qu2.front()->left);
                if(qu2.front()->right) qu1.push(qu2.front()->right);
                qu2.pop();
            }
            if(!temp2.empty())ans.push_back(temp2);
        }
    return ans;
    }
};

