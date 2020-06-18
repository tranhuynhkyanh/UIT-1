#include <bits/stdc++.h>

using namespace std;

class CPU {
protected:
    int loaiCPU;
    string maCPU;
    string tenCPU;
    string hangCPU;
    int coreCPU;
    float xungCPU;
    int giaCPU;
public:
    void Nhap(){
        cin >> maCPU;
    }
    void Xuat(){
        cout << "CPU: " << maCPU << " " << tenCPU << " " << hangCPU << " ";
        cout << coreCPU << " " << xungCPU << " " << giaCPU << "\n";
    }
    int getGia(){
        return giaCPU;
    }
};

class Alpha : public CPU {
public:
    Alpha(){
        CPU::loaiCPU = 1;
        CPU::tenCPU = "Alpha";
        CPU::hangCPU = "Black";
        CPU::coreCPU = 2;
        CPU::xungCPU = 1.8;
        CPU::giaCPU = 200;
    }
};

class Beta : public CPU {
public:
    Beta(){
        CPU::loaiCPU = 2;
        CPU::tenCPU = "Beta";
        CPU::hangCPU = "Black";
        CPU::coreCPU = 4;
        CPU::xungCPU = 2.46;
        CPU::giaCPU = 400;
    }
};

class Gamma : public CPU {
public:
    Gamma(){
        CPU::loaiCPU = 3;
        CPU::tenCPU = "Gramma";
        CPU::hangCPU = "While";
        CPU::coreCPU = 4;
        CPU::xungCPU = 2.6;
        CPU::giaCPU = 600;
    }
};

class ManHinh{
protected:
    int loaiManHinh;
    string maManHinh;
    string hangManHinh;
    string doPhanGiai;
    int giaManHinh;
public:
    void Nhap(){
        cin >> maManHinh;
        cin >> hangManHinh;
    }
    void Xuat(){
        cout << "Man hinh: " << maManHinh << " " << hangManHinh << " " << doPhanGiai << " ";
        cout << giaManHinh << "\n";
    }
    int getGia(){
        return giaManHinh;
    }
};

class HD : public ManHinh {
public:
    HD(string newMaManHinh, string newHangManHinh){
        ManHinh::maManHinh = newMaManHinh;
        ManHinh::hangManHinh = newHangManHinh;
        ManHinh::loaiManHinh = 1;
        ManHinh::doPhanGiai = "HD";
        ManHinh::giaManHinh = 200;
    }
};

class FHD : public ManHinh {
public:
    FHD(string newMaManHinh, string newHangManHinh){
        ManHinh::maManHinh = newMaManHinh;
        ManHinh::hangManHinh = newHangManHinh;
        ManHinh::loaiManHinh = 2;
        ManHinh::doPhanGiai = "FHD";
        ManHinh::giaManHinh = 500;
    }
};

class Vo {
protected:
    string loaiVo;
    string maVo;
    string hangVo;
    string mauVo;
    int giaVo;
public:
    int getGia(){
        return giaVo;
    }
    void Xuat(){
        cout << "Vo smartphone: " << maVo << " " << loaiVo << " ";
        cout << hangVo << " " << mauVo << " " << giaVo << "\n";
    }
};

class VoNhom : public Vo {
public:
    VoNhom(string newMaVo, int newMauVo){
        Vo::maVo = newMaVo;
        Vo::loaiVo = "Nhom";
        Vo::hangVo = "Black";
        Vo::giaVo = 400;
        if (newMauVo == 1){
            Vo::mauVo = "Do";
        } else {
            Vo::mauVo = "Den";
        }
    }
};


class VoNhua : public Vo {
public:
    VoNhua(string newMaVo, int newMauVo){
        Vo::maVo = newMaVo;
        Vo::loaiVo = "Nhua";
        Vo::hangVo = "White";
        Vo::giaVo = 200;
        if (newMauVo == 1){
            Vo::mauVo = "Do";
        } else if (newMauVo == 2){
            Vo::mauVo = "Den";
        } else {
            Vo::mauVo = "Xanh";
        }
    }
};

class SmartPhone{
protected:
    int loaiSmartPhone;
    string maSmartPhone;
    string dongSmartPhone;
    float heSoGia;
    float giaSmartPhone;
    CPU *thongSoCPU;
    ManHinh *thongSoManHinh;
    Vo *thongSoVo;
public:
    void Nhap(){
        int loaiCPU;
        cin >> SmartPhone::maSmartPhone;
        cin >> loaiCPU;
        if (loaiCPU == 1) thongSoCPU = new Alpha;
        if (loaiCPU == 2) thongSoCPU = new Beta;
        if (loaiCPU == 3) thongSoCPU = new Gamma;
        thongSoCPU->Nhap();
        int loaiManHinh;
        string maManHinh, hangManHinh;
        cin >> maManHinh;
        cin >> hangManHinh;
        cin >> loaiManHinh;
        if (loaiManHinh == 1) thongSoManHinh = new HD(maManHinh, hangManHinh);
        if (loaiManHinh == 2) thongSoManHinh = new FHD(maManHinh, hangManHinh);
        int loaiVo, mauVo;
        string maVo;
        cin >> loaiVo;
        cin >> maVo;
        cin >> mauVo;
        if (loaiVo == 1) thongSoVo = new VoNhom(maVo, mauVo);
        if (loaiVo == 2) thongSoVo = new VoNhua(maVo, mauVo);
        giaSmartPhone = thongSoCPU->getGia() + thongSoManHinh->getGia() + thongSoVo->getGia();
        giaSmartPhone *= heSoGia;
    }
    void Xuat(){
        cout << "Smartphone: " << maSmartPhone << " " << dongSmartPhone << " " << giaSmartPhone << "\n";
        thongSoCPU->Xuat();
        thongSoManHinh->Xuat();
        thongSoVo->Xuat();
    }
};

class Venus : public SmartPhone{
public:
    Venus(){
        SmartPhone::loaiSmartPhone = 1;
        SmartPhone::heSoGia = 1.3;
        SmartPhone::dongSmartPhone = "Venus";
    }
};

class Mars : public SmartPhone{
public:
    Mars(){
        SmartPhone::loaiSmartPhone = 2;
        SmartPhone::heSoGia = 1.5;
        SmartPhone::dongSmartPhone = "Mars";
    }
};

class Jupiter : public SmartPhone{
public:
    Jupiter(){
        SmartPhone::loaiSmartPhone = 3;
        SmartPhone::heSoGia = 1.8;
        SmartPhone::dongSmartPhone = "Jupiter";
    }
};

int main(){
    int soLuong;
    SmartPhone **sm;
    cin >> soLuong;
    sm = new SmartPhone*[soLuong];
    for(int i = 0; i < soLuong; i++){
        int dongSmartPhone;
        cin >> dongSmartPhone;
        if (dongSmartPhone == 1) sm[i] = new Venus;
        if (dongSmartPhone == 2) sm[i] = new Mars;
        if (dongSmartPhone == 3) sm[i] = new Jupiter;
        sm[i]->Nhap();
    }
    for (int i = 0; i < soLuong; i++){
        sm[i]->Xuat();
    }
    return 0;
}
