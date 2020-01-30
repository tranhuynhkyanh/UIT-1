#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)

char Ho[10101],Ten[10101],HoVaTen[10101],HoVaTenThuong[10101];

int SoChuSo(char _str[]){
    int dem = 0;
    while (_str[dem] != '\0'){
        dem++;
    }
    return dem;
}

void InArray(char a[]){
    cout << "{";
    rep(i,0,SoChuSo(a)-1)
        cout << "'" << a[i] << "',";
    cout << "'" << a[SoChuSo(a)-1] << "'}" << endl;
    return;
}

void InHoTen(char a[], char b[]){
    cout << "Ho: ";
    InArray(a);
    cout << "Ten: ";
    InArray(b);
    int k = SoChuSo(a);
    rep(i,0,k)
        HoVaTenThuong[i] = a[i];
    HoVaTenThuong[k] = ' ';
    rep(i,k+1,k+1+SoChuSo(b))
        HoVaTenThuong[i] = b[i-k-1];
    return;
}

char *NoiHoTen(char a[], char b[]){
    int k = SoChuSo(a);
    rep(i,0,k)
        HoVaTen[i] = a[i];
    HoVaTen[k] = ' ';
    rep(i,k+1,k+1+SoChuSo(b))
        HoVaTen[i] = b[i-k-1];
    return HoVaTen;
}

char *VietHoaChuDau(char a[], char b[]){
    a[0] -= 32;
    b[0] -= 32;
    return NoiHoTen(a,b);
}

void DemKiTu(){
    int dem = 0;
    char ch;
    cout << "Nhap ti tu can dem: ";
    cin >> ch;
    rep(i,0,SoChuSo(HoVaTen)){
        if (HoVaTen[i] == ch || HoVaTen[i]+32 == ch || HoVaTen[i]-32 == ch)
            dem++;
    }
    cout << "Ki tu '" << ch << "' xuat hien " << dem << " lan" << endl;
    return;
}

void DemTanSuat(){
    int dem[10101];
    cout << "Tang suat cac ki tu: " << endl;
    rep(i,0,SoChuSo(HoVaTenThuong)){
        if (HoVaTenThuong[i] != ' ')
            dem[HoVaTenThuong[i]]++;
    }
    rep(i,'a','z'){
        if (dem[i] > 0)
            cout << "Ki tu '" << char(i) << "' xuat hien " << dem[i] << " lan" << endl;
    }
    return;
}

int main(){
    cout << "Nhap chuoi ho: ";
    cin >> Ho;
    cout << "Nhap chuoi ten: ";
    cin >> Ten;
    InHoTen(Ho,Ten);
    cout << "Chuoi da noi: ";
    InArray(NoiHoTen(Ho,Ten));
    cout << "Chuoi da in hoa chu dau: ";
    InArray(VietHoaChuDau(Ho,Ten));
    DemKiTu();
    DemTanSuat();
    return 0;
}
