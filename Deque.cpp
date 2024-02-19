#include<bits/stdc++.h>
using namespace std;
// deque (double ended queue)

void showdq(deque<int> dq){
    for(auto it = dq.begin(); it!=dq.end(); it++){
        cout<<" "<<*it;
    }
    cout<<"\n";
}
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(15);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_back(30);
    dq.push_front(25);
    cout<<"The deque is: "<<endl;
    showdq(dq);

    cout<<"size of deque is: "<<dq.size()<<endl;
    cout<<"Front element in deque: "<<dq.front()<<endl;
    cout<<"Back element in deque: "<<dq.back()<<endl;
    cout<<"Deque at index: "<<dq.at(2)<<endl;
    cout<<"After pop_front: "<<endl;
    dq.pop_front();
    showdq(dq);

    cout<<"After pop_back: "<<endl;
    dq.pop_back();
    showdq(dq);
    
    return 0;
}