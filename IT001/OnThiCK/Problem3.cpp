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

int n,tongluong = 0;
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
        tongluong += F[i].luong;
    }
    //Xuat
    cout << n << endl;
    rep(i,1,n)
        cout << F[i].maso << "," << F[i].hoten << "," << F[i].tuoi << "," << F[i].luong << "," << F[i].gioitinh << endl;
    cout << "Tong luong: " << tongluong;
    return 0;
}
