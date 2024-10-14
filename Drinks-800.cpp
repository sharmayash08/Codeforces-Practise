#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int taken = 0;

    for(auto i : arr){
        taken += i;
    }
    
    double total = n * 100;
    double output = (taken / total) * 100;

    cout << output << endl;
}