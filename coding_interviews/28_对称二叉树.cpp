/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(pRoot == nullptr)
            return true;
        return dfs(pRoot->left,pRoot->right);
       
        
    }
    bool dfs(TreeNode* pleft, TreeNode* pright){
        if(pleft == nullptr && pright == nullptr){
            return true;
         }else if(pleft == nullptr || pright == nullptr ||(pleft->val != pright->val)){
            return false;
        }
        return dfs(pleft->left,pright->right) && dfs(pleft->right,pright->left);
    }

};