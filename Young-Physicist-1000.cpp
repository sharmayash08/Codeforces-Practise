#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int xSum = 0 , ySum = 0 , zSum = 0;

    for(int i = 0 ; i < n ; i++){
        int x , y , z ;
        cin >> x >> y >> z ;
        xSum += x ;
        ySum += y ;
        zSum += z ;
    }

    if(xSum == 0 && ySum == 0 && zSum == 0){
        cout << "YES" << endl ;
    }
    else{
        cout << "NO" << endl;
    }
}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
 
//     vector<vector<int>>arr(n , vector<int>(3));
 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
 
//     bool found = true;
 
//     for(int j=0;j<3;j++){
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             sum += arr[i][j];
//         }

//         cout << "X : " << sum << endl;
 
//         if(sum !=0){
//             found = false;
//             break;
//         }
//     }
 
//     if(found == true){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }