#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define repdown(i,a,b) for(int i=a; i>b; i--)

string _str;

void CheckSai(){
    rep(i,0,_str.length()){
        if (_str[i] == '.'){
            int l = i-1;
            while (_str[l] == ' '){
                _str[l] = '#';
                l --;
            }
            int r = i+1;
            while (_str[r] == ' '){
                _str[r] = '#';
                r++;
            }
        }
    }
    return;
}

void XoaSai(){
    repdown(i,_str.length(),0){
        if (_str[i] == '#'){
            _str.erase(i,1);
        }
    }
    return;
}

void ThemDauCach(){
    repdown(i,_str.length(),0)
        if (_str[i] == '.'){
            _str.insert(i+1," ");
        }
    //Dau . dau cau
    if (_str[0] == '.') _str.insert(1," ");
    return;
}

int main(){
    getline(cin,_str);
    cout << _str << endl;
    CheckSai();
    XoaSai();
    ThemDauCach();
    while (_str[0] == ' '){
        _str.erase(0,1);
    }
    cout << _str;
    return 0;
}
