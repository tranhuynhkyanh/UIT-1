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
        int newSoLuong = soLuong;
        int soLuongThuc = 0;
        int soSuaThuc = 0;
        if (tenGiaSuc != "Tho"){
            vector<int> arr(4, 0);
            for(int i = 0; i < soLuot; i++){
                soLuongThuc = newSoLuong;
                soSuaThuc += soLuongThuc * soSua;
                for(int j = 3; j > 0; j--){
                    arr[j] = arr[j - 1];
                }
                arr[0] = newSoLuong / 2;
                newSoLuong += arr[3];
            }
            for(int i = 0; i < 4; i++)
                soLuongThuc += arr[i];
        } else {
            vector<int> arr(2, 0);
            for(int i = 0; i < soLuot; i++){
                soLuongThuc = newSoLuong;
                for(int j = 1; j > 0; j--){
                    arr[j] = arr[j - 1];
                }
                arr[0] = newSoLuong / 2;
                newSoLuong += arr[1];
            }
            for(int i = 0; i < 2; i++)
                soLuongThuc += arr[i];
            soSuaThuc = 0;
        }
        cout << tenGiaSuc << ": " << soLuongThuc << "," << soSuaThuc << "\n";
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

class Tho : public GiaSuc{
public:
    void Nhap(){
        cin >> GiaSuc::soLuong;
        GiaSuc::tenGiaSuc = "Tho";
        GiaSuc::tiengKeu = "";
        GiaSuc::soSua = 0;
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
    Bo a; Cuu b; De c; Tho d;
    a.Nhap(); b.Nhap(); c.Nhap(); d.Nhap();
    cin >> soLuot;
    a.XuatTiengKeu(); cout << ",";
    b.XuatTiengKeu(); cout << ",";
    c.XuatTiengKeu(); cout << ",";
    d.XuatTiengKeu(); cout << "\n";
    a.XuatSoSua(soLuot);
    b.XuatSoSua(soLuot);
    c.XuatSoSua(soLuot);
    d.XuatSoSua(soLuot);
    return 0;
}
