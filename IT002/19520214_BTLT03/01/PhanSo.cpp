#include "PhanSo.h"

int UCLN(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void PhanSo::Nhap() {
    cout << " + Nhap tu so: ";
    cin >> this->tuSo;
    cout << " + Nhap mau so: ";
    cin >> this->mauSo;
}

PhanSo PhanSo::CongPhanSo(PhanSo a){
    PhanSo ketQua;
    ketQua.tuSo = tuSo * a.mauSo + mauSo * a.tuSo;
    ketQua.mauSo = mauSo * a.mauSo;
    return ketQua;
}
PhanSo PhanSo::TruPhanSo(PhanSo a){
    PhanSo ketQua;
    ketQua.tuSo = tuSo * a.mauSo - mauSo * a.tuSo;
    ketQua.mauSo = mauSo * a.mauSo;
    return ketQua;
}
PhanSo PhanSo::NhanPhanSo(PhanSo a){
    PhanSo ketQua;
    ketQua.tuSo = tuSo * a.tuSo;
    ketQua.mauSo = mauSo * a.mauSo;
    return ketQua;
}
PhanSo PhanSo::ChiaPhanSo(PhanSo a){
    PhanSo ketQua;
    ketQua.tuSo = tuSo * a.mauSo;
    ketQua.mauSo = mauSo * a.tuSo;
    return ketQua;
}

void PhanSo::RutGon() {
    int UocChung = UCLN(tuSo, mauSo);
    bool xetDauTu;
    bool xetDauMau;
    if (tuSo / UocChung < 0) xetDauTu = true;
    else xetDauTu = false;
    if (mauSo / UocChung < 0) xetDauMau = true;
    else xetDauMau = false;
    if (xetDauTu != xetDauMau) cout << "-";
    cout << abs(tuSo / UocChung) << "/" << abs(mauSo / UocChung) << endl;
}