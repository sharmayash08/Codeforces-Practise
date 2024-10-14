#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    if(n % 2 != 0){
        cout << -1 << endl;
        return 0;
    }
    vector<int>arr;

    for(int i = 1 ; i <= n ; i++){
        arr.push_back(i);
    }

    for(int i = 1 ; i < n ; i+=2){
        swap(arr[i], arr[i-1]);
    }

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

    
}