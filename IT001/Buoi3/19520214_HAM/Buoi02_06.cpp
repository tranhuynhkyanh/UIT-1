#include <bits/stdc++.h>

using namespace std;

int tong(int n);

int main(){
    int n;
    cin >> n;
    cout << "Tong la : " << tong(n);
    return 0;
}

int tong(int n){
    return (n*(n+1)/2);
}
