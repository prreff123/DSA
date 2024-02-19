#include<bits/stdc++.h>
using namespace std;
// uncommon string

string uncommon_string(string s1,string s2){
    map<char,int> mp1;
    map<char,int> mp2;
    string ans="";

    for(int i=0;i<s1.size();i++){
        mp1[s1[i]]=1;
    }
    for(int i=0;i<s2.size();i++){
        mp2[s2[i]]=1;
    }
    for(char ch='a';ch<='z';ch++){
        if(mp1[ch]!=mp2[ch]){
            ans.push_back(ch);
        }
    }
    return ans;
}

int main(){
    string s1 = "characters";
    string s2 = "alphabets";
    string ans = uncommon_string(s1,s2);
    cout<<"Uncommon Strings are: "<<ans<<"";
    return 0;
}