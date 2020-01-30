#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

string _str,_str2;
int k;

int main(){
    getline(cin, _str);
    getline(cin, _str2);
    sort(_str2.begin(),_str2.end());
    int vt = 0;
    rep(i,0,((_str.length()-(_str2.length()))+1)){
        string tmp = _str.substr(vt, _str2.length());
        string tmp2 = tmp;
        sort(tmp2.begin(),tmp2.end());
        if (tmp2 == _str2) cout << tmp << endl;
        vt++;
    }
    return 0;
}
