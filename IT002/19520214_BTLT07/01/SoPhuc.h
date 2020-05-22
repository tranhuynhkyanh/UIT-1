#include <iostream>

using namespace std;

class SoPhuc {
private:
	float fThuc;
	float fAo;
public:
	SoPhuc();
	SoPhuc(float newThuc);
	SoPhuc(SoPhuc& newSoPhuc);
	~SoPhuc();
	void Nhap();
	void Xuat();
	friend SoPhuc operator+(SoPhuc a, SoPhuc b);
	friend SoPhuc operator-(SoPhuc a, SoPhuc b);
	friend SoPhuc operator+(SoPhuc a, int b);
	friend SoPhuc operator-(SoPhuc a, int b);
	SoPhuc& operator=(SoPhuc& a);
	friend istream& operator>>(istream& is, SoPhuc& a) {
		cout << "- Nhap phan thuc: ";
		is >> a.fThuc;
		cout << "- Nhap phan ao: ";
		is >> a.fAo;
		return is;
	}
	friend ostream& operator<<(ostream& os, SoPhuc a) {
		if (a.fThuc == 0 && a.fAo == 0) {
			os << "0" << "\n";
		}
		else if (a.fThuc == 0) {
			os << a.fAo << "i" << "\n";
		}
		else if (a.fAo == 0) {
			os << a.fThuc << "\n";
		}
		else {
			if (a.fAo < 0)
				os << a.fThuc << " - " << abs(a.fAo) << "i" << "\n";
			else
				os << a.fThuc << " + " << abs(a.fAo) << "i" << "\n";
		}
		return os;
	}
	SoPhuc& operator++(int) {
		this->fThuc += 1;
		return *this;
	}
	SoPhuc& operator++() {
		this->fThuc += 1;
		return *this;
	}
	SoPhuc& operator--(int) {
		this->fThuc -= 1;
		return *this;
	}
	SoPhuc& operator--() {
		this->fThuc -= 1;
		return *this;
	}
};