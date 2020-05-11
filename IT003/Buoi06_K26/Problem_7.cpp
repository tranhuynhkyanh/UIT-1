/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

//###INSERT CODE HERE -

void insertion_sort(int* &arr, int n){
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
	int n;
	cin >> n;

	int *a = new int [n];
	for(int i = 0; i < n; i++){
        cin >> a[i];
	}

    int *b = new int [n];

    for(int i = 0; i< 1000; i++){
        memcpy(b, a, n*sizeof(int));
        insertion_sort(b, n);
    }

    memcpy(a, b, n*sizeof(int));
	for(int i = 0; i < n; i++) std::cout << a[i] << " ";

}

