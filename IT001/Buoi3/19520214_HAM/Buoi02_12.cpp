#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

bool check(long n);

int main(){
    long n;
    cin >> n;
    rep(i,2,n)
        if (check(i)) cout << i << endl;
    return 0;
}

bool check(long n){
    rep (i,2,trunc(sqrt(n)))
        if ((n % i) == 0) return false;
    return true;
}

