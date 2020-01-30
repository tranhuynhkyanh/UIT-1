#include <bits/stdc++.h>

using namespace std;

#define repdown(i,a,b) for(int i=a; i>=b; i--)

void xuatmanhinh(char c);

int main(){
    string s;
    cin >> s;
    repdown(i,s.length()-1,0)
        xuatmanhinh(s[i]);
    return 0;
}

void xuatmanhinh(char c){
    cout << c << endl;
}
