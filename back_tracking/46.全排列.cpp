/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */
class Solution {
public:
    vector<vector<int>>ans;       //不能用成员函数里的变量初始化
    vector<bool> used;                 
    vector<int> temp;
    void dfs(vector<int>& nums, int i){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(auto j = 0; j < nums.size(); j++){
            if(!used[j]) {
                temp.push_back(nums[j]);
                used[j] = true;
                dfs(nums,i+1);
                used[j] = false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
  // if(nums.size()==0 || nums.size()==1) return nums;
        for(auto i = 0;i<nums.size();i++){
            used.push_back(false);
        }
        dfs(nums,0);
        return ans;
    }
};
