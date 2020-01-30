#include <bits/stdc++.h>

using namespace std;

#define repdown(i,a,b) for(int i=a; i>=b; i--)

string n,_n;

void taostring();
void xoaso0();

int main(){
    cin >> n;
    taostring();
    xoaso0();
    cout << _n;
    return 0;
}

void taostring(){
    repdown(i,n.length()-1,0) _n+=n[i];
}

void xoaso0(){
    while (_n[0] == '0') _n.erase(0,1);
}
