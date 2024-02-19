#include<bits/stdc++.h>
using namespace std;
// parameterized constructor

class Student{
    int age;
    public:
    Student(){
        cout<<"Default Constructor Called"<<endl;
    }
    Student(int age){
        cout<<"Parameterized constructor called: ";
        this->age = age;
    }
    int getage(){
        return age;
    }
};

int main(){
    Student s(18);
    cout<<s.getage();
    return 0;
}