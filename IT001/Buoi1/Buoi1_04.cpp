#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,s;
    cin >> a >> b >> c >> d;
    s = 500000 - ((a * c) + (b * d));
    cout << "So tien ma ban Nguyen nhan lai: " << s << endl;
    return 0;
}
