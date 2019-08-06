/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> used;

    void dfs(vector<int>&nums,int i){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(auto j = 0; j < nums.size();j++){
            if(j!=0 && nums[j] == nums[j-1] && !used[j-1]){
                continue;
            }else if(!used[j]){
                temp.push_back(nums[j]);
                used[j] = true;
                dfs(nums, i+1);
                temp.pop_back();
                used[j] = false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        for(auto i = 0; i < nums.size(); i++){
            used.push_back(false);
        }
        sort(nums.begin(),nums.end());
        dfs(nums,0);
        return ans;
    }
};

