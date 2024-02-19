//reverse an array
#include<bits/stdc++.h>
using namespace std;

// using recursively
void reversearray(int arr[],int start,int end){
    if(start>=end) return;
    swap(arr[start],arr[end]);
    reversearray(arr,start+1,end-1);
}

// void reversearray(int arr[],int start,int end){
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversearray(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}