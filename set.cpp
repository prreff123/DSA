#include <bits/stdc++.h>
using namespace std;
// set basics

int main(){
    set<int> s;
 
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(2);
 
    cout << "Elements in unordered_set:\n";
    for (auto it : s)
        cout << it << " "; // Sorted
    return 0;
}