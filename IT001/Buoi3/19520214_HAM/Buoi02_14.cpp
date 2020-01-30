#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(long long i=a; i<=b; i++)

long long n,_max = 0;

void checkmax(int i);

int main(){
    cin >> n;
    rep(i,1,n) checkmax(i);
    cout << _max;
    return 0;
}

void checkmax(int i){
    if (((n % i) == 0) && (i % 2 == 1)) _max = i;
}
