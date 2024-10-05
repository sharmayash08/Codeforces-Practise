#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , t;
    cin >> n >> t;

    string s;
    cin >> s;

    string ans = s;
    // cout << "ans : " << ans << endl;
    for(int i = 0 ; i < t ; i++){
        string temp = ans;
        for(int j = 0 ; j < s.length() - 1 ; j++){
            if(temp[j] == 'B' && temp[j+1] == 'G'){
                ans[j] = 'G';
                ans[j+1] = 'B';
            }
        }
        temp = ans;
        // cout << "ans : " << ans << endl;
        // cout << "Temp : " << temp << endl;
    }

    cout << ans << endl;
}