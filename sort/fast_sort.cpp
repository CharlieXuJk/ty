#include<iostream>
#include<vector>

using namespace std;


void fast_sort(vector<int> &input, int lo, int hi){
    if(lo >= hi)
        return;
    int i = lo - 1;
    int j = hi + 1;
    int temp = input[(lo+hi)/2];
    while (i < j)
    {
        do
            i++;
        while (input[i] < temp);
        do
            j--;
        while (input[j] > temp);
        if (i < j)
            swap(input[i], input[j]);
    }
    fast_sort(input, lo, j);
    fast_sort(input, j + 1, hi);
}
int main(){
    vector<int> temp;
    int input;
    while (cin >> input){
        temp.push_back(input);
    }

    fast_sort(temp, 0, temp.size() - 1);

    for(auto i:temp)
        cout << i << ' ';
}