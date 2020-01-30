#include <bits/stdc++.h>

using namespace std;

struct NGAY{
    int ngay,thang,nam;
};

struct HOPSUA{
    char nhanhieu[20];
    float trongluong;
    NGAY hansudung;
};

int main(){
    HOPSUA inp;
    //Nhap
    cout << "Nhap nhan hieu: ";
    cin >> inp.nhanhieu;
    cout << "Nhap trong luong: ";
    cin >> inp.trongluong;
    cout << "Nhap han su dung: ";
    cin >> inp.hansudung.ngay >> inp.hansudung.thang >> inp.hansudung.nam;
    //Xuat
    cout << "Nhan hieu: " << inp.nhanhieu << endl;
    cout << "Trong luong: " << inp.trongluong << endl;
    cout << "Han su dung: " << inp.hansudung.ngay << "/" << inp.hansudung.thang << "/" << inp.hansudung.nam;
    return 0;
}
