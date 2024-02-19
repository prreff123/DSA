#include<bits/stdc++.h>
using namespace std;

void reversestring(string &s,int l,int r){
    if(l>=r) return;
    swap(s[l],s[r]);
    reversestring(s,l+1,r-1);
}

// void reversestring(string &s,int l,int r){
//     while(l<r){
//         int temp = s[l];
//         s[l] = s[r];
//         s[r] = temp;
//         l++;
//         r--;
//     }
// }

int main(){
    string s;
    cin>>s;
    int n = s.size();
    reversestring(s,0,n-1);
    cout<<s;
    return 0;
}