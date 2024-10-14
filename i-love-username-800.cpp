#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int i = 0 ;i < n ; i++){
        cin >> arr[i];
    }

    int minPerformance = arr[0];
    int maxPerformance = arr[0];

    int cnt = 0;

    for(int i = 1 ; i < n ; i++){
        if(arr[i] > maxPerformance){
            cnt++;
            maxPerformance = arr[i];
        }
        else if(arr[i] < minPerformance){
            cnt++;
            minPerformance = arr[i];
        }
    }

    cout << cnt << endl;
}