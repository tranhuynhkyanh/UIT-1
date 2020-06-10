#include "TreEm.h"
#include <iostream>

void TreEm::Nhap() {
    cout << " - Co hoc o truong A (0 = False, 1 = True): ";
    cin >> truonga;
}

bool TreEm::getTruongA() {
    return truonga;
}

void TreEm::Xuat() {
    NguoiChoi::Xuat();
    cout << " - Hoc o truong A: ";
    truonga ? cout << "Co" : cout << "Khong";
    cout << "\n";
}
