#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&v) {
     for(int i=0;i<v.size()-1;i++) {
         int temp=v[i];
         int index;
         for(int j=i+1;j<v.size();j++) {
             if(temp>v[j]) {
                 temp=v[j];
                 index=j;
             }
         }
         swap(v[i],v[index]);
     }
}
int main()
{
 int n;cin>>n;
         vector<int>v(n);
         for(auto&it:v)cin>>it;
         selectionsort(v);
         for(auto it:v)cout<<it<<" ";
}
//Average case =O(n^2)
//worst case =O(n^2)
//space complexity=O(1)
