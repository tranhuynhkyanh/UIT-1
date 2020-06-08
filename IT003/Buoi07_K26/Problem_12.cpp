/*###Begin banned keyword - each line following if appear in code will raise error. regex allow
for
goto
while
define
include
#
:
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -

void input(int *arr, int n, int &i){
    if (i == n) return;
    else {
        cin >> arr[i++];
        return input(arr, n, i);
    }
}

void _swap(int *arr, int n, int i, int j){
	if (j >= n) return;
	if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
	}
	_swap(arr, n, i + 1, j + 1);
}

void _sort(int *arr, int n, int i){
    if (i == 0) return;
	_swap(arr, i, 0, 1);
	_sort(arr, n, i - 1);
}

void output(int *arr, int n, int &i){
    if (i == n) return;
    else {
        cout << arr[i++] << " ";
        return output(arr, n, i);
    }
}

int main(){
    cin.tie(0);
    int n, i = 0;
    cin >> n;
    int *arr = new int[n];
    input(arr, n, i); i = 0;
    _sort(arr, n, n);
    output(arr, n, i);
    return 0;
}
