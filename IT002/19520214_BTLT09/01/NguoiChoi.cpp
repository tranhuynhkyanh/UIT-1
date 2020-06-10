#include "NguoiChoi.h"
#include <iostream>
#include <string>

using namespace std;

NguoiChoi::NguoiChoi() {

}
NguoiChoi::NguoiChoi(NguoiChoi& a) {
    hoten = a.hoten;
    tuoi = a.tuoi;
    chieucao = a.chieucao;
    sotrochoi = a.sotrochoi;
}

void NguoiChoi::Nhap() {
    cout << " - Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout << " - Nhap tuoi: ";
    cin >> tuoi;
    cout << " - Nhap chieu cao: ";
    cin >> chieucao;
    cout << " - Nhap so tro choi da choi: ";
    cin >> sotrochoi;
}

string NguoiChoi::getHoTen() {
    return hoten;
}

int NguoiChoi::getTuoi() {
    return tuoi;
}

int NguoiChoi::getChieuCao() {
    return chieucao;
}

int NguoiChoi::getSoTroChoi() {
    return sotrochoi;
}

void NguoiChoi::Xuat() {
    cout << " - Ho ten: " << hoten << "\n";
    cout << " - Tuoi: " << tuoi << "\n";
    cout << " - Chieu cao: " << chieucao << "\n";
    cout << " - So tro choi: " << sotrochoi << "\n";
}
