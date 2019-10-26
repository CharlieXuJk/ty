/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int max = 0;
    int TreeDepth(TreeNode* pRoot)
    {
        int temp = 0;
        dfs(pRoot, temp);
        return max;
    }
    
    void dfs(TreeNode* root, int temp){
        if(root == nullptr)
        {
            if(temp > max){
                max = temp;
            }
            return;
        }
        temp++;
        dfs(root->left, temp);
        dfs(root->right, temp);
    }
};