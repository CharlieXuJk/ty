/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> temp(n, INT_MAX);
        for(auto i = 0; i < n; i++){
            temp[i] = triangle[n-1][i];
        }
        for(auto i = n-2; i >=0; i--){
            for(auto j = 0; j<=i;j++){
                temp[j] = temp[j] < temp[j+1] ? temp[j]+triangle[i][j] : temp[j+1] + triangle[i][j];
            }
        }
        return temp[0];
    }
};

