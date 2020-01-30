#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

void xuatmanhinh(int n);

int main(){
    int n;
    cin >> n;
    if (n == 0) cout << "S(0) = 0" << endl;
        else xuatmanhinh(n);
    return 0;
}

void xuatmanhinh(int n){
    if (n == 1){
        cout << "S(1) = 1" << endl;
    } else {
        cout << "S(" << n << ") = ";
        rep(i,1,n){
            if (i == n) cout << n << " = ";
                else cout << i << " + ";
        }
        cout << (n*(n+1))/2;
    }
}
