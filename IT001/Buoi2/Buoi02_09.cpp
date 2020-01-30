#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

int main(){
    int n;
    float s = 0;
    cin >> n;
    if (n == 0){
        cout << "S(0) = 0";
        return 0;
    }
    if (n == 1){
        cout << "S(1) = 1";
        return 0;
    }
    cout << "S(" << n << ") = ";
    rep(i,1,n){
        s += (float) 1 / i;
        if (i == 1) cout << "1 + ";
            else if (i == n) cout << "1/" << n << " = ";
                else cout << "1/" << i << " + ";
    }
    cout << round(s * 100) / 100;
    return 0;
}
