#include "DanhSachPhanSo.h"

#include <iostream>

using namespace std;

void DanhSachPhanSo::Nhap() {
	cout << "[=> Nhap so phan so: ";
	cin >> n;
	arr = new PhanSo[n];
	for (int i = 0; i < n; i++) {
		cout << "- Nhap phan so thu " << (i+1) << ": " << endl;
		arr[i].Nhap();
	}
}

void DanhSachPhanSo::Xuat() {
	cout << "======================" << endl;
	cout << "- Phan so da nhap la: " << endl;
	for (int i = 0; i < n; i++) {
		cout << " + Phan so thu " << (i + 1) << ": ";
		arr[i].Xuat();
		cout << endl;
	}
}