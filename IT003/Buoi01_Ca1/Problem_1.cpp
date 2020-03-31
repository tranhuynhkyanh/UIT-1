#include <bits/stdc++.h>

using namespace std;

#define LL long long

LL n, _max, _min, _vt_min = 0;

int main(){
    cin >> n;
    vector<LL> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    //process
    _min = a[0]; _max = LONG_MIN;
    for (int i=1; i<n; i++){
        if (a[i] < _min){
            _min = a[i];
            _vt_min = i;
        }
        _max = max(_max, a[i] - _min);
    }
    cout << _max;
    return 0;
}
