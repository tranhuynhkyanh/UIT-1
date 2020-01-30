#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

string _str;

int main(){
    getline(cin,_str);
    rep(i,0,_str.length()){
        rep(j,'0','9')
            if (_str[i]==j){
                cout << "CHUOI KHONG HOP LE.";
                exit(0);
            }
    }
    cout << _str;
    return 0;
}
