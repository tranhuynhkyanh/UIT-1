#include <bits/stdc++.h>

using namespace std;

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

void create_heap(int *arr, int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m, key, temp, value;
    cin >> n >> m;
    int *arr = new int [n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    create_heap(arr, n);
    for (int i = 0; i < m; i++) {
        cin >> key;
        if (key == -1){
            if (n > 0){
                _swap(arr[0], arr[n - 1]);
                n--;
                heapify(arr, n, 0);
            }
        }
        if (key == -2){
            temp = arr[0];
			while (n > 0 && arr[0] == temp) {
                if (n > 0){
                    _swap(arr[0], arr[n - 1]);
                    n--;
                    heapify(arr, n, 0);
                }
			}
        }
        if (key == -3){
            cin >> value;
            arr[0] -= value;
            heapify(arr, n, 0);
        }
        if (key == -4){
            cin >> value;
            temp = arr[0];
			while (n > 0 && arr[0] == temp) {
				arr[0] -= value;
				heapify(arr, n, 0);
			}
        }
    }
    sort(arr, arr + n, greater<int>());
    for(int i = 0; i < n; i++)
        cout << arr[i] << "\n";
    return 0;
}
