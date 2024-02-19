#include<bits/stdc++.h>
using namespace std;

// kadane's algo
int maxsum(int arr[],int n){
    int cursum = 0;
    int ans = arr[0];
    for(int i=0;i<n;i++){
        cursum += arr[i];
        if(ans<cursum){
            ans = cursum;
        }
        if(cursum<0){
            cursum = 0;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The maximum array is: "<<maxsum(arr,n);
    return 0;
}