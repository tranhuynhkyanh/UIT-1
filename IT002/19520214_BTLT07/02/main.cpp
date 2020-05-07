#include "NhanVien.h"
#include <iostream>
#include <vector>

using namespace std;

long long MucLuongCoBan, TongTienPhaiTra;
int SanPhamDinhMuc;

long long getLuong(NhanVien a) {
    long long _result = MucLuongCoBan;
    if (a.getBanQuanLy())
        _result += 500000;
    if (a.getNhanVienSanXuat() && a.getSanPham() - SanPhamDinhMuc > 0)
        _result += (a.getSanPham() - SanPhamDinhMuc) * 30000;
    return _result;
}

int main() {
    vector<NhanVien> DanhSach;
    DanhSach.push_back(NhanVien("Cao Hung Phu", "1/1/2000", "Nam", true, false, 0));
    DanhSach.push_back(NhanVien("Nguyen Van A", "1/1/1999", "Nam", false, true, 500));
    DanhSach.push_back(NhanVien("Nguyen Thi C", "1/1/1998", "Nu", false, true, 300));
    DanhSach.push_back(NhanVien("Truong Van B", "1/1/1996", "Nam", false, true, 200));
    DanhSach.push_back(NhanVien("Truong Thi E", "1/1/1996", "Nu", false, true, 200));
    DanhSach.push_back(NhanVien("Nguyen Thi D", "1/1/1996", "Nu", false, true, 400));
    cout << "================================================================================" << endl;
    cout << "[=> SO NHAN VIEN: " << DanhSach.size() << endl;
    cout << "[=> NHAP MUC LUONG CO BAN: ";
    cin >> MucLuongCoBan;
    cout << "[=> NHAP SAN PHAM DINH MUC: ";
    cin >> SanPhamDinhMuc;
    cout << "================================================================================" << endl;
    cout << "STT\tHO VA TEN\tNGAY SINH\tGIOI TINH\tBAN QUAN LY\tNHAN VIEN\tSAN PHAM\tLUONG" << endl;
    for (int i = 0; i < DanhSach.size(); i++) {
        cout << i + 1 << "\t" << DanhSach[i] << "\t" << getLuong(DanhSach[i]) << endl;
        TongTienPhaiTra += getLuong(DanhSach[i]);
    }
    cout << "================================================================================" << endl;
    cout << "[=> TONG TIEN CAN PHAI TRA: " << TongTienPhaiTra << endl;
    cout << "================================================================================" << endl;
    return 0;
}