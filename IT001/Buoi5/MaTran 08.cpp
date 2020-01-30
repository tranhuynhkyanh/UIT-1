#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

long m,n,a[100][100];
bool _check = false;

bool CheckDK(long a){
    if (a >= 10 && a <= 20 && a % 2 == 0) return true;
    return false;
}

int main(){
    cin >> m >> n;
    rep(i,0,m)
        rep(j,0,n){
            cin >> a[i][j];
            if (CheckDK(a[i][j])) _check = true;
        }
    rep(i,0,m){
        rep(j,0,n) cout << a[i][j] << " ";
        cout << endl;
    }
    if (_check){
        cout << "Ma tran ton tai cac gia tri thoa dieu kien tai vi tri:" << endl;
        rep(i,0,m){
            rep(j,0,n)
                if (CheckDK(a[i][j]))
                    cout << "(" << i << ", " << j << ")" << endl;
        }
    } else {
        cout << "Ma tran khong ton tai gia tri thoa dieu kien" << endl;
    }
    return 0;
}
