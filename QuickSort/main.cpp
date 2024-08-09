#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int l,int r){
    int pivot=arr[l];
    int i=l,j=r;
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)swap(arr[i],arr[j]);
    }while(i<j);{
        swap(arr[l],arr[j]);
        return j;
    }
}
void QuickSort(vector<int>&arr,int l,int r){
    int j;
    if(l<r){
        j= partition(arr,l,r);
        //the first part
        QuickSort(arr,l,j);
        //the second part
        QuickSort(arr,j+1,r);
    }
}
int main() {
    int n;
    cin>>n;
    //int arr[]={8,6,1,2,4,INT_MAX};
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    QuickSort(arr,0,n-1);
    //for(auto it:arr)cout<<it<<" ";
    for(int i=0;i<n-1;i++)cout<<arr[i]<<" ";
    return 0;
}
// intput: 7 8 1 2 5 INT_MAX
//output: 1 2 5 7 8