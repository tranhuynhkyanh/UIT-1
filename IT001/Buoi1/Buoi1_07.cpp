#include <bits/stdc++.h>

using namespace std;

int main(){
    float x;
    int d;
    cin >> x >> d;
    cout << roundf(x * pow(10,d)) / pow(10,d) << endl;
    return 0;
}
