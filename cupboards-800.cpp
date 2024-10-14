#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    int leftOpen = 0;
    int rightOpen = 0;

    for(int i = 0 ; i < n ; i++){
        int left , right;
        cin >> left >> right;

        if(left == 1){
            leftOpen++;
        }
        if(right == 1){
            rightOpen++;
        }
    }
    int ans = 0;
    ans += min(leftOpen , n - leftOpen) + min(rightOpen , n - rightOpen);

    cout << ans << endl;
}