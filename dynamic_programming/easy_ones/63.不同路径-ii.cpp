/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[0][0] == 1) return 0;
        
        vector<vector<long long>> cnt(m, vector<long long>(n));
        cnt[0][0] = 1;
        for(auto i = 0; i<m; i++){
            for(auto j = 0;j < n; j++){
                if(obstacleGrid[i][j] == 1){
                    cnt[i][j] = 0; 
                }else if(i>0 && j>0){
                    cnt[i][j] = cnt[i][j-1] + cnt[i-1][j];
                }else if(i==0 && j!=0){
                     cnt[i][j] = cnt[i][j-1];
                }else if(i!=0 && j==0){
                    cnt[i][j] = cnt[i-1][j];
                }
            }
        }
        return cnt[m-1][n-1];
    }
};

