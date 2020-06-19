/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;


//###INSERT CODE HERE -

void _swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void quick_sort(int *arr, int left, int right) {
    int l = left;
    int r = right;
    int pivot = arr[(l + r) >> 1];
    while(l <= r) {
        while(arr[l] < pivot) l++;
        while(arr[r] > pivot) r--;
        if (l > r) break;
        _swap(arr[l], arr[r]);
        l++;
        r--;
    }
    if (left < r) quick_sort(arr, left, r);
    if (l < right) quick_sort(arr, l, right);
}

void print_result(int *arr, int n){
    for (int i = 0; i < n; i++){
		if (arr[i] == arr[i + 1]) continue;
		cout << arr[i] << '\n';
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int *arr = new int[1010101];
    int n = 0, x;
    do{
        cin >> x;
        if (x != 0) arr[n++] = x;
        else {
            quick_sort(arr, 0, n - 1);
            print_result(arr, n);
            exit;
        }
    } while (x != 0);
    return 0;
}

