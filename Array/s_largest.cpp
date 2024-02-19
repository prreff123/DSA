#include<bits/stdc++.h>
using namespace std;
// find ssmall and slarge

// void get_element(int arr[],int n){
//     if(n==0 || n==1) cout<<"-1";
//     sort(arr,arr+n);
//     int ssmall = arr[1];
//     int slarge = arr[n-2];
//     cout<<"Second_Small element is: "<<ssmall<<endl;
//     cout<<"Second largest element is: "<<slarge<<endl;
// }
int get_element(int arr[],int n){
    int max1 = arr[0];
    int max2 = 1;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max1 = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(max2<arr[i] && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    return max2;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = get_element(arr,n);
    cout<<ans;
    return 0;
}