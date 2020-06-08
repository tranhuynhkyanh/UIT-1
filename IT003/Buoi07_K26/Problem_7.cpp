/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
std
###End banned keyword*/
#include <iostream>
#include <cstring>

//###INSERT CODE HERE -

int _binary_search(int *arr, int left, int right, int x){
    if (left > right) return -1;
    int mid = (left + right)/2;
    if(arr[mid] == x)
        return mid;
    if(arr[mid] < x)
        return _binary_search(arr, mid+1, right, x);
    return _binary_search(arr, left, mid-1, x);
}

int _lower_bound(int *arr, int n, int x) {
    int left = 0;
    int right = n;
    while (left < right) {
        int mid =  left + (right - left) / 2;
        if (x <= arr[mid]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int bin_search(int ms, int *a, int n){
    return(_binary_search(a, 0, n-1, ms));
}

void insertion_binary_search_sort(int ms, int *&a, int &n){
    if (bin_search(ms, a, n) < 0){
        int pos = _lower_bound(a, n, ms);
        for (int i = n; i >= pos; i--)
            a[i] = a[i - 1];
        a[pos] = ms; n++;
    } else return;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int *a = new int [1000000];
    int x;
    int n = 0, ms;
    do {
        std::cin >> x;
        if (x == 0) break;
        std::cin >> ms;

        if (x == 1) insertion_binary_search_sort(ms, a, n);
        else if (x == 2) std::cout << bin_search(ms, a, n) + 1 << std::endl;
    } while (x > 0);

    return 0;
}
