#include <bits/stdc++.h>

using namespace std;

#define repdown(i,a,b) for(int i=a; i>=b; i--)

int main(){
    string s;
    cin >> s;
    repdown(i,s.length()-1,0)
        cout << s[i] << endl;
    return 0;
}
