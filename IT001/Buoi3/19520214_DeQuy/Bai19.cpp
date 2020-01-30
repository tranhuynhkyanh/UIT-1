#include <bits/stdc++.h>

using namespace std;

int n,dem = 0;
void SoChuSoLe(int n);

int main(){
    cin >> n;
    SoChuSoLe(n);
    cout << dem;
    return 0;
}

void SoChuSoLe(int n){
    if (n>0){
        if (((n%10)%2) != 0){
            dem++;
        }
        n = n/10;
        SoChuSoLe(n);
    }
}
