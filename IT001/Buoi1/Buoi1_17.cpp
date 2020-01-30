#include <bits/stdc++.h>

using namespace std;

int main(){
    long double a,b,c;
    long double denta;
    cin >> a >> b >> c;
    denta = pow(b,2) - 4 * a * c;
    if (denta < 0) {
        cout << "PTVN";
        exit;
    } else
        if (denta == 0){
            cout << "PT co nghiem kep: x1 = x2 = " << (long double)(-b/(2*a));
            exit;
        } else
            if (denta > 0){
                cout << "PT co hai nghiem phan biet:" << endl;
                cout << "x1 = " << (long double)(-b+sqrt(denta))/(2*a) << endl;
                cout << "x2 = " << (long double)(-b-sqrt(denta))/(2*a) << endl;
                exit;
            }
    return 0;
}
