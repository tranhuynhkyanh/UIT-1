#ifndef NHANVIEN_HEADER
#define NHANVIEN_HEADER
#include <iostream>

using namespace std;

class NhanVien {
protected:
    int loai;
    string hoten;
    string ngaysinh;
public:
    long long luongcoban = 0;
    int getLoai();
    string getTen();
    virtual void Nhap();
    virtual long long getLuong() = 0;
    virtual void Xuat();
};

#endif
