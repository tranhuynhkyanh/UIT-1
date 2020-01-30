#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

int main(){
    long n;
    cin >> n;
    rep(i,1,n)
        if (n % i == 0) cout << i << endl;
    return 0;
}
