#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(long long i=a; i<=b; i++)

int main(){
    long long n,_max = 0;
    cin >> n;
    rep(i,1,n)
        if (((n % i) == 0) && (i % 2 == 1))
            _max = i;
    cout << _max;
    return 0;
}
