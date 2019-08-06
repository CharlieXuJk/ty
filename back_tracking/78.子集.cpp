/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */
class Solution {
public:
    vector<vector<int>> ans;

    void dfs(vector<int> &nums, int i, vector<int> temp){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }
        dfs(nums,i+1,temp);
        temp.push_back(nums[i]);
        dfs(nums,i+1,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        dfs(nums,0,temp);
        return ans;
    }
};

