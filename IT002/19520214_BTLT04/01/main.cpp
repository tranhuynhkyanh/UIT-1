#include "GiaoVien.h"

using namespace std;

int main() {
	GiaoVien a;
	GiaoVien b("Nguyen Van A", NamSinh(10,10,1960), 60, 30);
	GiaoVien c(b.getHoTen(), b.getNamSinh(), b.getTuoi(), b.getSoNamCongTac());
	GiaoVien d(c);
	//Nhap thong tin giao vien a
	cout << "- Nhap ho ten: ";
	a.cinHoTen();
	cout << "- Nhap ngay thang nam sinh: " << endl;
	a.cinNamSinh();
	cout << "- Nhap tuoi: ";
	a.cinTuoi();
	cout << "- Nhap so nam cong tac: ";
	a.cinSoNamCongTac();
	cout << "=> Luong cua giao vien " << a.getHoTen() << ": " << b.getLuong();
	return 0;
}