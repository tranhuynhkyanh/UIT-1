#include <bits/stdc++.h>

using namespace std;

float TinhTong(int n);

int main(){
    int n;
    cin >> n;
    cout << TinhTong(n);
    return 0;
}

float TinhTong(int n){
    if (n==1) return 1;
        else return((float) 1/n + TinhTong(n-1));
}
