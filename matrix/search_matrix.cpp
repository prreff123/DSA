#include<bits/stdc++.h>
using namespace std;
// search in a matrix

bool searchmatrix(vector<vector<int>> &matrix,int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int low = 0,high = col-1;
    while(row>low && high>-1){
        int cur = matrix[low][high];
        if(cur==target){
            return true;
        }
        else if(cur<target){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{4,11,9},
                                  {2,8,5},
                                  {3,6,7}};
                                  
    bool ans = searchmatrix(matrix,12);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}