#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    int highestIdx = 0;
    int highest = INT_MIN;
    int lowest = INT_MAX;
    int lowestIdx = 0;

    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        if(val > highest){
            highest = val;
            highestIdx = i;
        }

        if(val <= lowest){
            lowest = val;
            lowestIdx = i;
        }
    }

    if(highestIdx > lowestIdx){
        int ans = (highestIdx - 1) + (n - 1 - lowestIdx);
        cout << ans << endl;
    }
    else{
        int ans = highestIdx + (n - 1 - lowestIdx);
        cout << ans << endl;
    }
}