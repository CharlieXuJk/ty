/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N皇后
 */
class Solution {
public:
    vector<vector<string>> ans;
    void dfs(int i, int j, vector<string>temp, vector<vector<bool>> able) {
	int n = able.size();
	if (i == n) {
		ans.push_back(temp);
		return;
	}
	if (j == n) return;
	if (able[i][j]) {
		temp[i][j]='Q';
		for (auto x = 0; x < n; x++) {
			able[i][x] = false;
			able[x][j] = false;
			if (j - i + x >= 0 && j - i + x < n)
				able[x][j - i + x] = false;
			if (i + j - x >= 0 && i + j - x < n)
				able[i + j - x][x] = false;
		}
        if(i == n-1) dfs(i+1,0,temp,able);
        else for(auto x = 0 ;x < n;x++)
			 dfs(i + 1, x, temp, able);
	}
}

    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp(n,string(n,'.'));
        vector<vector<bool>> able(n, vector<bool> (n,true));
        for(auto x = 0; x<n;x++){   
            dfs(0,x,temp,able);
        }
        return ans;
    }
};

