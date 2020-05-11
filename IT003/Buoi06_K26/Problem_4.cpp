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

int _upper_bound(int* arr, int _left, int _right, int x, int &pos){
    if (_left <= _right){
        int _mid = (_left + _right) / 2;
        if (arr[_mid] == x){
            pos = _mid;
            _left = _mid + 1;
            _upper_bound(arr, _left, _right, x, pos);
        } else if (arr[_mid] < x){
            _left = _mid + 1;
            _upper_bound(arr, _left, _right, x, pos);
        } else {
            _right = _mid - 1;
            _upper_bound(arr, _left, _right, x, pos);
        }
    }
    return pos;
}

int binsearch(int* arr, int x, int n){
    int pos = -1;
    return _upper_bound(arr, 0, n - 1, x, pos);
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
