#include "NhanVien.h"
#include <iostream>
#include <string>

using namespace std;

NhanVien::NhanVien(string newHoTen, string newNgaySinh, string newGioiTinh,
    bool newBanQuanLy, bool newNhanVienSanXuat, int newSanPham) {
    hoten = newHoTen;
    ngaysinh = newNgaySinh;
    gioitinh = newGioiTinh;
    banquanly = newBanQuanLy;
    nhanviensanxuat = newNhanVienSanXuat;
    sanpham = newSanPham;
}

bool NhanVien::getBanQuanLy() {
    return banquanly;
}
bool NhanVien::getNhanVienSanXuat() {
    return nhanviensanxuat;
}
int NhanVien::getSanPham() {
    return sanpham;
}

NhanVien& NhanVien::operator=(NhanVien& a) {
    hoten = a.hoten;
    ngaysinh = a.ngaysinh;
    gioitinh = a.gioitinh;
    banquanly = a.banquanly;
    nhanviensanxuat = a.nhanviensanxuat;
    sanpham = a.sanpham;
    return *this;
}