#include<bits/stdc++.h>
using namespace std;
// priority_queue

void showpq(priority_queue<int> pq){
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
}

int main(){
    priority_queue<int> pq;
    // int arr[6] = {10,2,55,6,31,25};
    cout<<"Array: "<<endl;
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // for(int i=0;i<6;i++){
    //     pq.push(arr[i]);
    // }
    pq.push(10);
    pq.push(2);
    pq.push(55);
    pq.push(6);
    pq.push(31);
    pq.push(25);
    cout<<"Priority Queue is: "<<endl;
    showpq(pq);

    cout<<"Size of pq is: "<<pq.size()<<endl;
    cout<<"Top element of pq is: "<<pq.top()<<endl;
    cout<<"After Pop element: ";
    pq.pop();
    showpq(pq);
    return 0;
}