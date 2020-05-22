#include "NhanVien.h"
#include <iostream>

using namespace std;

NhanVien::NhanVien() {

}

NhanVien::NhanVien(string newHoTen, string newNgaySinh, string newGioiTinh,
    bool newBanQuanLy, bool newNhanVienSanXuat, int newSanPham) {
    hoten = newHoTen;
    ngaysinh = newNgaySinh;
    gioitinh = newGioiTinh;
    banquanly = newBanQuanLy;
    nhanviensanxuat = newNhanVienSanXuat;
    sanpham = newSanPham;
}
