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

//###INSERT CODE HERE -

struct NgayThangNam{
    int ngay, thang, nam, num;
    long long sum;
};

void merge(NgayThangNam *a, int n, NgayThangNam *b, int m, NgayThangNam *c){
	int i = 0, j = 0, k = 0;
	while (i < n && j < m){
		if (a[i].sum <= b[j].sum){
			c[k] = a[i];
			i++;
			k++;
		} else {
			c[k] = b[j];
			k++;
			j++;
		}
	}
	while (i < n)
		c[k++] = a[i++];
	while (j < m)
		c[k++] = b[j++];
}

void its_magic(NgayThangNam *a, int n, int k, NgayThangNam *temp)
{
	int i = 0;
	while (i + 2 * k <= n){
		merge(a + i, k, a + i + k, k, temp + i);
		i += 2 * k;
	}
	if (i + k<n&&i + 2 * k>n)
		merge(a + i, k, a + i + k, n - i - k, temp + i);
	else
		for (i; i < n; i++)
			temp[i] = a[i];
}

void merge_sort(NgayThangNam *a, int n, NgayThangNam *res){
	for (int i = 1; i < n; i *= 2){
		its_magic(a, n, i, res);
		for (int j = 0; j < n; j++)
			a[j] = res[j];
	}
}

int main(){
    fast_io;
    int n;
    cin >> n;
    NgayThangNam *arr = new NgayThangNam[n];
    NgayThangNam *res = new NgayThangNam[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].ngay >> arr[i].thang >> arr[i].nam >> arr[i].num;
        arr[i].sum = arr[i].nam * 365 + arr[i].thang * 30 + arr[i].ngay;
    }
    merge_sort(arr, n, res);
    for(int i = 0; i < n; i++){
        cout << arr[i].ngay << " " <<arr[i].thang << " " << arr[i].nam <<  " ";
        cout << arr[i].num << endl;
    }
    return 0;
}
