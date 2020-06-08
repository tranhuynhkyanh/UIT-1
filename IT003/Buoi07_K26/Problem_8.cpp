/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

#define fast_io     ios_base::sync_with_stdio(false)

//###INSERT CODE HERE -

struct NgayThangNam{
    int ngay, thang, nam;
    long long sum;
};

void _swap(NgayThangNam &a, NgayThangNam &b){
    NgayThangNam _tmp = a;
    a = b;
    b = _tmp;
}

void quick_sort(NgayThangNam arr[], int _left, int _right) {
    long long x = arr[(_left + _right) / 2].sum;
    int i = _left;
    int j = _right;
    while (i < j){
        while (arr[i].sum < x) i++;
        while (arr[j].sum > x) j--;
        if (i <= j){
            _swap(arr[i], arr[j]);
            i++; j--;
        }
    }
    if (i < _right) quick_sort(arr, i, _right);
    if (j > _left) quick_sort(arr, _left, j);
}

int main(){
    fast_io;
    int n;
    cin >> n;
    NgayThangNam arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].ngay >> arr[i].thang >> arr[i].nam;
        arr[i].sum = arr[i].nam * 365 + arr[i].thang * 30 + arr[i].ngay;
    }
    quick_sort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
        cout << arr[i].ngay << " " <<arr[i].thang << " " << arr[i].nam << endl;
    return 0;
}
