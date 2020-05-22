#include "NhanVien.h"
#include <iostream>
#include <vector>

using namespace std;

class CongTy {
private:
    int soluongnhanvien;
    vector<NhanVien> nhanvien;
    int sanphamdinhmuc;
    long long mucluongcoban;
    long long tongtienluongthang = 0;
    long long tongtienluongnam = 0;
public:
    void setMucluongcoban();
    void setSanphamdinhmuc();
    void addNhanVien(NhanVien b);
    friend istream& operator >> (istream& is, CongTy& a);
    long long getLuongNhanVien(NhanVien a);
    friend ostream& operator << (ostream& os, CongTy a);
};
