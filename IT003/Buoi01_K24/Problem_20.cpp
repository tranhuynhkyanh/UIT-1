#include <bits/stdc++.h>

using namespace std;

int m, n, f[31][7];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> m >> n;
    m -= n-1;
    for(int i = 1; i<=n; i++){
        int x;
        cin >> x;
        m -= (x-1);
    }
    for(int i=0; i<=m; i++) f[i][0] = 1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            f[i][j] = f[i-1][j-1]+f[i-1][j];
        }
    }
    cout << f[m][n];
    return 0;
}
