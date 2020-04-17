#include <bits/stdc++.h>

using namespace std;

class thisinh{
private:
    int stt;
    string ma;
    string hoten;
    string ngaysinh;
    int diemtoan, diemvan, diemanh;
public:
    void nhap(int);
    int getdiem();
    void xuat();
};

void thisinh::nhap(int num){
    stt = num;
    cin >> ma;
    cin.ignore();
    getline(cin, hoten);
    cin >> ngaysinh;
    do {
        cin >> diemtoan;
        cin >> diemvan;
        cin >> diemanh;
    } while (diemtoan < 0 || diemtoan > 10 || diemvan < 0 || diemvan > 10 || diemanh < 0 || diemanh > 10);
}

int thisinh::getdiem(){
    return (diemtoan + diemvan + diemanh);
}

void thisinh::xuat(){
    cout << "-" << endl;
    cout << "STT " << this->stt << ":" << endl;
    cout << "Thong tin hoc sinh:" << endl;
    cout << "Ma: " << this->ma << endl;
    cout << "Ho ten: " << this->hoten << endl;
    cout << "Ngay sinh: " << this->ngaysinh << endl;
    cout << "Diem toan: " << this->diemtoan << endl;
    cout << "Diem van: " << this->diemvan << endl;
    cout << "Diem anh: " << this->diemanh << endl;
}

thisinh a[10101];
int n, dem = 0;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        a[i].nhap(i);
        if (a[i].getdiem() > 15){
            a[i].xuat();
            ++dem;
        }
    }
    if (dem == 0){
        cout << "Khong co thi sinh co tong diem lon hon 15" << endl;
    }
    return 0;
}
