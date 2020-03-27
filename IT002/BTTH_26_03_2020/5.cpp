#include <iostream>

using namespace std;

class HocSinh{
private:
    string hoTen;
    float diemToan;
    float diemVan;
    float diemTrungBinh;
public:
    void Nhap();
    void Xuat();
};

void HocSinh::Nhap(){
    getline(cin, this->hoTen) ;
    do{
        cin >> diemToan;
        cin >> diemVan;
    }while(diemToan < 0 || diemToan > 10 || diemVan < 0 || diemVan > 10);
    diemTrungBinh = float (diemToan + diemVan) / 2;
}

void HocSinh::Xuat(){
    cout << "Thong tin hoc sinh:" << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Diem toan: " << diemToan << endl;
    cout << "Diem van: " << diemVan << endl;
    cout << "Diem trung binh: " << diemTrungBinh;
}
int main() {
    HocSinh hs;
    hs.Nhap();
    hs.Xuat();
    return 0;
}
