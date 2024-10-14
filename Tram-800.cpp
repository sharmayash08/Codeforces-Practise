#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<pair<int , int>>arr;

    for(int i = 0 ; i < n ; i++){
        int a , b;
        cin >> a >> b;

        arr.push_back({a,b});
    }

    int minCapacity = arr[0].second;
    int currCapcity = arr[0].second;

    for(int i = 1 ; i < n ; i++){
        currCapcity = (currCapcity - arr[i].first) + arr[i].second;

        minCapacity = max(minCapacity , currCapcity);
    }

    cout << minCapacity << endl;
}