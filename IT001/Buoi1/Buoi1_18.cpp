#include <bits/stdc++.h>

using namespace std;

int main(){
    long double a,b,c,tb;
    cin >> a >> b >> c;
    tb = (long double)((a+b+c)/3);
    cout << "DTB = " << roundf(tb * pow(10,2)) / pow(10,2) << endl;
    if ((tb <= 10) && (tb >= 9)) cout << "Loai: XUAT SAC";
    if ((tb < 9) && (tb >= 8)) cout << "Loai: GIOI";
    if ((tb < 8) && (tb >= 7)) cout << "Loai: KHA";
    if ((tb < 7) && (tb >= 6)) cout << "Loai: TB KHA";
    if ((tb < 6) && (tb >= 5)) cout << "Loai: TB";
    if ((tb < 5) && (tb >= 4)) cout << "Loai: YEU";
    if (tb < 4) cout << "Loai: KEM";
    return 0;
}
