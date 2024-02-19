#include<bits/stdc++.h>
using namespace std;
// count 0 in a matrix

int countzeros(vector<vector<int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    int low = 0,high = col-1;
    int cnt=0;
    while(row>low && high>=0){
        int cur = matrix[low][high];
        if(cur==0){
            cnt += high+1;
            low += 1;
        }
        else{
            high -= 1;
        }
    }
    return cnt;
}


int main(){
    vector<vector<int>> matrix = {{1,0,1},{2,3,0},{3,5,4}};
    int ans  = countzeros(matrix);
    cout<<ans<<" ";
    return 0;
}