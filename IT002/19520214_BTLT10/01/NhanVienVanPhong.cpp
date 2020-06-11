#include "NhanVienVanPhong.h"
#include <iostream>

using namespace std;

void NhanVienVanPhong::Nhap() {
    NhanVien::Nhap();
    cout << " + Nhap so ngay lam viec: ";
    cin >> songaylamviec;
    cout << " + Nhap tro cap: ";
    cin >> trocap;
}

long long NhanVienVanPhong::getLuong() {
    return NhanVien::luongcoban + songaylamviec * 200000 + trocap;
}

void NhanVienVanPhong::Xuat() {
    NhanVien::Xuat();
    cout << " + So ngay lam viec: " << songaylamviec << "\n";
    cout << " + Tro cap: " << trocap << "\n";
}
