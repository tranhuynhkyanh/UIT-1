#include <iostream>

using namespace std;

class SoPhuc {
protected:
	float fThuc;
	float fAo;
public:
	SoPhuc();
	SoPhuc(float newThuc);
	SoPhuc(SoPhuc& newSoPhuc);
	~SoPhuc();
	void Nhap();
	void Xuat();
	void TinhTong(SoPhuc a);
};
