#include <bits/stdc++.h>

using namespace std;

bool check(int num){
    if(num <= 1){
        return false;
    }

    for(int i = 2 ; i <= sqrt(num) ; i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

int main() {
    int n , m;
    cin >> n >> m;

    bool found = false;
    for(int i = n + 1 ; i < m ; i++){
        if(check(i)){
            found = true;
            break;
        }
    }

    if(!found && check(m)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}