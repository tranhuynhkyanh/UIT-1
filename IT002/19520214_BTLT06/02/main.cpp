#include "DaThuc.h"
#include <iostream>

using namespace std;

int main() {
	DaThuc a, b, c, d;
	cout << "[=> Nhap da thuc 1: " << endl;
	a.Nhap();
	cout << "[=> Da thuc 1: ";
	a.Xuat();
	cout << "[=> Nhap da thuc 2: " << endl;
	b.Nhap();
	cout << "[=> Da thuc 2: ";
	b.Xuat();
	cout << "====================" << endl;
	// !=
	cout << "[=> Da thuc 1 != Da thuc 2: ";
	bool _check = (a != b);
	if (_check) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;
	// +
	c = a + b;
	cout << "[=> Da thuc 1 + Da thuc 2: ";
	c.Xuat();
	// -
	d = a - b;
	cout << "[=> Da thuc 1 - Da thuc 2: ";
	d.Xuat();
    //====
    int k;
    cout << "[=> Nhap so k: ";
    cin >> k;
    c = a + k;
    cout << "[=> Da thuc 1 + " << k << ": ";
    c.Xuat();
    c = a - k;
    cout << "[=> Da thuc 1 - " << k << ": ";
    c.Xuat();
    d = b + k;
    cout << "[=> Da thuc 2 + " << k << ": ";
    d.Xuat();
    d = b - k;
    cout << "[=> Da thuc 2 - " << k << ": ";
    d.Xuat();
	cout << "[=> Gia tri da thuc 1 tai x = " << k << ": ";
	a.Xuat(k);
	cout << "[=> Gia tri da thuc 2 tai x = " << k << ": ";
	b.Xuat(k);

	return 0;
}
