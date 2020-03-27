#include <iostream>
#include <cmath>

using namespace std;

class PhanSo{
private:
    int tuSo;
    int mauSo;
public:
    void Nhap();
    void Xuat();
    void CongPhanSo(PhanSo a)
    {
        tuSo = tuSo*a.mauSo + mauSo*a.tuSo;
        mauSo = mauSo*a.mauSo;
    }
    void TruPhanSo(PhanSo a)
    {
        tuSo = tuSo*a.mauSo - mauSo*a.tuSo;
        mauSo = mauSo*a.mauSo;
    }
    void NhanPhanSo(PhanSo a)
    {
        tuSo = tuSo*a.tuSo;
        mauSo = mauSo*a.mauSo;
    }
    void ChiaPhanSo(PhanSo a)
    {
        tuSo = tuSo*a.mauSo;
        mauSo = mauSo*a.tuSo;
    }
};

void PhanSo::Nhap(){
    cin >> tuSo;
    do{
        cin >> mauSo;
    } while (mauSo == 0);
}

int UCLN(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void PhanSo::Xuat(){
    int UocChung = UCLN(tuSo, mauSo);
    bool xetDauTu;
    bool xetDauMau;
    if (tuSo/UocChung < 0) xetDauTu = true;
        else xetDauTu = false;
    if (mauSo/UocChung < 0) xetDauMau = true;
        else xetDauMau = false;
    if (xetDauTu != xetDauMau) cout << "-";
    cout << abs(tuSo/UocChung) << "/" << abs(mauSo/UocChung) << endl;
}


int main(){
    PhanSo a,b,c;
    a.Nhap();
    b.Nhap();
    //Cong
    c = a;
    c.CongPhanSo(b);
    c.Xuat();
    //Tru
    c = a;
    c.TruPhanSo(b);
    c.Xuat();
    //Nhan
    c = a;
    c.NhanPhanSo(b);
    c.Xuat();
    //Chia
    c = a;
    c.ChiaPhanSo(b);
    c.Xuat();
    return 0;
}
