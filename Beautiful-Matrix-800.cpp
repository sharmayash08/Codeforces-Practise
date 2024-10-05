#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>>mat(5 , vector<int>(5));

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> mat[i][j];
        }
    }

    int rowIdx = -1 , colIdx = -1;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            if(mat[i][j] == 1){
                rowIdx = i;
                colIdx = j;
            }
        }
    }

    cout << abs(2-rowIdx) + abs(2-colIdx) << endl;
}