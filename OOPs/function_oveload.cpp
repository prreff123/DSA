#include<bits/stdc++.h>
using namespace std;
// function overloading

void get(int a,int b){
    cout<<"The sum of a+b is: "<<a+b<<endl;
}

void get(int a,int b,float c){
    cout<<"The sum of a+b+c is: "<<a+b+c;
}

// class A{
//     public:
//     void get(int n){
//         cout<<n<<endl;
//     }
//     void get(string s){
//         cout<<s;
//     }
// };

int main(){
    get(4,5);
    get(2,4,6.5);
    return 0;
}