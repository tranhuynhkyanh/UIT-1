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
    if (n==0) return 0;
        else return(n + TinhTong(n-1));
}
