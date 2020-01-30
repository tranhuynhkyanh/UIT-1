#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

long m,n,a[100][100];

int main(){
    cin >> m >> n;
    rep(i,0,m)
        rep(j,0,n) cin >> a[i][j];
    rep(j,0,n) cout << a[0][j] << " ";
    rep(i,1,m-1) cout << a[i][0] << " " << a[i][n-1] << " ";
    rep(j,0,n) cout << a[m-1][j] << " ";
    return 0;
}
