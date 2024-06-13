#include<bits/stdc++.h>
using namespace std;
// find union of the array
//using set
vector<int> unionarray(int arr1[],int arr2[],int n,int m){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    vector<int> ans(st.begin(),st.end());
    return ans;
}

// void unionarray(int arr1[],int arr2[],int n,int m){
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             cout<<arr1[i++]<<" ";
//         }
//         else if(arr2[j]<arr1[i]){
//             cout<<arr2[j++]<<" ";
//         }
//         else{
//             cout<<arr2[j++]<<" ";
//             i++;
//         }
//     }
//     while(i<n){
//         cout<<arr1[i++]<<" ";
//     }
//     while(j<m){
//         cout<<arr2[j++]<<" ";
//     }
// }

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,5,6,8};
    int n = 5,m=4;
    vector<int> ans = unionarray(arr1,arr2,n,m);
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}