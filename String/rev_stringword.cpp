#include<bits/stdc++.h>
using namespace std;
// reverse a string in words

string reverseString(string str){
    string ans = "",temp = "";
    for(int i=0;i<=str.size();i++){
        if(str[i]==' '|| i==str.size()){
            reverse(temp.begin(),temp.end());
            ans += temp+"";
            temp = "";
        }
        else{
            temp += str[i];
        }
    }
    return ans;
}

int main(){
    string str;
    getline(cin,str);
    cout<<reverseString(str);
    return 0;
}