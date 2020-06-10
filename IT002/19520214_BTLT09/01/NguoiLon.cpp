#include "NguoiLon.h"
#include <iostream>

using namespace std;

void NguoiLon::Nhap() {
    cout << " - Nhap so CMND: ";
    cin >> cmnd;
}

void NguoiLon::Xuat() {
    NguoiChoi::Xuat();
    cout << " - So CMND: " << cmnd << "\n";
}
