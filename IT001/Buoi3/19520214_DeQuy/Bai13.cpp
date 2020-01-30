#include <bits/stdc++.h>

using namespace std;

int n;
void ChuSoToanChan(int n);

int main(){
    cin >> n;
    ChuSoToanChan(n);
    return 0;
}

void ChuSoToanChan(int n){
    if (n>0){
        if (((n%10)%2) != 0){
            cout << "n khong toan chan";
        } else {
            n = n/10;
            ChuSoToanChan(n);
        }
    } else
        cout << "n toan chan";
    return;
}
