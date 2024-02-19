#include<bits/stdc++.h>
using namespace std;
//isomorphic string

bool isomorphic(string s, string t){
    int n = s.size();
    if(s.size()!=t.size()) return false;
    unordered_map<char,char>m1,m2;
    for(int i=0;i<n;i++){
        m1.insert({s[i],t[i]});
        m2.insert({t[i],s[i]});
    }
    for(int i=0;i<n;i++){
        if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter String 1: "<<endl;
    cin>>s;

    string t;
    cout<<"Enter String 2: "<<endl;
    cin>>t;
    
    int ans = isomorphic(s,t);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}