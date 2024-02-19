#include<bits/stdc++.h>
using namespace std;
// copy constructor

class Student{
    int rno; 
    public:
    void setrno(int x){
        rno = x;
    }
    Student(){}
    Student(Student &s){
        rno = s.rno;
    }
    void display(){
        cout<<"rno= "<<rno<<endl;
    }
};

int main(){
    Student obj1;
    obj1.setrno(141);
    obj1.display();
    Student obj2(obj1);
    obj2.display();
    Student obj3(obj2);
    obj3.display();
    return 0;
}