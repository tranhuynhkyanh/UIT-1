#include "phanso.h"

int UCLN(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void RutGonPhanSoVaInKetQua(PHANSO PhanSo) {
    cout << "[=> Ket qua: ";
    if (PhanSo.TuSo == 0) {
        cout << "0";
    }
    else if (PhanSo.TuSo % PhanSo.MauSo == 0 && PhanSo.TuSo > PhanSo.MauSo) {
        cout << PhanSo.TuSo / PhanSo.MauSo;
    }
    else {
        int UocChung = UCLN(PhanSo.TuSo, PhanSo.MauSo);
        if (UocChung < 0) {
            cout << "-";
        }
        cout << abs((PhanSo.TuSo / UocChung)) << "/" << abs((PhanSo.MauSo / UocChung));
    }
    cout << endl << "==================================================";
}

void CongPhanSo(PHANSO PhanSo1, PHANSO PhanSo2) {
    PHANSO KetQua;
    KetQua.TuSo = PhanSo2.MauSo * PhanSo1.TuSo + PhanSo1.MauSo * PhanSo2.TuSo;
    KetQua.MauSo = PhanSo1.MauSo * PhanSo2.MauSo;
    RutGonPhanSoVaInKetQua(KetQua);
}

void TruPhanSo(PHANSO PhanSo1, PHANSO PhanSo2) {
    PHANSO KetQua;
    KetQua.TuSo = PhanSo2.MauSo * PhanSo1.TuSo - PhanSo1.MauSo * PhanSo2.TuSo;
    KetQua.MauSo = PhanSo1.MauSo * PhanSo2.MauSo;
    RutGonPhanSoVaInKetQua(KetQua);
}

void NhanPhanSo(PHANSO PhanSo1, PHANSO PhanSo2) {
    PHANSO KetQua;
    KetQua.TuSo = PhanSo1.TuSo * PhanSo2.TuSo;
    KetQua.MauSo = PhanSo1.MauSo * PhanSo2.MauSo;
    RutGonPhanSoVaInKetQua(KetQua);
}

void ChiaPhanSo(PHANSO PhanSo1, PHANSO PhanSo2) {
    PHANSO KetQua;
    KetQua.TuSo = PhanSo1.TuSo * PhanSo2.MauSo;
    KetQua.MauSo = PhanSo1.MauSo * PhanSo2.TuSo;
    RutGonPhanSoVaInKetQua(KetQua);
}
