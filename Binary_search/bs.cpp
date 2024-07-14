// binary search
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n, int target){
    // int n = arr.size();
    int low=0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans = binarysearch(arr,n,target);
    if(ans==-1){
        cout<<"Target is not present in an array";
    }
    cout<<"Target present at index "<<ans<<endl;
    return 0;
}