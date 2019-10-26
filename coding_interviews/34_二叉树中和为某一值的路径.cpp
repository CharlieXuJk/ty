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
    vector<vector<int>> ans;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(root == nullptr){
            return ans;
        }
        int sum = 0;
        vector<int> temp;
        dfs(root, expectNumber, sum, temp);
        sort(ans.begin(), ans.end(),longer);
        return ans;
            
    }
    void dfs(TreeNode* root, int expectNumber, int sum, vector<int> temp){
        sum+=root->val;
        temp.push_back(root->val);
        if(root ->left == nullptr && root->right == nullptr && expectNumber == sum){
            ans.push_back(temp);
            return;
        }
        if(root->left == nullptr && root->right==nullptr && expectNumber != sum)
            return;
        if(root ->left != nullptr)
            dfs(root->left, expectNumber, sum, temp);
        if(root->right != nullptr)
            dfs(root->right,expectNumber,sum,temp);
    }
    static bool longer(vector<int> a, vector<int> b){
        if(a.size() > b.size())
            return true;
        return false;
    }
};