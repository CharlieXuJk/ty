#include<iostream>
#include<vector>
#include<string>

using namespace std;

void replaceSpace(char *str, int length);

int main(){
    char str[20] = " helloworld";
    replaceSpace(str, 20);
    cout << str << endl;
    return 0;
}

void replaceSpace(char *str,int length) {
        if(str == nullptr||length == 0){
            return;
        }
        int strLength = 0;
        char* pStr = str;
        while(*pStr != '\0'){
            strLength++;
            pStr++;
        }
        vector<int> spaceBefore(strLength);
        vector<bool> isSpace(strLength, false);
        for(auto i = 0; i < strLength; i++){
           if(i>=1)
              spaceBefore[i] = spaceBefore[i-1]; 
           if(str[i] == ' '){
              isSpace[i] = true;
              spaceBefore[i] += 2;
              }
        }
        str[strLength] = '\0';
        for (int j = strLength - 1; j >= 0; j--)
        {
            if(isSpace[j]){
                str[j + spaceBefore[j]] = '0';
                str[j + spaceBefore[j] -1] = '2';
                str[j + spaceBefore[j] -2] = '%';
            }
            else{
                str[j + spaceBefore[j]] = str[j];
            }
        }
        return;
}