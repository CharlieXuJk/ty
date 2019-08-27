/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
class Solution {
public:
    string addBinary(string a, string b) {
        int flag = 0;
        string ans;
        auto itera = a.size()>=b.size()?a.rbegin() : b.rbegin();
        auto iterb = a.size()< b.size()?a.rbegin() : b.rbegin();
        while(iterb !=( a.size()< b.size()?a.rend() : b.rend())){
            int temp = *itera -'0' +*iterb -'0' + flag;
            switch (temp)
            {
            case 3:
                flag = 1;
                ans.push_back('1');
                break;
            case 2:
                flag = 1;
                ans.push_back('0');
                break;
            case 1:
                flag = 0;
                ans.push_back('1');
                break;
            case 0:
                flag = 0;
                ans.push_back('0');
                break;
            }
            itera++;
            iterb++;
        }
        for(;itera != (a.size()>=b.size()?a.rend() : b.rend());itera++){
            int temp1 = *itera - '0' + flag;
            switch(temp1)
            {
                case 2:
                    flag = 1;
                    ans.push_back('0');
                    break;
                case 1:
                    flag = 0;
                    ans.push_back('1');
                    break;
                case 0:
                    flag = 0;
                    ans.push_back('0');
                    break;
            }
        }
        if(flag == 1)
            ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
    }

};

