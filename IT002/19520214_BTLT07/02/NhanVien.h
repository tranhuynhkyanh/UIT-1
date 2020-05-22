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
    NhanVien();
    NhanVien(string newHoTen, string newNgaySinh, string newGioiTinh, bool newBanQuanLy, bool newNhanVienSanXuat, int newSanPham);
    friend istream& operator>>(istream& is, NhanVien& a) {
        is.ignore();
        cout << "  + Nhap ho va ten: ";
        getline(is, a.hoten);
        cout << "  + Nhap ngay thang nam sinh: ";
        getline(is, a.ngaysinh);
        cout << "  + Nhap gioi tinh: ";
        getline(is, a.gioitinh);
        cout << "  + La ban quan ly (0 hoac 1): ";
        is >> a.banquanly;
        cout << "  + La nhan vien san xuat (0 hoac 1): ";
        is >> a.nhanviensanxuat;
        cout << "  + Nhap so san pham: ";
        is >> a.sanpham;
        return is;
    }
    friend ostream& operator<<(ostream& os, NhanVien a) {
        os << a.hoten << "\t" << a.ngaysinh << "\t" << a.gioitinh << "\t";
        a.banquanly ? os << "TRUE\t" : os << "FALSE\t";
        a.nhanviensanxuat ? os << "TRUE\t" : os << "FALSE\t";
        os << a.sanpham;
        return os;
    }
    friend class CongTy;
};
