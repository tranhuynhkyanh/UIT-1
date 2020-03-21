#include "phanso.h"

void NhapPhanSo(PHANSO &PhanSo) {
    do {
        cout << " + Tu so: ";
        cin >> PhanSo.TuSo;
        cout << " + Mau so: ";
        cin >> PhanSo.MauSo;
    } while (PhanSo.TuSo == 0 || PhanSo.MauSo == 0);
}

void XuatPhanSo(PHANSO PhanSo) {
    cout << PhanSo.TuSo << "/" << PhanSo.MauSo << endl;
}