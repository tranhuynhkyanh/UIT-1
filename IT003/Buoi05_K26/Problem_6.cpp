/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
for
while
goto
###End banned keyword*/

#include <iostream>
using namespace std;

int binsearch(int *a, int x, int n){

//###INSERT CODE HERE -

    if (n == 0) return -1;
    int _mid = n / 2;
    if (a[_mid] == x) return _mid;
    int _result;
    if (x < a[_mid])
        _result = binsearch(a, x, _mid);
    else
        _result = binsearch(a + _mid + 1, x, n - _mid -1);
    if (_result != -1 && x > a[_mid])
        return _result + _mid + 1;
    else
        return _result;

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
