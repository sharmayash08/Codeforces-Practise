#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";

    int i = 0 , j = i+1;

    while(i < s.length()){
        if(s[i] == '.'){
            ans += '0';
            i++;
            j++;
        }
        else if(s[i] == '-' && s[j] == '.'){
            ans += '1';
            i+=2;
            j += 2;
        }
        else if(s[i] == '-' && s[j] == '-'){
            ans += '2';
            i+=2;
            j += 2;
        }
    }

    cout << ans << endl;
}