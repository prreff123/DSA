#include<bits/stdc++.h>
using namespace std;
// set matrix zeros

vector<vector<int>> setmatrix(vector<vector<int>> &matrix,int n,int m){

    int row[n] = {0};
    int col[m] = {0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = setmatrix(matrix,n,m);
    cout<<"The final matrix is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}