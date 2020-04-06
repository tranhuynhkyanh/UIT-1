#include <bits/stdc++.h>

using namespace std;

#define LL long long

LL a, b, c;

LL luythua(LL a, LL b, LL c){
    if (b == 0)
        return (1 % c);
    else if (b == 1)
        return (a % c);
    else {
        LL tmp = luythua(a, b / 2, c) % c;
        if (b % 2 == 0){
            return ((tmp * tmp) % c);
        } else {
            return ((((tmp * tmp) % c) * a) % c);
        }
    }
}

int main(){
    cin >> a >> b >> c;
    cout << luythua(a, b, c);
    return 0;
}
