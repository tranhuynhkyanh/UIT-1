#include "CongTy.h"
#include <iostream>

using namespace std;

void CongTy::setMucluongcoban() {
    cout << "[=> Nhap muc luong co ban: ";
    cin >> mucluongcoban;
}

void CongTy::setSanphamdinhmuc() {
    cout << "[=> Nhap san pham dinh muc: ";
    cin >> sanphamdinhmuc;
}

void CongTy::addNhanVien(NhanVien b) {
    nhanvien.push_back(b);
};

istream& operator >> (istream& is, CongTy& a) {
    cout << "[=> Nhap so luong nhan vien: ";
    is >> a.soluongnhanvien;
    a.nhanvien.resize(a.soluongnhanvien);
    for (int i = 0; i < a.soluongnhanvien; i++) {
        cout << " - Nhap thong tin nhan vien " << i + 1 << ": \n";
        is >> a.nhanvien[i];
    }
    cout << "[=> Nhap san pham dinh muc: ";
    is >> a.sanphamdinhmuc;
    cout << "[=> Nhap muc luong co ban: ";
    is >> a.mucluongcoban;
    return is;
}

long long CongTy::getLuongNhanVien(NhanVien a) {
    long long result = mucluongcoban;
    if (a.banquanly) result += 500000;
    if (a.nhanviensanxuat && a.sanpham > sanphamdinhmuc)
        result += (a.sanpham - sanphamdinhmuc) * 30000;
    return result;
}

ostream& operator << (ostream& os, CongTy a) {
    os << "================================================================================================================\n";
    os << "[=> San pham dinh muc: ";
    os << a.sanphamdinhmuc << "\n";
    os << "[=> Muc luong co ban: ";
    os << a.mucluongcoban << "\n";
    os << "[=> So luong nhan vien: ";
    os << a.nhanvien.size() << "\n";
    os << "================================================================================================================\n";
    long long tienluongnhanvien = 0;
    for (int i = 0; i < a.nhanvien.size(); i++) {
        tienluongnhanvien = a.getLuongNhanVien(a.nhanvien[i]);
        os << i + 1 << "/\t" << a.nhanvien[i] << "\t" << tienluongnhanvien << "\n";
        a.tongtienluongthang += tienluongnhanvien;
    }
    a.tongtienluongnam = a.tongtienluongthang * 12;
    os << "================================================================================================================\n";
    os << "[=> Tong tien luong cong ty tra trong 1 thang: " << a.tongtienluongthang << "\n";
    os << "[=> Tong tien luong cong ty tra trong 1 nam: " << a.tongtienluongnam << "\n";
    os << "================================================================================================================\n";
    return os;
}
