#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 3 , m = 3;
    vector<vector<int>>ans(n , vector<int>(m , 1));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int val;
            cin >> val;

            if(val % 2 != 0){
                ans[i][j] = ans[i][j] == 0 ? 1 : 0;
                if(i + 1 < n){
                    ans[i + 1][j] = ans[i+1][j] == 0 ? 1 : 0;
                }

                if(i - 1 >= 0){
                    ans[i - 1][j] = ans[i-1][j] == 0 ? 1 : 0;
                }

                if(j + 1 < m){
                    ans[i][j+1] = ans[i][j+1] == 0 ? 1 : 0;
                }

                if(j - 1 >= 0){
                    ans[i][j-1] = ans[i][j-1] == 0 ? 1 : 0;
                }
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << ans[i][j];
        }

        cout << endl;
    }
}