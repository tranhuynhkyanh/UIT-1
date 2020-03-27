#include <iostream>

using namespace std;

int ngay_cua_thang[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool CheckNamNhuan(int nam){
    return ((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0)));
}

bool CheckNgayThangNam(int ngay, int thang, int nam){
    if(ngay < 1 || thang < 1 || nam <0) return false;
    if (CheckNamNhuan(nam)) ngay_cua_thang[2] = 29;
    if (ngay > ngay_cua_thang[thang] || thang > 13) return false;
    return true;
}

int main(){
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    if (CheckNgayThangNam(ngay,thang,nam)){
        if (ngay == ngay_cua_thang[thang]){
            ngay = 1;
            if (thang == 12){
                thang = 1;
                nam += 1;
            } else
                thang += 1;
        } else
            ngay += 1;
        cout << ngay << "/" << thang << "/" << nam;
    } else
        cout << "ERROR";
    return 0;
}
