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
    if (n==0) return 0;
        else return((float)1/(n*(n+1)) + TinhTong(n-1));
}
