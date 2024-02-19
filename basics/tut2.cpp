// find the max and min no. in an array.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The maximium of Array is: "<<max<<endl;
    cout<<"The minimum of Array is: "<<min<<endl;
}