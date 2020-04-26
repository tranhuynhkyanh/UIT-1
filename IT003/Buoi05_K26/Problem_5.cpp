/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
for
while
goto
###End banned keyword*/

#include <iostream>
using namespace std;


//###INSERT CODE HERE -

bool _check = false;
int _left, _right;

int binsearch(int *a, int x, int n){
    if (_check == false){
        _left = 0;
        _right = n-1;
        _check = true;
    }
    if (_left <= _right){
        int _mid = (_left + _right) / 2;
        if (a[_mid] == x){
            _check = false;
            return _mid;
        }
        if (x < a[_mid]) {
            _right = _mid - 1;
            binsearch(a, x, n);
        } else {
            _left = _mid + 1;
            binsearch(a, x, n);
        }
    } else {
        _check = false;
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;

        int it = binsearch(a, x, n);

        cout << it;
        cout << endl;
    }
}
