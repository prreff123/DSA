// implement lower_bound
#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>& arr,int target){
    int n = arr.size();
    int low = 0,high = n-1,ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,44,81};
    int target = 5;
    int ans = lower_bound(arr,target);
    cout<<"The lower bound at index "<<ans;
    return 0;
}