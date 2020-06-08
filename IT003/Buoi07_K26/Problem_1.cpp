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

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void quick_sort(int* a, int left, int right) {
    int x = a[(left + right) / 2];
    int i = left;
    int j = right;
    while (i < j) {
        while (a[i] < x)
        {
            i++;
        }
        while (a[j] > x) {
            j--;
        }
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i < right) {
        quick_sort(a, i, right);
    }
    if (left < j) {
        quick_sort(a, left, j);
    }
}
int main()
{
    cin.tie(0);
    std::ios::sync_with_stdio(false);
    int n; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

