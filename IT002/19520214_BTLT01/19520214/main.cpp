#include "phanso.h"

int ChucNang;

PHANSO PhanSo, PhanSo1, PhanSo2;

int main() {
    do {
        system("cls");
        HienMenu();
    } while (ChucNang < 1 || ChucNang > 5);
    switch (ChucNang)
    {
        case 1:
        {
            cout << "===============CONG HAI PHAN SO===============" << endl;
            NhapPhanSo();
            CongPhanSo(PhanSo1, PhanSo2);
            break;
        }
        case 2:
        {
            cout << "===============TRU HAI PHAN SO===============" << endl;
            NhapPhanSo();
            TruPhanSo(PhanSo1, PhanSo2);
            break;
        }
        case 3:
        {
            cout << "===============NHAN HAI PHAN SO===============" << endl;
            NhapPhanSo();
            NhanPhanSo(PhanSo1, PhanSo2);
            break;
        }
        case 4:
        {
            cout << "===============CHIA HAI PHAN SO===============" << endl;
            NhapPhanSo();
            ChiaPhanSo(PhanSo1, PhanSo2);
            break;
        }
        case 5:
        {
            cout << "===============RUT GON PHAN SO===============" << endl;
            cout << "- Nhap phan so can rut gon: " << endl;
            cout << " + Tu so: ";
            cin >> PhanSo.TuSo;
            cout << " + Mau so: ";
            cin >> PhanSo.MauSo;
            RutGonPhanSoVaInKetQua(PhanSo);
            break;
        }
    }
    return 0;
}

void HienMenu() {
    cout << "====================== MENU ======================" << endl;
    cout << "1.  Cong hai phan so." << endl;
    cout << "2.  Tru hai phan so." << endl;
    cout << "3.  Nhan hai phan so." << endl;
    cout << "4.  Chia hai phan so." << endl;
    cout << "5.  Rut gon phan so." << endl;
    cout << "==================================================" << endl;
    cout << "[=> Nhap chuc nang: ";
    cin >> ChucNang;
    cout << "==================================================\n\n";
}

void NhapPhanSo() {
    do {
        cout << "- Nhap phan so thu nhat:" << endl;
        cout << " + Tu so: ";
        cin >> PhanSo1.TuSo;
        cout << " + Mau so: ";
        cin >> PhanSo1.MauSo;
        cout << "- Nhap phan so thu hai:" << endl;
        cout << " + Tu so: ";
        cin >> PhanSo2.TuSo;
        cout << " + Mau so: ";
        cin >> PhanSo2.MauSo;
    } while (PhanSo1.TuSo == 0 || PhanSo1.MauSo == 0 || PhanSo2.TuSo == 0 || PhanSo2.MauSo == 0);
}
