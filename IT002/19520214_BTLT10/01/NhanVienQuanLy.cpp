#include "NhanVienQuanLy.h"
#include <iostream>

using namespace std;

void NhanVienQuanLy::Nhap() {
    NhanVien::Nhap();
    cout << " + Nhap he so chuc vu: ";
    cin >> hesochucvu;
    cout << " + Nhap thuong: ";
    cin >> thuong;
}

long long NhanVienQuanLy::getLuong() {
    return NhanVien::luongcoban * hesochucvu + thuong;
}

void NhanVienQuanLy::Xuat() {
    NhanVien::Xuat();
    cout << " + He so chuc vu: " << hesochucvu << "\n";
    cout << " + Thuong: " << thuong << "\n";
}
