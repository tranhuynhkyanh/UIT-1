#ifndef NHANVIENSANXUAT_HEADER
#define NHANVIENSANXUAT_HEADER

#include "NhanVien.h"
#include <iostream>

using namespace std;

class NhanVienSanXuat : public NhanVien {
protected:
    int sosanpham;
public:
    NhanVienSanXuat() {
        loai = 2;
    }
    void Nhap();
    long long getLuong();
    void Xuat();
};

#endif
