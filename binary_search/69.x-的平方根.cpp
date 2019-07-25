/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */
class Solution {
public:
    int mySqrt(int x) {
        int lo = 0; int hi = x;
        if(x == 1)return 1;
        if(x == 0)return 0;
        while(lo < hi){
            int mid = (lo+hi+1ll)/2;
            if(mid > x/mid){
                hi = mid-1;
            }else{lo = mid ;}
        }
        return lo;
    }
};

