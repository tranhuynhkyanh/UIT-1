#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

void xuatmanhinh(int n);

int main(){
    int n;
    cin >> n;
    xuatmanhinh(n);
    return 0;
}

void xuatmanhinh(int n){
    float s = 0;
    if (n == 0){
        cout << "S(0) = 0";
        return;
    }
    if (n == 1){
        cout << "S(1) = 1";
        return;
    }
    cout << "S(" << n << ") = ";
    rep(i,1,n){
        s += (float) 1 / i;
        if (i == 1) cout << "1 + ";
            else if (i == n) cout << "1/" << n << " = ";
                else cout << "1/" << i << " + ";
    }
    cout << round(s * 100) / 100;
    return;
}
