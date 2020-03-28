#include "BanhXe.h"
#include <iostream>

using namespace std;

void BanhXe::Nhap() {
	cout << " + Ten banh xe: ";
	cin >> this->TenBanhXe;
	cout << " + Ten thuong hieu: ";
	cin >> this->TenThuongHieu;
	cout << " + Chat lieu banh xe: ";
	cin >> this->ChatLieuBanhXe;
	cout << " + Chieu rong banh xe: ";
	cin >> this->ChieuRongBanhXe;
	cout << " + Duong kinh banh xe: ";
	cin >> this->DuongKinhBanhXe;
	cout << " + Tai trong cho phep banh xe: ";
	cin >> this->TaiTrongChoPhep;
	cout << " + Toc do cho phep banh xe: ";
	cin >> this->TocDoChoPhep;
	cout << " + Chi so chiu nhiet banh xe: ";
	cin >> this->ChiSoChiuNhiet;
	cout << " + Ap suat banh xe: ";
	cin >> this->ApSuatBanhXe;
}

void BanhXe::Xuat() {
	cout << " + Ten banh xe: " << this->TenBanhXe << endl;
	cout << " + Ten thuong hieu: " << this->TenThuongHieu << endl;
	cout << " + Chat lieu banh xe: " << this->ChatLieuBanhXe << endl;
	cout << " + Chieu rong banh xe: " << this->ChieuRongBanhXe << endl;
	cout << " + Duong kinh banh xe: " << this->DuongKinhBanhXe << endl;
	cout << " + Tai trong cho phep banh xe: " << this->TaiTrongChoPhep << endl;
	cout << " + Toc do cho phep banh xe: " << this->TocDoChoPhep << endl;
	cout << " + Chi so chiu nhiet banh xe: " << this->ChiSoChiuNhiet << endl;
	cout << " + Ap suat banh xe: " << this->ApSuatBanhXe << endl;
}