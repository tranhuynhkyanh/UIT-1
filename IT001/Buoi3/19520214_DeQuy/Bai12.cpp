#include <bits/stdc++.h>

using namespace std;

int n, _max = 0;
void ChuSoMax(int n);

int main(){
    cin >> n;
    ChuSoMax(n);
    cout << _max;
    return 0;
}

void ChuSoMax(int n){
    if (n>0){
        if ((n%10) > _max) _max = n%10;
        n = n/10;
        ChuSoMax(n);
    }
    return;
}
