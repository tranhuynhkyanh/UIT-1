#pragma once

#include "NguoiChoi.h"
#include <iostream>

using namespace std;

class TreEm : public NguoiChoi {
protected:
    bool truonga;
public:
    void Nhap();
    bool getTruongA();
    void Xuat();
};
