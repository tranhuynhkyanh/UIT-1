#pragma once

#include "NguoiChoi.h"
#include "NguoiLon.h"
#include "TreEm.h"

class QuanLy{
private:
    int soluong;
    NguoiChoi** arr;
public:
    void Nhap();
    double tinhTien(NguoiChoi* a);
    void Xuat();
};
