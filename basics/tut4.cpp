// factorial of a number
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

// int factorial(int n){
//     if(n==0) return 1;
//     return n*factorial(n-1);
// }

int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<"The factorial of "<<n<<" is "<<ans<<endl;
    return 0;
}