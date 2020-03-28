#include "PhanSo.h"

int main() {
	PhanSo a, b, c;
	cout << "- Nhap phan so thu nhat: " << endl;
	a.Nhap();
	cout << "- Nhap phan so thu hai: " << endl;
	b.Nhap();
	cout << "===============================" << endl;
	cout << "- Phan so thu nhat da rut gon: ";
	a.RutGon();
	cout << "- Phan so thu hai da rut gon: ";
	b.RutGon();
	cout << "- Tong hai phan so: ";
	c = a.CongPhanSo(b);
	c.RutGon();
	cout << "- Hieu hai phan so: ";
	c = a.TruPhanSo(b);
	c.RutGon();
	cout << "- Tich hai phan so: ";
	c = a.NhanPhanSo(b);
	c.RutGon();
	cout << "- Thuong hai phan so: ";
	c = a.ChiaPhanSo(b);
	c.RutGon();
	return 0;
}