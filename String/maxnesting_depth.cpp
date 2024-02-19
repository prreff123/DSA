#include<bits/stdc++.h>
using namespace std;
// max nested depth of string

int maxdepth(string s){
    int cnt = 0,maxi = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            cnt++;
            if(maxi<cnt){
                maxi = cnt;
            }
        }
        if(s[i]==')'){
            cnt--;
        }
    }
    return maxi;
}

int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    int ans = maxdepth(s);
    cout<<"The maximum depth is: "<<ans;
    return 0;
}