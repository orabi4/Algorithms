#include <bits/stdc++.h>
using namespace std;
void mergsort(vector<int>&) {
    
}
int main() {
int n;cin>>n;
vector<int>v(n);
for(auto&it:v)cin>>it;
mergsort(v);
for(auto it:v)cout<<it<<" ";

    return 0;
}
