#include <iostream>
#include <string>

using namespace std;

class NhanVien {
private:
    string hoten;
    string ngaysinh;
    string gioitinh;
    bool banquanly;
    bool nhanviensanxuat;
    int sanpham;
public:
    bool getBanQuanLy();
    bool getNhanVienSanXuat();
    int getSanPham();
    NhanVien& operator=(NhanVien& a);
    NhanVien(string newHoTen, string newNgaySinh, string newGioiTinh, bool newBanQuanLy, bool newNhanVienSanXuat, int newSanPham);
    friend istream& operator>>(istream& is, NhanVien& a) {
        is.ignore();
        getline(is, a.hoten);
        getline(is, a.ngaysinh);
        getline(is, a.gioitinh);
        is >> a.banquanly;
        is >> a.nhanviensanxuat;
        is >> a.sanpham;
        return is;
    }
    friend ostream& operator<<(ostream& os, NhanVien a) {
        os << a.hoten << "\t" << a.ngaysinh << "\t" << a.gioitinh << "\t\t";
        a.banquanly ? os << "TRUE\t" : os << "FALSE\t";
        os << "\t";
        a.nhanviensanxuat ? os << "TRUE\t" : os << "FALSE\t";
        os << "\t";
        os << a.sanpham << "\t";
        return os;
    }
};
