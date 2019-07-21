/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */
class Solution {
public:
    int binarySearch(vector<int>&nums, int target){
        if(nums.size() == 0) return -1;

        int lo = 0, hi = nums.size()-1;
        while(lo < hi){
            int mid = (lo+hi)/2;
            if(nums[mid] >= target){
                hi = mid;
            }else{lo = mid + 1;}
        }
        if(nums[lo] == target){
            return lo;
        }else{return -1;}
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int ans1 = binarySearch(nums, target);
        int ans2 = ans1;
        if(ans1 == -1){   
            ans.push_back(-1);
            ans.push_back(-1);
        }else{
            for(auto i = 0; i < ans1; i++){
                if(nums[ans1 - i] != target){
                    ans1 = ans1-i+1;
                    break;
                }
            }
            for(auto i = 0; i < nums.size()-ans2;i++){
                if(nums[ans2+i]!=target){
                    ans2 = ans2+i-1;
                    break;
                }
            }
            
            ans.push_back(nums[0]==target?0:ans1);
            ans.push_back(nums[nums.size()-1]==target?nums.size()-1:ans2);
        }
        return ans;
    }
};

