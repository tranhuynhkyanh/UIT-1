#include "QuanLy.h"
#include <iostream>

using namespace std;


void QuanLy::Nhap() {
    cout << "[=> Nhap so luong nguoi choi: ";
    cin >> soluong;
    arr = new NguoiChoi * [soluong];
    NguoiChoi a;
    for (int i = 0; i < soluong; i++) {
        cout << "-> Nhap nguoi choi " << i + 1 << ": \n";
        a.Nhap();
        arr[i] = new NguoiChoi(a);
        if (a.getTuoi() < 10 && a.getChieuCao() < 130) {
            ((TreEm*)arr[i])->Nhap();
        }
        else {
            ((NguoiLon*)arr[i])->Nhap();
        }
    }
}

double QuanLy::tinhTien(NguoiChoi* a) {
    double result = a->getSoTroChoi() * 100000;
    if (a->getTuoi() < 10 && a->getChieuCao() < 130) {
        if (((TreEm*)a)->getTruongA())
            return result * 0.3;
        return result * 0.5;
    }
    return result;
}

void QuanLy::Xuat() {
    double maxTongTien = 0;
    int minChieuCao = 130;
    int _min = 0, _max = 0;
    cout << "[=> Danh sach nguoi choi: " << "\n";
    cout << "STT\tHo Ten\t\t\tTuoi\tChieu cao\tSo tro choi\tTong tien\n";
    for (int i = 0; i < soluong; i++) {
        cout << i + 1 << "\t";
        cout << arr[i]->getHoTen() << "\t\t";
        cout << arr[i]->getTuoi() << "\t";
        cout << arr[i]->getChieuCao() << "\t\t";
        cout << arr[i]->getSoTroChoi() << "\t\t";
        cout << (long long)tinhTien(arr[i]) << "\n";
        if (arr[i]->getTuoi() < 10 && arr[i]->getChieuCao() < 130) {
            if (arr[i]->getChieuCao() < minChieuCao) {
                minChieuCao = arr[i]->getChieuCao();
                _min = i;
            }
        }
        if (tinhTien(arr[i]) > maxTongTien) {
            maxTongTien = tinhTien(arr[i]);
            _max = i;
        }
    }
    cout << "[=> Nguoi choi la tre em lun nhat: " << "\n";
    ((TreEm*)arr[_min])->Xuat();
    cout << "[=> Nguoi chi tien nhieu nhat: " << "\n";
    if (arr[_max]->getTuoi() < 10 && arr[_max]->getChieuCao() < 130) {
        ((TreEm*)arr[_max])->Xuat();
    }
    else {
        ((NguoiLon*)arr[_max])->Xuat();
    }
}
