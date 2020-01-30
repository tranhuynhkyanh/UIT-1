#include <bits/stdc++.h>

using namespace std;

string _str,_str2;
int k;

int main(){
    getline(cin, _str);
    getline(cin, _str2);
    sort(_str.begin(),_str.end());
    sort(_str2.begin(),_str2.end());
    if (_str == _str2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
