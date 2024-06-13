#include<bits/stdc++.h>
using namespace std;
// method overriding

class A{
     public:
          virtual void fun(){
               cout<<"base ";
          }
};
class B: public A{
     public:
          void fun(){
               cout<<"derived ";
          }
};
int main(){
     A *a=new B;
     a->fun();
     return 0;
}
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