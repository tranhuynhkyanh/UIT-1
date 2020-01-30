#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

long long n;
long long f[100000];

int main(){
    cin >> n;
    rep(i,0,n) cin >> f[i];
    rep(i,0,n) cout << f[i] << endl;
    return 0;
}
