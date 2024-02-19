#include<bits/stdc++.h>
using namespace std;
// method overriding

class Animal{
    public:
    void speak(){
        cout<<"speaking";
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking ";
        // override function call
        Animal::speak();
    }
};

int main(){
    Dog d;
    d.speak();
    return 0;
}