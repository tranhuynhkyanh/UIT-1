#include "SoPhuc.h"

SoPhuc::SoPhuc() {
    this->fThuc = 0;
    this->fAo = 0;
}

SoPhuc::SoPhuc(float newThuc) {
    this->fThuc = newThuc;
    this->fAo = 0;
}

SoPhuc::SoPhuc(SoPhuc& newSoPhuc) {
    this->fThuc = newSoPhuc.fThuc;
    this->fAo = newSoPhuc.fAo;
}

SoPhuc::~SoPhuc() {
    this->fThuc = 0;
    this->fAo = 0;
}

void SoPhuc::Nhap() {
    cout << " + Nhap phan thuc: ";
    cin >> this->fThuc;
    cout << " + Nhap phan ao: ";
    cin >> this->fAo;
}

void SoPhuc::Xuat() {
    if (this->fThuc == 0 && this->fAo == 0) {
        cout << "0" << endl;
    }
    else if (this->fThuc == 0) {
        cout << this->fAo << "i" << endl;
    }
    else if (this->fAo == 0) {
        cout << this->fThuc << endl;
    }
    else {
        if (this->fAo < 0)
            cout << this->fThuc << " - " << abs(this->fAo) << "i" << endl;
        else
            cout << this->fThuc << " + " << abs(this->fAo) << "i" << endl;
    }
}

SoPhuc operator+(SoPhuc a, SoPhuc b) {
    SoPhuc _result;
    _result.fThuc = a.fThuc + b.fThuc;
    _result.fAo = a.fAo + b.fAo;
    return _result;
}

SoPhuc operator-(SoPhuc a, SoPhuc b) {
    SoPhuc _result;
    _result.fThuc = a.fThuc - b.fThuc;
    _result.fAo = a.fAo - b.fAo;
    return _result;
}

SoPhuc operator+(SoPhuc a, int b) {
    SoPhuc _result;
    _result.fThuc = a.fThuc + b;
    _result.fAo = a.fAo;
    return _result;
}

SoPhuc operator-(SoPhuc a, int b) {
    SoPhuc _result;
    _result.fThuc = a.fThuc - b;
    _result.fAo = a.fAo;
    return _result;
}

SoPhuc& SoPhuc::operator=(SoPhuc& a) {
    this->fAo = a.fAo;
    this->fThuc = a.fThuc;
    return *this;
}