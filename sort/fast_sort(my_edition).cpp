#include<iostream>
#include<vector>
using namespace std;

void fastSort(vector<int> &a,int head,int tail){
    if(head >= tail) return;
    size_t p = head+1,q = tail;
    while(p<q){
        while(a[p] <= a[head] && p<q){
            p++;
        }
        while(a[q] > a[head] && p<q){
            q--;
        }
        swap(a[p],a[q]);
    }
    swap(a[head], a[p-1]);
    fastSort(a,head,p-1);
    fastSort(a,p,tail-p);
}

int main(){
    vector<int> a{4,2,5,4,3,6,2,5,1,5,2};
    fastSort(a,0,a.size()-1);
    for(auto i = 0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

