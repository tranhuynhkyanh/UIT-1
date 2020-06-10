#pragma once

#include <string>

using namespace std;

class NguoiChoi {
protected:
    string hoten;
    int tuoi;
    int chieucao;
    int sotrochoi;
public:
    NguoiChoi();
    NguoiChoi(NguoiChoi& a);
    void Nhap();
    string getHoTen();
    int getTuoi();
    int getChieuCao();
    int getSoTroChoi();
    void Xuat();
};
