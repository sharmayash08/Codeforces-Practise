#include <bits/stdc++.h>

using namespace std;
int main() {
    string s;
    cin >> s;

    string ans = "";

    int plusCnt = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '+'){
            plusCnt++;
            continue;
        }
        else{
            ans += s[i];
        }
    }

    sort(ans.begin() , ans.end());

    // cout << "ans : " << ans << endl;
    
    string temp = "";

    for(int i = 0 ; i < ans.length() ; i++){

        temp += ans[i];
        if(plusCnt > 0){
            temp += '+';
            plusCnt--;
        }
        
    }

    cout << temp << endl;

    
}