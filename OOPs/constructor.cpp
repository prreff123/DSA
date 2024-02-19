#include<iostream>
using namespace std;

class student{
	// char name[50];
    // int age;
	// double fee;
// default constructor
	public:
	student(){
		cout<<"constructor called";
	} 

	// void display(){
	// 	cout<<endl<<name<<" "<<age<<" "<<fee;
	// }
};

int main(){

	student s; 
	// s.display();
	return 0;
}
