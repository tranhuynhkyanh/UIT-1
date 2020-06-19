#include <bits/stdc++.h>

using namespace std;

struct Date{
    int ngay, thang, nam;
    long long _ngay = 0;
};

void _swap(Date& a, Date &b){
    Date tmp = a;
    a = b;
    b = tmp;
}

void quick_sort(Date *arr, int left, int right) {
    int l = left;
    int r = right;
    int pivot = arr[(l + r) >> 1]._ngay;
    while(l <= r) {
        while(arr[l]._ngay < pivot) l++;
        while(arr[r]._ngay > pivot) r--;
        if (l > r) break;
        _swap(arr[l], arr[r]);
        l++;
        r--;
    }
    if (left < r) quick_sort(arr, left, r);
    if (l < right) quick_sort(arr, l, right);
}

void print_result(Date* arr, int n){
    for (int i = 0; i < n; i++){
        if (arr[i]._ngay == arr[i + 1]._ngay) continue;
        cout << arr[i].ngay << " " << arr[i].thang << " ";
        cout << arr[i].nam << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    Date x;
    Date *arr = new Date[1010101];
    int n = 0;
    do {
        cin >> x.ngay;
        if (x.ngay == 0) {
            quick_sort(arr, 0, n - 1);
            print_result(arr, n);
            exit;
        } else {
            cin >> x.thang >> x.nam;
            x._ngay = x.ngay + x.thang * 30 + x.nam * 365;
            arr[n++] = x;
        }
    } while (x.ngay != 0);
    return 0;
}
