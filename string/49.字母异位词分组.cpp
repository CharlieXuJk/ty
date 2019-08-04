/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dict;
        for(auto const &str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            dict[temp].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto i = dict.begin(); i!=dict.end();i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};

