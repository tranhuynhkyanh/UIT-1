#include <bits/stdc++.h>

#define repdown(i,a,b) for(int i=a; i>=b; i--)

using namespace std;

void sodao(string s, string &_s);

int main(){
    string s,_s;
    cin >> s;
    while (s[0] == '0') s.erase(0,1);
    sodao(s,_s);
    while (_s[0] == '0') _s.erase(0,1);
    cout << _s;
    return 0;
}

void sodao(string s, string &_s){
    repdown(i,s.length()-1,0) _s += s[i];
    return;
}

