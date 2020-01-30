#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

struct NGAY{
    int ngay,thang,nam;
};

struct HOPSUA{
    char loaisua[100];
    float dungtich;
    char thuonghieu[20];
    char xuatxu[100];
    NGAY hansudung;
    int dongia;
};

int n,k=0;
HOPSUA hop[10101],done[10101];
NGAY ngayhethan;

bool CheckNgay(int ngay, int thang, int nam){
    long time_het_han = (ngayhethan.nam * 365) + (ngayhethan.thang * 30) + ngayhethan.ngay;
    long time_hop_sua = (nam * 365) + (thang * 30) + ngay;
    if (time_het_han - time_hop_sua >= 0) return true;
    return false;
}

void Nhap(){
    cin >> n;
    rep(i,1,n){
        cin >> hop[i].loaisua;
        cin >> hop[i].dungtich;
        cin >> hop[i].thuonghieu;
        cin >> hop[i].xuatxu;
        cin >> hop[i].hansudung.ngay >> hop[i].hansudung.thang >> hop[i].hansudung.nam;
        cin >> hop[i].dongia;
    }
    cin >> ngayhethan.ngay >> ngayhethan.thang >> ngayhethan.nam;
}

void XuLi(){
    rep(i,1,n){
       if (CheckNgay(hop[i].hansudung.ngay,hop[i].hansudung.thang,hop[i].hansudung.nam)){
            k++;
            done[k] = hop[i];
       }
    }
}

void Xuat(){
    cout << n << endl;
    rep(i,1,n){
        cout << hop[i].loaisua << ", ";
        cout << hop[i].dungtich << ", ";
        cout << hop[i].thuonghieu << ", ";
        cout << hop[i].xuatxu << ", ";
        cout << hop[i].hansudung.ngay << "/" << hop[i].hansudung.thang << "/" << hop[i].hansudung.nam << ", ";
        cout << hop[i].dongia;
        cout << endl;
    }
}

int main(){
    Nhap();
    Xuat();
    return 0;
}
