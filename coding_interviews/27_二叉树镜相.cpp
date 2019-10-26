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
    void Mirror(TreeNode *pRoot) {
        transform(pRoot);
    }
    void transform(TreeNode *root){
        if(root == nullptr){
            return;
        }
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        transform( root->left);
        transform( root->right);
    }
};