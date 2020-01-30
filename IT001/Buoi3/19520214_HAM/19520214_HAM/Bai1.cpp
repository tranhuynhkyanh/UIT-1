#include <bits/stdc++.h>

using namespace std;

long long n, dem = 0;

void demsochuso(long long n);

int main(){
    cin >> n;
    demsochuso(n);
    cout << dem;
    return 0;
}

void demsochuso(long long n){
    if (n>0){
        n = n/10;
        dem++;
        demsochuso(n);
    }
    return;
}
