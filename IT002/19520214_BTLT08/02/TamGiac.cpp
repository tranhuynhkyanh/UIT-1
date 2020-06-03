#include "TamGiac.h"

void TamGiac::Nhap() {
    DaGiac::n = 3;
    cout << "- Nhap toa do cac dinh cua tam giac: " << endl;
    DaGiac::x = new float[n];
    DaGiac::y = new float[n];
    for (int i = 0; i < DaGiac::n; i++) {
        cout << "- Nhap dinh " << i + 1 << ": " << endl;
        cout << " + Nhap toa do x: ";
        cin >> DaGiac::x[i];
        cout << " + Nhap toa do y: ";
        cin >> DaGiac::y[i];
    }
}

void TamGiac::Xuat() {
    DaGiac::Xuat();
}
