#include<bits/stdc++.h>
using namespace std;
// use abstraction

class Company{
    private:
    void Owner(){
        cout<<"Elon Musk";
    }
    void establish(){
        cout<<"Unknown ";
    }
    public:
    void name(){
        cout<<"Tesla / SpacxeX"<<endl;
    }
    void tesla(){
        cout<<"Car ";
    }
};


int main(){
    Company c;
    c.name();
    c.tesla();
    return 0;
}