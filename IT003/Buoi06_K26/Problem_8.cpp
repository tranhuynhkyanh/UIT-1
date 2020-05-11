/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

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

void select_sort(NgayThangNam arr[], int n) {
    int _min;
    for (int i = 0; i < n; i++) {
        _min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].sum < arr[_min].sum) _min = j;
        }
        _swap(arr[i], arr[_min]);
    }
}

int main(){
    int n;
    cin >> n;
    NgayThangNam arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].ngay >> arr[i].thang >> arr[i].nam;
        arr[i].sum = arr[i].nam * 365 + arr[i].thang * 30 + arr[i].ngay;
    }
    select_sort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i].ngay << " " <<arr[i].thang << " " << arr[i].nam << endl;
    return 0;
}
