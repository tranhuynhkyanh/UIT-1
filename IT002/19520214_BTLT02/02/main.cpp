#include "sophuc.h"

int main() {
	SOPHUC SoPhuc1, SoPhuc2;
	cout << "- Nhap so phuc thu 1:" << endl;
	NhapSoPhuc(SoPhuc1);
	cout << "- Nhap so phuc thu 2:" << endl;
	NhapSoPhuc(SoPhuc2);
	cout << "=============================" << endl;
	cout << "- So phuc vua nhap la: " << endl;
	cout << " + So phuc thu 1: ";
	XuatSoPhuc(SoPhuc1);
	cout << " + So phuc thu 2: ";
	XuatSoPhuc(SoPhuc2);
	cout << "- Tong hai so phuc la: ";
	XuatSoPhuc(CongSoPhuc(SoPhuc1, SoPhuc2));
	cout << "- Hieu hai so phuc la: ";
	XuatSoPhuc(TruSoPhuc(SoPhuc1, SoPhuc2));
	return 0;
}