#include<bits/stdc++.h>
using namespace std;
// generate all paranthesis

void generate(vector<string>& ans,string s,int open,int close,int n){
    if(close==n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        generate(ans,s+"(",open+1,close,n);
    }
    if(close<open){
        generate(ans,s+")",open,close+1,n);
    }
}
vector<string> generate_paran(int n){
    vector<string> ans;
    generate(ans,"",0,0,n);
    return ans;
}

int main(){
    int n;
    cin>>n;
    generate_paran(n);
    return 0;
}