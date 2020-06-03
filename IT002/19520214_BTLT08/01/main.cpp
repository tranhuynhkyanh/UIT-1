#include "SoAo.h"

int main() {
    SoPhuc a;
    cout << "[=> Nhap so phuc a: " << endl;
    a.Nhap();
    cout << "[=> So phuc a: ";
    a.Xuat();
    SoAo b;
    cout << "[=> Nhap so ao: " << endl;
    b.Nhap();
    cout << "[=> So ao b: ";
    b.Xuat();
    cout << "[=> Tong a va b la: ";
    a.TinhTong(b);
    return 0;
}

