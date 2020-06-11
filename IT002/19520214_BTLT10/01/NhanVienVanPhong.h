#ifndef NHANVIENVANPHONG_HEADER
#define NHANVIENVANPHONG_HEADER

#include "NhanVien.h"
#include <iostream>

using namespace std;

class NhanVienVanPhong : public NhanVien {
protected:
    int songaylamviec;
    long long trocap;
public:
    NhanVienVanPhong() {
        loai = 1;
    }
    void Nhap();
    long long getLuong();
    void Xuat();
};

#endif
