#include "CongTy.h"
#include <iostream>

using namespace std;

int main() {
    CongTy a, b;
    cout << "___CONG TY A___\n";
    cin >> a;
    cout << a;
    cout << "___CONG TY B___\n";
    b.setSanphamdinhmuc();
    b.setMucluongcoban();
    b.addNhanVien(NhanVien("Cao Hung Phu", "1/1/2000", "Nam", true, false, 0));
    b.addNhanVien(NhanVien("Nguyen Van A", "1/1/1999", "Nam", false, true, 500));
    b.addNhanVien(NhanVien("Nguyen Thi C", "1/1/1998", "Nu", false, true, 300));
    b.addNhanVien(NhanVien("Truong Van B", "1/1/1996", "Nam", false, true, 200));
    b.addNhanVien(NhanVien("Truong Thi E", "1/1/1996", "Nu", false, true, 200));
    b.addNhanVien(NhanVien("Nguyen Thi D", "1/1/1996", "Nu", false, true, 400));
    cout << b;
    return 0;
}
