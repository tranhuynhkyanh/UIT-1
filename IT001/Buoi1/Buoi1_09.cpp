#include <bits/stdc++.h>

using namespace std;

int main(){
    float a,b,c,s,p;
    cin >> a >> b >> c;
    p = float((a + b + c) / 2);
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << roundf(s * pow(10,2)) / pow(10,2);
    return 0;
}
