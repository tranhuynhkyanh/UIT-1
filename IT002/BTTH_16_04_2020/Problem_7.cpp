#include <bits/stdc++.h>

using namespace std;

#define LL long long

LL Knuth_Up_Arrow(int a, int k, int n){
    if (n == 0)
        return 1;
    if (k == 1)
        return pow(a, n);
    return Knuth_Up_Arrow(a, k-1, Knuth_Up_Arrow(a, k, n-1));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int a, k, n;
    cin >> a >> k >> n;
    cout << Knuth_Up_Arrow(a, k, n);
    return 0;
}
