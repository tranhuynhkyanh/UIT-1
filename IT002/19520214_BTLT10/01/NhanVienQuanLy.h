#ifndef NHANVIENQUANLY_HEADER
#define NHANVIENQUANLY_HEADER

#include "NhanVien.h"
#include <iostream>

using namespace std;

class NhanVienQuanLy : public NhanVien {
protected:
    int hesochucvu;
    long long thuong;
public:
    NhanVienQuanLy() {
        loai = 3;
    }
    void Nhap();
    long long getLuong();
    void Xuat();
};

#endif
