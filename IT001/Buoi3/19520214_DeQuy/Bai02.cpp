#include <bits/stdc++.h>

using namespace std;

int TinhTong(int n);

int main(){
    int n;
    cin >> n;
    cout << TinhTong(n);
    return 0;
}

int TinhTong(int n){
    if (n==1) return 1;
        else return(n*n + TinhTong(n-1));
}
