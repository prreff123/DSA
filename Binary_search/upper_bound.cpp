// implement upper_bound
#include<bits/stdc++.h>
using namespace std;

int upper_bound(vector<int>& arr,int target){
    int n = arr.size();
    int low = 0,high = n-1,ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target){
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
    int target = 48;
    int ans = upper_bound(arr,target);
    cout<<"The upper bound at index "<<ans;
    return 0;
}