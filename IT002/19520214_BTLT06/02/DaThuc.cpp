#include "DaThuc.h"
#include <iostream>

using namespace std;

void DaThuc::Nhap() {
	int nSoHang, SoMu[101], HeSo[101];
	cout << "- Nhap so phan tu: ";
	cin >> nSoHang;
	for (int i = 0; i < nSoHang; i++) {
		cout << " + Nhap he so phan tu " << i + 1 << ": ";
		cin >> HeSo[i];
		cout << " + Nhap so mu phan tu " << i + 1 << ": ";
		cin >> SoMu[i];
		if (SoMu[i] > BacCaoNhat)
			BacCaoNhat = SoMu[i];
	}
	for (int i = 0; i < BacCaoNhat + 1; i++) {
		HeSoDaThuc[i] = 0;
		SoMuDaThuc[i] = BacCaoNhat - i;
	}
	for (int i = 0; i < BacCaoNhat + 1; i++) {
		for (int j = 0; j < nSoHang; j++) {
			if (SoMuDaThuc[i] == SoMu[j])
				HeSoDaThuc[i] += HeSo[j];
		}
	}
}

void DaThuc::Xuat() {
	bool print_first = true;
	for (int i = 0; i < BacCaoNhat + 1; i++) {
		if (HeSoDaThuc[i] != 0) {
			if (print_first == true) {
				cout << HeSoDaThuc[i];
				print_first = false;
			} else {
				if (HeSoDaThuc[i] > 0)
					cout << "+ " << abs(HeSoDaThuc[i]);
				else
					cout << "- " << abs(HeSoDaThuc[i]);
			}
			if (SoMuDaThuc[i] != 0)
				cout << "x^" << SoMuDaThuc[i] << " ";
		}
	}
	cout << endl;
}

bool operator!=(DaThuc a, DaThuc b) {
	if (a.BacCaoNhat != b.BacCaoNhat)
		return true;
	for (int i = 0; i < a.BacCaoNhat; i++) {
		if (a.HeSoDaThuc[i] != b.HeSoDaThuc[i])
			return true;
	}
	return false;
}

DaThuc operator+(DaThuc a, DaThuc b) {
	DaThuc _result;
	_result.BacCaoNhat = a.BacCaoNhat;
	if (b.BacCaoNhat > _result.BacCaoNhat)
        _result.BacCaoNhat = b.BacCaoNhat;
    for (int i = 0; i < _result.BacCaoNhat + 1; i++) {
		_result.HeSoDaThuc[i] = 0;
		_result.SoMuDaThuc[i] = _result.BacCaoNhat - i;
	}
    for (int i = 0; i < _result.BacCaoNhat; i++){
        for (int j = 0; j < a.BacCaoNhat; j++){
            if (a.SoMuDaThuc[j] == _result.SoMuDaThuc[i])
                _result.HeSoDaThuc[i] += a.HeSoDaThuc[j];
        }
        for (int j = 0; j < b.BacCaoNhat; j++){
            if (b.SoMuDaThuc[j] == _result.SoMuDaThuc[i])
                _result.HeSoDaThuc[i] += b.HeSoDaThuc[j];
        }
    }
	return _result;
}

DaThuc operator-(DaThuc a, DaThuc b) {
	DaThuc _result;
	_result.BacCaoNhat = a.BacCaoNhat;
	if (b.BacCaoNhat > _result.BacCaoNhat)
        _result.BacCaoNhat = b.BacCaoNhat;
    for (int i = 0; i < _result.BacCaoNhat + 1; i++) {
		_result.HeSoDaThuc[i] = 0;
		_result.SoMuDaThuc[i] = _result.BacCaoNhat - i;
	}
    for (int i = 0; i < _result.BacCaoNhat; i++){
        for (int j = 0; j < a.BacCaoNhat; j++){
            if (a.SoMuDaThuc[j] == _result.SoMuDaThuc[i])
                _result.HeSoDaThuc[i] -= a.HeSoDaThuc[j];
        }
        for (int j = 0; j < b.BacCaoNhat; j++){
            if (b.SoMuDaThuc[j] == _result.SoMuDaThuc[i])
                _result.HeSoDaThuc[i] -= b.HeSoDaThuc[j];
        }
    }
	return _result;
}

DaThuc operator+(DaThuc a, int b) {
	DaThuc _result = a;
	_result.HeSoDaThuc[_result.BacCaoNhat] += b;
	return _result;
}

DaThuc operator-(DaThuc a, int b) {
	DaThuc _result = a;
	_result.HeSoDaThuc[_result.BacCaoNhat] -= b;
	return _result;
}



