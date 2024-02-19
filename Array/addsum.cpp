#include<bits/stdc++.h>
using namespace std;
//  add array count

int solve(int arr[],int k,int n){
    int count=0,sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                sum+=arr[i];
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {1,5,7,3};
    int n = 4;
    int k = 8;
    int ans = solve(arr,n,k);
    cout<<ans<<" ";
    return 0;
}