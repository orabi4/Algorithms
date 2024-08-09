#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&v,int key) {
    int l=1,r=v.size();
    while(l<=r) {
        int midpoint=(l+r)/2;
        if(v[midpoint]==key) {
            return 1;
        }
        else {
            if(key>v[midpoint]) {
                l=midpoint+1;
            }
            else r=midpoint-1;
        }
    }
    return 0;
}
int main() {
int n;cin>>n;
    vector<int>v(n);
    for(auto&it:v)cin>>it;
    int key;cin>>key;
    if(binarysearch(v,key)) {
        cout<<"the key is founded";
    }
    else cout<<"the key not founded";
    return 0;
}
