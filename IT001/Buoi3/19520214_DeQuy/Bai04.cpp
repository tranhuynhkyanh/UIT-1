#include <bits/stdc++.h>

using namespace std;

int TinhTich(int n);

int main(){
    int n;
    cin >> n;
    cout << TinhTich(n);
    return 0;
}

int TinhTich(int n){
    if (n==1) return 1;
        else return(n * TinhTich(n-1));
}
