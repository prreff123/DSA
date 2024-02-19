#include<bits/stdc++.h>
using namespace std;
// rotate an matrix

void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();
    // transpose matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix = {{7,5,9},{1,6,4},{2,3,8}};
    rotate(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}