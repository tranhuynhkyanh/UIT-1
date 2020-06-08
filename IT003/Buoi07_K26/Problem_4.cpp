/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
new
std
###End banned keyword*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::pair;


//###INSERT CODE HERE -

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int pivot, int *arr, int n) {
    pivot = arr[n - 1];
    int i = -1;
    for (int j = 0; j < n; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[n - 1]);
    return i + 1;
}

int main()
{
    int n, pivot;
    cin >> n ;
    int * a = new int [n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int p = partition(pivot, a, n);
    for (int i = 0; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << p;
}
