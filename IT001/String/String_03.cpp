#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

char _str[10101];

void XoaKhoangTrang(){
    //Xoa ' ' dau
    while(_str[0] == ' '){
        rep(i,0,strlen(_str)-1) _str[i] = _str[i + 1];
        _str[strlen(_str) - 1] = '\0';
    }
    //xoa ' ' giua
    rep(i,0,strlen(_str)-1){
        if ((_str[i] == ' ') && (_str[i + 1] == ' '))
            while(_str[i+1] == ' '){
                rep(j,i+1,strlen(_str)-1) _str[j] = _str[j + 1];
                _str[strlen(_str) - 1] = '\0';
            }
    }
}


int main(){
    cin.get(_str,10101);
    XoaKhoangTrang();
    rep(i,0,strlen(_str))
        _str[i] = tolower(_str[i]);
    _str[0] = toupper(_str[0]);
    rep(i,1,strlen(_str)-1)
        if (_str[i] == ' ')
            _str[i+1] = toupper(_str[i+1]);
    cout << _str;
    return 0;
}
