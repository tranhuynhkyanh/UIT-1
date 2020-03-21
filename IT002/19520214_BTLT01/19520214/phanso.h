#include <iostream>
#include <cmath>

using namespace std;

struct PHANSO {
    int TuSo;
    int MauSo;
};

void HienMenu();

void NhapPhanSo();

int UCLN(int a, int b);

void RutGonPhanSoVaInKetQua(PHANSO PhanSo);

void CongPhanSo(PHANSO PhanSo1, PHANSO PhanSo2);

void TruPhanSo(PHANSO PhanSo1, PHANSO PhanSo2);

void NhanPhanSo(PHANSO PhanSo1, PHANSO PhanSo2);

void ChiaPhanSo(PHANSO PhanSo1, PHANSO PhanSo2);