#include "Xe.h"
#include "BanhXe.h"
#include <iostream>

BanhXe banhxe;

void Xe::Nhap(){
	cout << "- Nhap ten xe: ";
	cin >> this->TenXe;
	cout << "- Nhap ten thuong hieu: ";
	cin >> this->TenThuongHieu;
	cout << "- Nhap nam san xuat: ";
	cin >> this->NamSanXuat;
	cout << "- Nhap so cho ngoi: ";
	cin >> this->SoChoNgoi;
	cout << "- Nhap ma luc: ";
	cin >> this->MaLuc; 
	cout << "- Nhap thong so banh xe: " << endl;
	banhxe.Nhap();
}

void Xe::Xuat() {
	cout << "=========================" << endl;
	cout << "[=> Thong so xe: " << endl;
	cout << "- Ten xe: " << this->TenXe << endl;
	cout << "- Nhap ten thuong hieu: " << this->TenThuongHieu << endl;
	cout << "- Nhap nam san xuat: " << this->NamSanXuat << endl;
	cout << "- Nhap so cho ngoi: " << this->SoChoNgoi << endl;
	cout << "- Nhap ma luc: " << this->MaLuc << endl;
	cout << "- Thong so banh xe: " << endl;
	banhxe.Xuat();
}