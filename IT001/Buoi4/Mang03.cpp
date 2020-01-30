#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

int main(){
    long long n, sum = 0;
    long long f[100000];
    cin >> n;
    rep(i,0,n){
        cin >> f[i];
        sum += f[i];
    }
    rep(i,0,n) cout << f[i] << endl;
    cout << "Tong mang: " << sum;
    return 0;
}
