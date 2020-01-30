#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

long long n,f[10101];

int main(){
    cin >> n;
    rep(i,0,n) cin >> f[i];
    sort(f, f+n);
    cout << n << endl;
    rep(i,0,n) cout << f[i] << " ";
    return 0;
}
