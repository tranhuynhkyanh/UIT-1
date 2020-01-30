#include <bits/stdc++.h>

using namespace std;

int DeQuy(int n);
int DeQuy2(int n);

int main(){
    int n;
    cin >> n;
    DeQuy(n);
    DeQuy2(n);
    cout << DeQuy(n) << " " << DeQuy2(n);
    return 0;
}

int DeQuy(int n){
    if (n==0) return 1;
    return(DeQuy(n-1) + DeQuy2(n-1));
}

int DeQuy2(int n){
    if (n==0) return 0;
    return(3*DeQuy(n-1) + 2*DeQuy2(n-1));
}


