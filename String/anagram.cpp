#include<bits/stdc++.h>
using namespace std;
// approach is bruteforce or nlog(n)

bool isanagram(string s,string t){
    int n = s.size();
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s.size()!=t.size()) return false;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter string 1: "<<endl;
    cin>>s;

    string t;
    cout<<"Enter string 2: "<<endl;
    cin>>t;
    int ans = isanagram(s,t);
    if(ans){
        cout<<"True";
    }
    else cout<<"False";

    return 0;
}