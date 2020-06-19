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

void _swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void heapify(int *arr, int n, int i){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i){
        _swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapify_for_upheap(int *arr, int n, int i){
    int largest = (i-1)/2;
    if (arr[i] > arr[largest]){
		_swap(arr[i], arr[largest]);
		heapify_for_upheap(arr, n, largest);
	}
}

void create_heap(int *arr, int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heap_sort(int *arr, int n){
	for (int i = n - 1; i > 0; i--){
        _swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void print_result(int *arr, int n){
    cout << n << "\n";
    for(int i = n-1; i >= 0; i--)
        cout << arr[i] << "\n";
}

int main(){
    std::ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0, x, temp;
    int *arr = new int[101010];
    do {
        cin >> x;
        if (n < 100000 && x > 0){
            arr[n++] = x;
            heapify_for_upheap(arr, n, n-1);
        }
        if (x == -1){
            temp = arr[0];
			while (n > 0 && arr[0] == temp) {
                if (n > 0){
                    _swap(arr[0], arr[n - 1]);
                    n--;
                    heapify(arr, n, 0);
                }
			}
        }
        if (x == -2){
            heap_sort(arr, n);
            print_result(arr, n);
            break;
        }
    } while ( x != -2);
    return 0;
}
