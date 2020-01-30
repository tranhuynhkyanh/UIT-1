#include <bits/stdc++.h>

using namespace std;

int main(){
    float a,b;
    cin >> a >> b;
    cout << "(" << a << ") + (" << b << ") = " << roundf((a+b) * pow(10,2)) / pow(10,2) << endl;
    cout << "(" << a << ") - (" << b << ") = " << roundf((a-b) * pow(10,2)) / pow(10,2) << endl;
    cout << "(" << a << ") * (" << b << ") = " << roundf((a*b) * pow(10,2)) / pow(10,2) << endl;
    cout << "(" << a << ") / (" << b << ") = " << roundf(float(a/b) * pow(10,2)) / pow(10,2) << endl;
    return 0;
}
