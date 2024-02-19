#include<bits/stdc++.h>
using namespace std;
// best time to sell and buy stocks

int stockbuy_sell(int arr[],int n){
    int max_profit = 0;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        mini = min(arr[i],mini);
        max_profit = max(max_profit,arr[i]-mini);
    } 
    return max_profit;
}

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = 6;
    int ans = stockbuy_sell(arr,n);
    cout<<"The max_profit is: "<<ans;
    return 0;
}