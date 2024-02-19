#include<bits/stdc++.h>
using namespace std;

//count all negative numbers
int count_negative(int arr[],int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The count of negative no. is: "<<count_negative(arr,n);
    return 0;
}