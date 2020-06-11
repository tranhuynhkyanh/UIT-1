#include "NhanVien.h"
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "NhanVienQuanLy.h"
#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
    NhanVien* arr[1000];
    int n, type;
    string tencantim = "";
    long long tongluong = 0, luongnvsxmin = LLONG_MAX;
    cout << "YC1: NHAP DANH SACH NHAN VIEN\n";
    cout << "[=> Nhap so luong nhan vien: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "- Nhap nhan vien " << i + 1 << ": \n";
        cout << " + Nhap loai nhan vien (1 = VP, 2 = SX, 3 = QL): ";
        cin >> type;
        if (type == 1) {
            arr[i] = new NhanVienVanPhong();
            arr[i]->Nhap();
        }
        if (type == 2) {
            arr[i] = new NhanVienSanXuat();
            arr[i]->Nhap();
        }
        if (type == 3) {
            arr[i] = new NhanVienQuanLy();
            arr[i]->Nhap();
        }
    }
    cout << "YC2-3: XUAT DANH SACH NHAN VIEN & LUONG\n";
    cout << "[=> Tong so nhan vien: " << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << "- Thong tin nhan vien " << i + 1 << ": \n";
        arr[i]->Xuat();
        cout << " + Luong: " << arr[i]->getLuong() << "\n";
        tongluong += arr[i]->getLuong();
        if (arr[i]->getLoai() == 2 && luongnvsxmin > arr[i]->getLuong())
            luongnvsxmin = arr[i]->getLuong();
    }
    cout << "YC4: XUAT TONG LUONG NHAN VIEN\n";
    cout << "[=> Tong luong: " << tongluong << "\n";
    cout << "YC5: LUONG NHAN VIEN SAN XUAT NHO NHAT\n";
    cout << "[=> Luong NVSX nho nhat: ";
    if (luongnvsxmin == LONG_MAX)
        cout << "Khong co NVSX!!\n";
    else
        cout << luongnvsxmin << "\n";
    cout << "YC6: TIM NHAN VIEN THEO TEN\n";
    cout << "[=> Nhap ten can tim: ";
    cin.ignore();
    getline(cin, tencantim);
    cout << "[=> Danh sach nhan vien co ten trung: \n";
    for (int i = 0; i < n; i++) {
        if (arr[i]->getTen() == tencantim) {
            cout << "- Thong tin nhan vien: \n";
            cout << " + STT trong danh sach: " << i + 1 << "\n";
            arr[i]->Xuat();
            cout << " + Luong: " << arr[i]->getLuong() << "\n";
        }
    }
    return 0;
}
