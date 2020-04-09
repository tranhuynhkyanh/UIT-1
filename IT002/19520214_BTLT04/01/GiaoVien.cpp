#include "GiaoVien.h"

GiaoVien::GiaoVien() {
	_HoTen = "";
	_Tuoi = 0;
	_SoNamCongTac = 0;
}

GiaoVien::GiaoVien(string newHoTen, NamSinh newNamSinh, int newTuoi, int newSoNamCongtac) {
	_HoTen = newHoTen;
	_NamSinh = newNamSinh;
	_Tuoi = newTuoi;
	_SoNamCongTac = newSoNamCongtac;
}

GiaoVien::GiaoVien(GiaoVien& gv) {
	_HoTen = gv._HoTen;
	_NamSinh = gv._NamSinh;
	_Tuoi = gv._Tuoi;
	_SoNamCongTac = gv._SoNamCongTac;
}

GiaoVien::~GiaoVien() {

}

string GiaoVien::getHoTen() {
	return _HoTen;
}

NamSinh GiaoVien::getNamSinh() {
	return _NamSinh;
}

int GiaoVien::getTuoi() {
	return _Tuoi;
}

int GiaoVien::getSoNamCongTac() {
	return _SoNamCongTac;
}

void GiaoVien::setHoTen(string newHoTen) {
	_HoTen = newHoTen;
}

void GiaoVien::setNamSinh(NamSinh newNamSinh) {
	_NamSinh = newNamSinh;
}

void GiaoVien::setTuoi(int newTuoi) {
	_Tuoi = newTuoi;
}

void GiaoVien::setSoNamCongTac(int newSoNamCongTac) {
	_SoNamCongTac = newSoNamCongTac;
}

bool GiaoVien::isSoNamCongTac() {
	if (_SoNamCongTac > 30) return true;
	return false;
}

void GiaoVien::cinHoTen() {
	getline(cin, _HoTen);
}

void GiaoVien::cinNamSinh() {
	_NamSinh.Nhap();
}

void GiaoVien::cinTuoi() {
	cin >> _Tuoi;
}

void GiaoVien::cinSoNamCongTac() {
	cin >> _SoNamCongTac;
}

int GiaoVien::getLuong() {
	if (isSoNamCongTac())
		return 5000000 * 2;
	else
		return 5000000;
}