#include <bits/stdc++.h>

using namespace std;

int n,sum = 0;
void TinhTong(int n);

int main(){
    cin >> n;
    TinhTong(n);
    cout << sum;
    return 0;
}

void TinhTong(int n){
    if (n>0){
        sum += n%10;
        n = n/10;
        TinhTong(n);
    }
}
