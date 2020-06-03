#include "DaGiac.h"

void DaGiac::Nhap() {
    cout << "- Nhap so dinh: ";
    cin >> this->n;
    this->x = new float[n];
    this->y = new float[n];
    for (int i = 0; i < n; i++) {
        cout << "- Nhap dinh " << i + 1 << ": " << endl;
        cout << " + Nhap toa do x: ";
        cin >> this->x[i];
        cout << " + Nhap toa do y: ";
        cin >> this->y[i];
    }
}

void DaGiac::Xuat() {
    cout << "- So dinh da giac: " << this->n << endl;
    cout << "- Toa do cac dinh: " << endl;
    for (int i = 0; i < this->n; i++) {
        cout << " + Dinh thu " << i + 1 << ": (" << x[i] << "," << y[i] << ")" << endl;
    }
}
