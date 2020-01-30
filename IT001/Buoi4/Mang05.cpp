#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

int main(){
    long long n, _max = 0, vt_max = 0;
    long long f[100000];
    cin >> n;
    rep(i,0,n){
        cin >> f[i];
        if (f[i]>_max){
           _max = f[i];
           vt_max = i;
        }
    }
    rep(i,0,n) cout << f[i] << endl;
    cout << "Vi Tri Lon Nhat: " << vt_max;
    return 0;
}
