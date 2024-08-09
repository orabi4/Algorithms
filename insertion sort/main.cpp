#include <bits/stdc++.h>
using namespace std;
void insertion( vector<int>&arr,int n) {
    for(int i=1;i<n;i++) {
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&temp<arr[j]) {
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}
int main()
{
 int n;cin>>n;
    vector<int>v(n);
    for(auto&it:v)cin>>it;
    insertion(v,n);
    for(auto&it:v)cout<<it<<" ";
    return 0;
}
