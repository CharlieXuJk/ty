/*
 * @lc app=leetcode.cn id=718 lang=cpp
 *
 * [718] 最长重复子数组
 */
class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        if(A.size()==0||B.size()==0) return 0;
        int Alength = A.size()+1;
        int Blength = B.size()+1;
        int max = INT_MIN;
        vector<vector<int>> dp(Alength, vector<int>(Blength,0));
        for(auto i = 1; i<Alength;i++){
            for(auto j = 1; j<Blength; j++){
                if(A[i-1] == B[j-1] ){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }else{
                    dp[i][j] = 0;
                }
            max =(max <= dp[i][j] ? dp[i][j] : max);
            }
        }
        return max;
    }
};

