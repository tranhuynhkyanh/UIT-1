#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

long m,n,s=0,a[100][100];

int main(){
    cin >> m >> n;
    rep(i,0,m)
        rep(j,0,n){
            cin >> a[i][j];
            s += a[i][j];
        }
    rep(i,0,m){
        rep(j,0,n) cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "S = " << s;
    return 0;
}
