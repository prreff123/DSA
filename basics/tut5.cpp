#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n <= 1) {
        cout<<"False";
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout<<"The number is not prime";
            break;
        }
        cout<<"The number is prime";
    }
    return 0;
}