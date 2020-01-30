#include <bits/stdc++.h>

using namespace std;

int n, dem = 0;
void DemChuSo(int n);

int main(){
    cin >> n;
    DemChuSo(n);
    cout << dem;
    return 0;
}

void DemChuSo(int n){
    if (n>0){
        n = n/10;
        dem++;
        DemChuSo(n);
    }
    return;
}
