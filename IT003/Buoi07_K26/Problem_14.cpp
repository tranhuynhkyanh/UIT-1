/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/
#include <iostream>
using namespace std;


//###INSERT CODE HERE -

void merge(int* a, int n, int* b, int m, int* c){
    int i, j, k;
    i = j = k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        }
        else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < m) {
        c[k] = b[j];
        k++;
        j++;
    }
}

void its_magic(int* a, int n, int k, int* temp) {
    int sub_length = n / (2 * k);
    for (int i = 0; i < sub_length; i++) {
        merge(a + (2 * k * i), k, a + (2 * i * k) + k, k, temp + (2 * i * k));
    }
    if ((n % (2 * k)) > k) {
        merge(a + (2 * sub_length * k), k, a + (2 * sub_length * k) + k, (n % (2 * k)) - k, temp + (k * sub_length * 2));
    } else {
       copy(a + (2 * sub_length * k), a + (k * sub_length * 2)+ (n % (2 * k)), temp + (k * sub_length * 2));
    }
}


int main () {
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    int *temp = new int [n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;

    its_magic(a, n, k, temp);

    for(int i = 0; i < n; i++){
        cout << temp[i] << " ";
    }
}


