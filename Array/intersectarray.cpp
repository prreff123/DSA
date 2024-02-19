#include<bits/stdc++.h>
using namespace std;
// find union of the array
//using set
vector<int> intersectarray(int arr1[],int arr2[],int n,int m){
    set<int> st;
    vector<int> ans;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        if(st.find(arr2[i])!=st.end()){
            ans.push_back(arr2[i]);
            st.erase(arr2[i]);
        }
    }
    return ans;
}

// void intersectarray(int arr1[],int arr2[],int n,int m){
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             i++;
//         }
//         else if(arr2[j]<arr1[i]){
//             j++;
//         }
//         else{
//             cout<<arr2[j]<<" ";
//             i++;
//         }
//     }
// }

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,5,6,8};
    int n = 5,m=4;
    // intersectarray(arr1,arr2,n,m);
    vector<int> ans = intersectarray(arr1,arr2,n,m);
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}