#include <bits/stdc++.h>

using namespace std;

class Sach{
protected:
    string ten;
    string tacgia;
public:
    void Nhap(){
        cin >> ten;
        cin >> tacgia;
    }
    void Xuat(){
        cout << ten << " - " << tacgia << " - ";
    }
};

class SachGiaoKhoa : public Sach{
protected:
    string monhoc;
public:
    void Nhap(){
        Sach::Nhap();
        cin >> monhoc;
    }
    void Xuat(){
        Sach::Xuat();
        cout << monhoc;
    }
};

class TruyenTranh : public Sach{
protected:
    string theloai;
public:
    void Nhap(){
        Sach::Nhap();
        cin >> theloai;
    }
    void Xuat(){
        Sach::Xuat();
        cout << theloai;
    }
};

class TapChi : public Sach{
protected:
    string toasoan;
public:
    void Nhap(){
        Sach::Nhap();
        cin >> toasoan;
    }
    void Xuat(){
        Sach::Xuat();
        cout << toasoan;
    }
};


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, type;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> type;
        cout << i+1 << " - ";
        if (type == 1){
            SachGiaoKhoa a;
            a.Nhap();
            a.Xuat();
        }
        if (type == 2){
            TruyenTranh a;
            a.Nhap();
            a.Xuat();
        }
        if (type == 3){
            TapChi a;
            a.Nhap();
            a.Xuat();
        }
        cout << "\n";
    }
    return 0;
}
