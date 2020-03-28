#include "PhanSo.h"

#include <iostream>

using namespace std;

void PhanSo::Nhap() {
    cout << " + Nhap tu so: ";
    cin >> tuSo;
    cout << " + Nhap mau so: ";
    cin >> mauSo;
}

void PhanSo::Xuat() {
    cout << this->tuSo << "/" << this->mauSo;
}