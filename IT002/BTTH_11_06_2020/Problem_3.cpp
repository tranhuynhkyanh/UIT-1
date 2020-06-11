#include <bits/stdc++.h>

using namespace std;

class GiaSuc{
protected:
    int soLuong;
    string tenGiaSuc;
    string tiengKeu;
    int soSua;
public:
    void XuatTiengKeu(){
        for(int i = 0; i < soLuong - 1; i++){
            cout << tiengKeu << ",";
        }
        cout << tiengKeu;
    }
    void XuatSoSua(int soLuot){
        cout << tenGiaSuc << ": " << (soLuot * soLuong * soSua) << "\n";
    }
};

class Bo : public GiaSuc{
protected:
    int soLuong;
public:
    void Nhap(){
        cin >> GiaSuc::soLuong;
        GiaSuc::tenGiaSuc = "Bo";
        GiaSuc::tiengKeu = "Booo";
        GiaSuc::soSua = 10;
    }
    void XuatTiengKeu(){
        GiaSuc::XuatTiengKeu();
    }
    void XuatSoSua(int soLuot){
        GiaSuc::XuatSoSua(soLuot);
    }
};

class Cuu : public GiaSuc{
public:
    void Nhap(){
        cin >> GiaSuc::soLuong;
        GiaSuc::tenGiaSuc = "Cuu";
        GiaSuc::tiengKeu = "Beee";
        GiaSuc::soSua = 5;
    }
    void XuatTiengKeu(){
        GiaSuc::XuatTiengKeu();
    }
    void XuatSoSua(int soLuot){
        GiaSuc::XuatSoSua(soLuot);
    }
};

class De : public GiaSuc{
public:
    void Nhap(){
        cin >> GiaSuc::soLuong;
        GiaSuc::tenGiaSuc = "De";
        GiaSuc::tiengKeu = "Eeee";
        GiaSuc::soSua = 8;
    }
    void XuatTiengKeu(){
        GiaSuc::XuatTiengKeu();
    }
    void XuatSoSua(int soLuot){
        GiaSuc::XuatSoSua(soLuot);
    }
};


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int soLuot;
    Bo a; Cuu b; De c;
    a.Nhap(); b.Nhap(); c.Nhap();
    cin >> soLuot;
    a.XuatTiengKeu(); cout << ",";
    b.XuatTiengKeu(); cout << ",";
    c.XuatTiengKeu(); cout << "\n";
    a.XuatSoSua(soLuot);
    b.XuatSoSua(soLuot);
    c.XuatSoSua(soLuot);
    return 0;
}
