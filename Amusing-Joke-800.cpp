#include <bits/stdc++.h>

using namespace std;
int main() {
    string s1 , s2 , s3;
    cin >> s1 >> s2 >> s3;

    if (s1.length() + s2.length() != s3.length()) {
        cout << "NO" << endl;
        return 0;
    }


    unordered_map<char , int>mp;

    for(int i = 0 ; i < s3.length() ; i++){
        mp[s3[i]]++;
    }

    for(int i = 0 ; i < s1.length() ; i++){
        if(mp.find(s1[i]) == mp.end()){
            cout << "NO" << endl;
            return 0;
        }
        else{
            mp[s1[i]]--;

            if(mp[s1[i]] == 0){
                mp.erase(s1[i]);
            }
        }
    }

    for(int i = 0 ; i < s2.length() ; i++){
        if(mp.find(s2[i]) == mp.end()){
            cout << "NO" << endl;
            return 0;
        }
        else{
            mp[s2[i]]--;

            if(mp[s2[i]] == 0){
                mp.erase(s2[i]);
            }
        }
    }


    cout << "YES" << endl;
}