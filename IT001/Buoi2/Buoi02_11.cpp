#include <bits/stdc++.h>

using namespace std;

#define repdown(i,a,b) for(int i=a; i>=b; i--)

int main(){
    string n,_n;
    cin >> n;
    repdown(i,n.length()-1,0) _n+=n[i];
    while (_n[0] == '0') _n.erase(0,1);
    cout << _n;
    return 0;
}
