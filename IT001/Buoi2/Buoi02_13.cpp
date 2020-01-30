#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

bool Check(long n){
    long sum = 0;
    rep(i,1,n-1){
        if (n % i == 0) sum+=i;
    }
    if (sum == n) return true;
    return false;
}

int main(){
    long n;
    cin >> n;
    rep(i,1,n)
        if (Check(i)) cout << i << endl;
    return 0;
}
