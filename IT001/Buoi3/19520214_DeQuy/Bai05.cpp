#include <bits/stdc++.h>

using namespace std;

int BinhPhuong(int x, int n);

int main(){
    int x,n;
    cin >> x >> n;
    cout << BinhPhuong(x,n);
    return 0;
}

int BinhPhuong(int x, int n){
    if (n==1) return x;
        else return(x * BinhPhuong(x,n-1));
}
