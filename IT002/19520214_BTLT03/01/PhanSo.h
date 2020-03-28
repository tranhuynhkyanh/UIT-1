#include <iostream>

using namespace std;

class PhanSo {
private:
    int tuSo;
    int mauSo;
public:
    void Nhap();
    void RutGon();
    PhanSo CongPhanSo(PhanSo a);
    PhanSo TruPhanSo(PhanSo a);
    PhanSo NhanPhanSo(PhanSo a);
    PhanSo ChiaPhanSo(PhanSo a);
};

