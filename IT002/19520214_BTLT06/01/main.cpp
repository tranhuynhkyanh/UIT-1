#include "SoPhuc.h"
#include <iostream>

using namespace std;

int main() {
	SoPhuc a, b;
	cout << "- Nhap so phuc thu 1: " << endl;
	a.Nhap();
	cout << "[=> So phuc thu 1: ";
	a.Xuat();
	cout << endl;
	cout << "- Nhap so phuc thu 2: " << endl;
	b.Nhap();
	cout << "[=> So phuc thu 2: ";
	b.Xuat();
	cout << "==================" << endl << endl;
	SoPhuc c, d;
	int k;
	c = a + b;
	cout << "[=> So phuc 1 + So phuc 2: ";
	c.Xuat();
	d = a - b;
	cout << "[=> So phuc 1 - So phuc 2: ";
	d.Xuat();
	cout << "- Nhap so k: ";
	cin >> k;
	c = a + k;
	cout << "[=> So phuc 1 + " << k << ": ";
	c.Xuat();
	c = a - k;
	cout << "[=> So phuc 1 - " << k << ": ";
	c.Xuat();
	d = b + k;
	cout << "[=> So phuc 2 + " << k << ": ";
	d.Xuat();
	d = b - k;
	cout << "[=> So phuc 2 - " << k << ": ";
	d.Xuat();
	return 0;
}