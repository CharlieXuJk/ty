/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size() == 0) return 0;
        int lo = 0, hi = nums.size()-1;
        while(lo < hi){
            int mid = (lo + hi)/2;
            if (nums[mid] >= target){
                hi = mid;
            }else{lo =mid + 1;}
        }
        return nums[lo] < target ? lo+1:lo;
    }
};

