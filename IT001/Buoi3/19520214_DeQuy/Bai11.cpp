#include <bits/stdc++.h>

using namespace std;

void SoDaoNguoc(string s);

int main(){
    string s;
    cin >> s;
    SoDaoNguoc(s);
    return 0;
}

void SoDaoNguoc(string s){
    if (s.length()>0){
        cout << s[s.length()-1];
        s.erase(s.length()-1,1);
        SoDaoNguoc(s);
    }
}

