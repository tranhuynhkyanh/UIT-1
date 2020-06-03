#include "SoAo.h"

void SoAo::Nhap() {
    SoPhuc::fThuc = 0;
    cout << " + Nhap phan ao: ";
    cin >> this->fAo;
}

void SoAo::Xuat() {
    SoPhuc::Xuat();
}

void SoAo::TinhTong(SoAo a) {
    SoPhuc::TinhTong(a);
}




