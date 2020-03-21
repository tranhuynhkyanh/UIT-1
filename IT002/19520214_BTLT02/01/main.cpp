#include "phanso.h"

int main() {
	int sophanso;
	PHANSO PhanSo[100]; 
	do {
		system("cls");
		cout << "[=> Nhap so phan so: ";
		cin >> sophanso;
	} while (sophanso < 1);
	for (int i = 1; i <= sophanso; i++) {
		cout << "- Nhap phan so thu " << i << ": " << endl;
		NhapPhanSo(PhanSo[i]);
	}
	cout << "=================================" << endl;
	cout << "- Cac phan so da nhap la: " << endl;
	for (int i = 1; i <= sophanso; i++) {
		cout << "+ Phan so thu " << i << ": ";
		XuatPhanSo(PhanSo[i]);
	}
	return 0;
}