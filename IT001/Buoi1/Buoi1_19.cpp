#include <bits/stdc++.h>

using namespace std;

int main(){
    long double a,b,c,p,s,kq;
    cin >> a >> b >> c;
    p = (long double)((a+b+c)/2);
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    kq = roundf(s * pow(10,2)) / pow(10,2);
    if(a < b+c && b < a+c && c < a+b){
        if (a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
            cout << "Tam giac vuong, dien tich = " << kq;
        else if ((a == b) && (b == c))
            cout << "Tam giac deu, dien tich = " << kq;
        else if (a == b || a == c || b == c)
            cout << "Tam giac can, dien tich = " << kq;
        else
            cout << "Tam giac thuong, dien tich = " << kq;
    }
    else
        cout << "Khong phai tam giac";
    return 0;
}
