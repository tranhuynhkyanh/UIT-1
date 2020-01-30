#include <bits/stdc++.h>

using namespace std;

int n,n_main,kq;

void UocSoLe(int n);

int main(){
    cin >> n;
    n_main = n;
    UocSoLe(n);
    cout << kq;
    return 0;
}

void UocSoLe(int n){
    if ((n_main % n == 0) and (n % 2 == 1)) kq = n;
    else UocSoLe(n-1);
}

