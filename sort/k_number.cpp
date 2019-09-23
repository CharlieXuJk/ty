#include<iostream>
#include<vector>

using namespace std;

int bisearch_l(vector<int>&input, int lo, int hi,int k){
    while(lo < hi){
        int mid = (lo + hi) / 2;
        if(input[mid] >= k){
            hi = mid;
        }else{
            lo = mid + 1;
            }
        }
        return input[lo] == k ? lo:-1;
}

int bisearch_h(vector<int>&input, int lo, int hi, int k){
    while(lo < hi){
        int mid = (lo + hi + 1) / 2;
        if(input[mid] <= k){
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return input[hi] == k ? hi : -1;
}

int main()
{
    int n, q, k;
    cin >> n >> q;
    vector<int> input(n);
    for (auto i = 0; i < n; i++)
        cin >> input[i];
    for (auto j = 0; j < q; j++){
        cin >> k;
        cout <<bisearch_l(input, 0, n - 1, k) << ' ';
        cout << bisearch_h(input, 0, n - 1, k) << endl;
    }
}