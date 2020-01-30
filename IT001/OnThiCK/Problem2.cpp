#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

struct ThongTin{
    int maso;
    char hoten[101];
    long luong;
    char gioitinh[10];
    int tuoi;
};

int n,_min = INT_MAX,vitri;
ThongTin F[10101];

int main(){
    cin >> n;
    //Nhap
    rep(i,1,n){
        cin >> F[i].maso;
        cin >> F[i].hoten;
        cin >> F[i].gioitinh;
        cin >> F[i].tuoi;
        cin >> F[i].luong;
        if (F[i].tuoi < _min){
            _min = F[i].tuoi;
            vitri = i;
        }
    }
    //Xuat
    cout << n << endl;
    rep(i,1,n)
        cout << F[i].maso << "," << F[i].hoten << "," << F[i].tuoi << "," << F[i].luong << "," << F[i].gioitinh << endl;
    cout << "Nhan vien tre nhat:" << endl;
    cout << F[vitri].maso << "," << F[vitri].hoten << "," << F[vitri].tuoi << "," << F[vitri].luong << "," << F[vitri].gioitinh << endl;
    return 0;
}
