#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define repdown(i,b,a) for(int i=b; i>=a; i--)

int main(){
    long long n;
    long long f[100000];
    cin >> n;
    rep(i,0,n) cin >> f[i];
    repdown(i,n-1,0) cout << f[i] << endl;
    return 0;
}
