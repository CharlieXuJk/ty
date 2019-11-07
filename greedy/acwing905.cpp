#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,a,b;
    int cnt =1;
    cin >> N;
    vector<vector<int>> store;
    for (auto n = 0; n < N; n++)
    {
        cin >> a >> b;
        store.push_back(vector<int>{a, b});
    }
    bool bigger(vector<int> a, vector<int> b);
    sort(store.begin(), store.end(), bigger);
    int temp = store[0][1];
    for (auto n = 0; n < N - 1; n++)
    {
        //cout << store[n][0] << ' ' << store[n][1] << endl;
        if (temp < store[n + 1][0])
        {
            cnt++;
            temp = store[n + 1][1];
        }
    }
    cout << cnt << endl;
}

bool bigger(vector<int> a, vector<int> b){
    if (a[1] >= b[1]){
        return false;
    }
    return true;
}