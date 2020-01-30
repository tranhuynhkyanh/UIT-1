#include <bits/stdc++.h>

using namespace std;

bool CheckNamNhuan(int nam){
    if (nam % 4 == 0) {
        if (nam % 100 ==0){
            if (nam % 400 ==0) return true;
                else return false;
        } else return true;
    } else return false;
}

bool CheckNgay(int ngay, int thang, int nam){
    if ((ngay <= 31) && (ngay >= 1)){
        switch(thang){
            case 2:
                if ((CheckNamNhuan(nam)) && (ngay <= 29)) return true;
                if (!(CheckNamNhuan(nam)) && (ngay <= 28)) return true;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (ngay <= 30) return true;
                break;
            default:
                if (ngay <= 31) return true;
                break;
        }
    }
    return false;
}

bool CheckThang(int thang){
    if ((thang < 1) || (thang > 12)) return false;
    return true;
}

bool CheckNam(int nam){
    if (nam <= 0) return false;
    return true;
}

int main(){

    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    if (CheckNgay(ngay,thang,nam) && CheckThang(thang) && CheckNam(nam)){
        cout << ngay << "/" << thang << "/" << nam << " la ngay hop le.";
        return 0;
    }
    if (!CheckNgay(ngay,thang,nam)){
        cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
        return 0;
    }
    if (!CheckNam(nam)){
        cout << "Nam khong hop le.";
        return 0;
    }
    if (!CheckThang(thang)){
        cout << "Thang khong hop le.";
        return 0;
    }


}
