#include<bits/stdc++.h>
using namespace std;

//iterative approach
bool ispalin(string s,int l,int r){
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}


//recursively approach
// bool ispalin(string s,int l,int r){
//     // int n = s.size();
//     if(l>=r) return true;
//     if(s[l]!=s[r]) return false;
//     return ispalin(s,l+1,r-1);
// }

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int ans = ispalin(s,0,n-1);
    if(ans){
        cout<<"True";
    }
    else cout<<"False";
    return 0;
}