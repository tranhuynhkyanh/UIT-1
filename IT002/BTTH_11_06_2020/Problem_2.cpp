#include <bits/stdc++.h>

using namespace std;

class NhanVien{
protected:
    string ten;
public:
    void Nhap(){
        cin >> ten;
    }
    void Xuat(){
        cout << ten << ": ";
    }
};

class NhanVienSanXuat : public NhanVien{
protected:
    int luongcanban;
    int sosanpham;
public:
    void Nhap(){
        NhanVien::Nhap();
        cin >> luongcanban >> sosanpham;
    }
    int getSoSanPham(){
        return sosanpham;
    }
    void Xuat(){
        NhanVien::Xuat();
        cout << luongcanban + sosanpham * 5;
    }
};

class NhanVienVanPhong : public NhanVien{
protected:
    int songaylamviec;
public:
    void Nhap(){
        NhanVien::Nhap();
        cin >> songaylamviec;
    }
    int getSoNgayLamViec(){
        return songaylamviec;
    }
    void Xuat(){
        NhanVien::Xuat();
        cout << songaylamviec * 100;
    }
};

class Sep : public NhanVien{
public:
    void Nhap(){
        NhanVien::Nhap();
    }
    void Xuat(int sosanpham, int songaylamviec){
        NhanVien::Xuat();
        cout << 100 + sosanpham * 2 + songaylamviec * 40;
    }
};


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, type;
    int sosanpham = 0, songaylamviec = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> type;
        if (type == 1){
            NhanVienSanXuat a;
            a.Nhap();
            sosanpham += a.getSoSanPham();
            a.Xuat();
        }
        if (type == 2){
            NhanVienVanPhong a;
            a.Nhap();
            songaylamviec += a.getSoNgayLamViec();
            a.Xuat();
        }
        if (type == 3){
            Sep a;
            a.Nhap();
            a.Xuat(sosanpham, songaylamviec);
        }
        cout << "\n";
    }
    return 0;
}
