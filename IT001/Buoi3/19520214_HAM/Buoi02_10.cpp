#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

long n;

void xuatmanhinh(int i);

int main(){
    cin >> n;
    rep(i,1,n) xuatmanhinh(i);
    return 0;
}

void xuatmanhinh(int i){
    if (n % i == 0) cout << i << endl;
    return;
}

