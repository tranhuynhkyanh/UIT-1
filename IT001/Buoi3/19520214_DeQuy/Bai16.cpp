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
    if (n==0) return 1;
    int s=0;
    for (int i=0; i<=n-1; i++){
        int tmp = TinhTong(i);
        s += (n-i)*(n-i)*tmp;
    }
    return s;
}

