/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto i = 0; i < nums.size(); i++){
            res = res ^ nums[i];
        }
        return res;
    }
};

