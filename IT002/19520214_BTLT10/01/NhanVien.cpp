#include "NhanVien.h"
#include <iostream>
#include <string>

using namespace std;

int NhanVien::getLoai() {
    return loai;
}

string NhanVien::getTen() {
    return hoten;
}

void NhanVien::Nhap() {
    cout << " + Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout << " + Nhap ngay sinh: ";
    getline(cin, ngaysinh);
    cout << " + Nhap luong co ban: ";
    cin >> luongcoban;
}

void NhanVien::Xuat() {
    cout << " + Ho ten: " << hoten << "\n";
    cout << " + Ngay sinh: " << ngaysinh << "\n";
    cout << " + Chuc vu: ";
    if (loai == 1) cout << "Nhan vien van phong\n";
    else if (loai == 2) cout << "Nhan vien san xuat\n";
    else cout << "Nhan vien quan ly\n";
    cout << " + Luong co ban: " << luongcoban << "\n";
}
