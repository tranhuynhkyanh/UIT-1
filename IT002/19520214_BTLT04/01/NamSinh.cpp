#include "NamSinh.h"
#include <iostream>

using namespace std;

NamSinh::NamSinh() {
	iNgaySinh = 1;
	iThangSinh = 1;
	iNamSinh = 1;
}

NamSinh::NamSinh(int newNgaySinh, int newThangSinh, int newNamSinh) {
	iNgaySinh = newNgaySinh;
	iThangSinh = newThangSinh;
	iNamSinh = newNamSinh;
}

NamSinh::~NamSinh() {

}

void NamSinh::Nhap() {
	cout << " + Nhap ngay sinh: ";
	cin >> this->iNgaySinh;
	cout << " + Nhap thang sinh: ";
	cin >> this->iThangSinh;
	cout << " + Nhap nam sinh: ";
	cin >> this->iNamSinh;
}

