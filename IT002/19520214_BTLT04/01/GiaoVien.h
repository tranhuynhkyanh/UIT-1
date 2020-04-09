#include "NamSinh.h"
#include <iostream>
#include <string>

using namespace std;

class GiaoVien{
private:
	string _HoTen;
	NamSinh _NamSinh;
	int _Tuoi;
	int _SoNamCongTac;
public:
	//Init
	GiaoVien();
	GiaoVien(string newHoTen, NamSinh newNamSinh, int newTuoi, int newSoNamCongtac);
	GiaoVien(GiaoVien& gv);
	~GiaoVien();
	//Get
	string getHoTen();
	NamSinh getNamSinh();
	int getTuoi();
	int getSoNamCongTac();
	int getLuong();
	//Set
	void setHoTen(string newHoTen);
	void setNamSinh(NamSinh newNamSinh);
	void setTuoi(int newTuoi);
	void setSoNamCongTac(int newNamCongTac);
	//Check
	bool isSoNamCongTac();
	//Cin
	void cinHoTen();
	void cinNamSinh();
	void cinTuoi();
	void cinSoNamCongTac();
};

