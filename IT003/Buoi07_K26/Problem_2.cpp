#include <bits/stdc++.h>

using namespace std;

void checkHeap(int *a, int n){
	if (n <= 1){
		cout << "HEAP\n0";
		return;
	}
	if (n == 2) {
		if (a[0] > a[1]) cout << "HEAP" << endl << "0";
		else cout << "NOT HEAP" << endl << "1";
		return;
	}
	int count = 0;
	for (int i = 0; i < int(n / 2); i++){
		if (a[i] < a[2 * i + 1] || (a[i] < a[2 * i + 2]&&2*i+2<n)) count++;
	}
	if (count == 0) cout << "HEAP" << endl << count;
	else cout << "NOT HEAP" << endl << count;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	checkHeap(a, n);
	return 0;
}
