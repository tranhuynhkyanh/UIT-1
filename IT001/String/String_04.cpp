#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

char _str[10101];
int dem[10101];
bool check[10101];

bool CheckRong(char _str[]){
    rep(i,0,strlen(_str)){
        if (_str[i] != ' ')
            return false;
    }
    return true;
}

int main(){
    cin.get(_str,10101);
    fill(check,check + 10101, true);
    if (CheckRong(_str)){
        cout << "Chuoi rong.";
    } else {
        rep(i,0,strlen(_str)){
            dem[_str[i]]++;
        }
        rep(i,0,strlen(_str)){
            if (check[_str[i]]){
                cout << char(_str[i]) << ": " << dem[_str[i]] << endl;
                check[_str[i]] = false;
            }
        }
    }
    return 0;
}
