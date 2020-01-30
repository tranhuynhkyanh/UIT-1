#include <bits/stdc++.h>

using namespace std;


int main(){
    long double a,b;
    cin >> a >> b;
    if (a == 0){
        if (b == 0){
            cout << "VSN";
        } else {
            cout << "VN";
        }
    } else {
        if (b == 0) cout << "x = 0";
            else cout << "x = " << (long double)(-b/a);
    }
    return 0;
}
