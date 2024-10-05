#include<bits/stdc++.h>

using namespace std;

int main() {
    int year;
    cin >> year;

    int y = year + 1;

    while (true) {
        unordered_map<int, int> mp;
        int temp = y;
        bool isDistinct = true;

        while (temp != 0) {
            int digit = temp % 10;
            mp[digit]++; 
            if (mp[digit] > 1) { 
                isDistinct = false;
                break;
            }
            temp /= 10;
        }

        if (isDistinct) {
            cout << y << endl;
            break;
        } else {
            y++;
        }
    }

    return 0;
}
