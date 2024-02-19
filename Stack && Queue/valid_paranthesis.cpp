#include<bits/stdc++.h>
using namespace std;
// check valid paranthesis

bool isparan(string s){
    stack<int> st;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(st.empty()) st.push(s[i]);
        else if((st.top()=='(' && s[i]==')')
               ||(st.top()=='[' && s[i]==']')
               ||(st.top()=='{' && s[i]=='}')){
                st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.empty())return true;
    return false;
}

int main(){
    string s;
    cin>>s;
    int ans = isparan(s);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}