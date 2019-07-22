/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
      /**  if(nums.size() < 5){
            int min = INT_MAX;
            for(auto m:nums){
                if(min > m){min = m;}
            }
            return min;
        }**/
        if(nums[0] < nums.back()) return nums[0];
        int lo = 0; int hi =nums.size()-1;
        while(lo < hi){
            int mid = (lo+hi)/2;
            if(nums[0] > nums[mid]){
                hi = mid;
            }else{lo = mid + 1;}
        }
        return nums[lo];
    }
};

