#include <bits/stdc++.h>

using namespace std;

int n, m, f[13][7][73];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    cin >> m;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= i; j++){
            f[1][i][j] = 1;
        }
    }
    for(int i=2; i<=n; i++){
        for(int k=0; k<=m; k++){
            for(int j=1; j<=6; j++){
                f[i][j][k] += f[i][j-1][k];
                if (k >= j)
                    f[i][j][k] += f[i-1][j][k-j];
            }
        }
    }
    cout << f[n][6][m];
    return 0;
}
