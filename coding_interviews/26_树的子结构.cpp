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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot2 == nullptr || pRoot1 == nullptr) 
            return false;
        
        if(pRoot1->val == pRoot2->val){
            if(isSame(pRoot1,pRoot2)){
                return true;
            }
        }
        if(pRoot1->val != pRoot2->val){
              return HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
        }
    }
    bool isSame(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot2 == nullptr){
            return true;
        }
        if(pRoot1 == nullptr || pRoot1->val != pRoot2->val){
            return false;
        }
        return isSame(pRoot1->left,pRoot2->left) && isSame(pRoot1->right, pRoot2->right);
    }
};