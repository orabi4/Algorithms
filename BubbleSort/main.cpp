#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&v) {
    bool f=0;
    for(int i=0;i<v.size()-1;i++) {
        for(int j=0;j<v.size()-i-1;j++) {
            if(v[j]>v[j+1]) {
                swap(v[j],v[j+1]);
                f=1;
            }
        }
        if(!f) {
            cout<<"the array is already sorted";
            break;
        }
    }
}
int main() {
int n;cin>>n;
    vector<int>v(n);
    for(auto&it:v)cin>>it;
    bubblesort(v);
    for(auto it:v)cout<<it<<" ";
    return 0;
}
//best case=O(n)  when the array is already sorted
//Average case=O(n^2)
//worst case=O(n^2)

