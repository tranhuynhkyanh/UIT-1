#include <bits/stdc++.h>

using namespace std;

#define pi 3.14

class Chai{
public:
    virtual void Nhap() = 0;
    virtual float getChaiVo() = 0;
    virtual float getLuongNuoc() = 0;
};

class ChaiHinhTru : public Chai{
protected:
    int chieuCao;
    int banKinhDay;
public:
    void Nhap(){
        cin >> chieuCao >> banKinhDay;
    }
    float getChaiVo(){
        return 2 * pi * banKinhDay * chieuCao;
    }
    float getLuongNuoc(){
        return 0.1 * chieuCao * pi * banKinhDay * banKinhDay  ;
    }
};

class ChaiHinhHop : public Chai{
protected:
    int chieuCao;
    int chieuDai;
    int chieuRong;
public:
    void Nhap(){
        cin >> chieuCao >> chieuDai >> chieuRong;
    }
    float getChaiVo(){
        float ketqua = 2 * chieuCao * chieuDai;
        ketqua += 2 * chieuCao * chieuRong;
        ketqua += 2 * chieuDai * chieuRong;
        return ketqua;
    }
    float getLuongNuoc(){
        return 0.1 * chieuDai * chieuRong * chieuCao;
    }
};

class ChaiHinhLapPhuong : public Chai{
protected:
    int doDaiCanh;
public:
    void Nhap(){
        cin >> doDaiCanh;
    }
    float getChaiVo(){
        return 6 * doDaiCanh * doDaiCanh;
    }
    float getLuongNuoc(){
        return 0.1 * doDaiCanh * doDaiCanh * doDaiCanh;
    }
};

int main(){
    Chai **_chai;
    int soLuong;
    cin >> soLuong;
    _chai = new Chai*[soLuong];
    float dientichchaivo = 0;
    float luongnuoc = 0;
    for(int i = 0; i < soLuong; i++){
        int loaiChai;
        cin >> loaiChai;
        if (loaiChai == 1) _chai[i] = new ChaiHinhTru;
        if (loaiChai == 2) _chai[i] = new ChaiHinhHop;
        if (loaiChai == 3) _chai[i] = new ChaiHinhLapPhuong;
        _chai[i]->Nhap();
        dientichchaivo += _chai[i]->getChaiVo();
        luongnuoc += _chai[i]->getLuongNuoc();
    }
    cout << "Dien tich chai vo: " << dientichchaivo << "\n";
    cout << "Luong nuoc tren mat dat: " << luongnuoc;
    return 0;
}
