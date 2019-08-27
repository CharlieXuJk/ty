/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> cnt(amount+1, -1);
        cnt[0] = 0;
        for(auto i = 0; i < cnt.size(); i++){
            if(cnt[i]==-1) continue;
            for(auto j : coins){
                if((long long)i + (long long)j > (long long)(amount)) continue;
                if(cnt[i+j] == -1 || cnt[i+j] > cnt[i] + 1){
                    cnt[i+j] = cnt[i] + 1;
                }
            }
        }
        return cnt[amount];
        
        
    }
};

