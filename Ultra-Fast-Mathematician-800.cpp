#include <bits/stdc++.h>

using namespace std;
int main() {
    string num1 , num2;
    cin >> num1 >> num2;

    string ans = "";

    for(int i = 0 ; i < num1.length() ; i++){
        if(num1[i] == num2[i]){
            ans += "0";
        }
        else{
            ans += "1";
        }
    }

    cout << ans << endl;
}