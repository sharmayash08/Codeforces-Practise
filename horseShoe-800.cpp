#include <bits/stdc++.h>

using namespace std;
int main() {
    unordered_map<int,int>mp;

    for(int i = 0 ; i < 4 ; i++){
        int x;
        cin >> x;

        mp[x]++;
    }

    int ans = 0;

    for(auto i : mp){
        if(i.second > 1){
            ans += i.second - 1;
        }
    }

    cout << ans << endl;
}