#include <bits/stdc++.h>

using namespace std;

long Fibo(int n);

int main(){
    int n;
    cin >> n;
    cout << Fibo(n+1);
    return 0;
}

long Fibo(int n){
    if (n==0) return 1;
    if (n==1) return 1;
    return(Fibo(n-1) + Fibo(n-2));
}
