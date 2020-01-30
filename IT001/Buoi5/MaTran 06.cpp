#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

long m,n,_max = LONG_MIN,a[100][100];

int main(){
    cin >> m >> n;
    rep(i,0,m)
        rep(j,0,n){
            cin >> a[i][j];
            if (a[i][j] > _max) _max = a[i][j];
        }
    rep(i,0,m){
        rep(j,0,n) cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "Gia tri lon nhat: " << _max;
    return 0;
}
