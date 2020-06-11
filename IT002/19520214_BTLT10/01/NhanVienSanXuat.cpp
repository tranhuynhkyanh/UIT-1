#include "NhanVienSanXuat.h"
#include <iostream>

using namespace std;

void NhanVienSanXuat::Nhap() {
    NhanVien::Nhap();
    cout << " + Nhap so san pham: ";
    cin >> sosanpham;
}

long long NhanVienSanXuat::getLuong() {
    return NhanVien::luongcoban + sosanpham * 2000;
}

void NhanVienSanXuat::Xuat() {
    NhanVien::Xuat();
    cout << " + So san pham: " << sosanpham << "\n";
}
