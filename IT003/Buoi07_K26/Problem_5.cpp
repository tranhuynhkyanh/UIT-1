#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void quick_sort(int *a, int left, int right) {
    int x = a[(left + right) / 2];
    int i = left;
    int j = right;
    while (i < j) {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++; j--;
        }
    }
    if (i < right) quick_sort(a, i, right);
    if (left < j) quick_sort(a, left, j);
}
int main(){
    std::ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
