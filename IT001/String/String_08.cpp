#include <bits/stdc++.h>

using namespace std;

string _str,_str2;
int k;

int main(){
    getline(cin, _str);
    getline(cin, _str2);
    cin >> k;
    if (k < 0 || k > _str.length()){
        cout << "Vi tri "<< k << " khong thoa dieu kien.";
    } else {
        _str.insert(k,_str2);
        cout << _str;
    }
    return 0;
}
