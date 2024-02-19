// find alternative elements
#include<iostream>
using namespace std;

void findalternate(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findalternate(arr,n);
    // for(int i=0;i<n;i+=2){
    //     cout<<arr[i]<<endl;
    // }

    return 0;
}