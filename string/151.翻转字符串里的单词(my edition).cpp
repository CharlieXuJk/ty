/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */
class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        int first = 0;
        while(s[first] == ' ') first++;
        for(auto i = first; i<s.size();i++){
            if(s[i]!=' ') continue;
            if(s[i] == ' ' )  {
                stk.push(s.substr(first,i-first));
                while(i<=s.size()-1&&s[i]==' '){
                    i++;
                }
                first = i;
            }
        }
        if(s.back()!=' ')
            stk.push(s.substr(first, s.size()-first));
        string ans;
        while(stk.size()!=0){
            string temp = stk.top();
            stk.pop();
            ans.append(temp);
            ans.push_back(' ');
        }
        ans.pop_back();
        return ans;

        
    }
};

