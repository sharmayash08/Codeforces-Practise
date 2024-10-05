#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int noUpperCase = 0 , noLowerCase = 0;

    for(int i = 0 ; i < s.length() ; i++){
        if(isupper(s[i])){
            noUpperCase++;
        }
        else{
            noLowerCase++;
        }
    }

    if(noUpperCase > noLowerCase){
        transform(s.begin() , s.end() , s.begin() , ::toupper);
        cout << s << endl;
    }
    else{
        transform(s.begin() , s.end() , s.begin() , ::tolower);
        cout << s << endl;
    }
}