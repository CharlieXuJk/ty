/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */
class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int k, int i, vector<int> temp,int n){
        if(i == k && accumulate(temp.begin(), temp.end(),0) == n){
            ans.push_back(temp);
            return;
        }else if(i == k) return;
        int init = i==0 ? 1 : temp[i-1]+1;
        for(auto j = init; j <=9; j++){
            temp.push_back(j);
            dfs(k,i+1,temp,n);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        dfs(k,0,temp,n);
        return ans;
    }
};

