#include <bits/stdc++.h>

using namespace std;

bool CheckNamNhuan(int nam){
    return ((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0)));
}

int CheckDayofMonth(int thang, int nam){
    int ngay_cua_thang[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (CheckNamNhuan(nam)) ngay_cua_thang[2] = 29;
    return ngay_cua_thang[thang];
}

class NgayThangNam{
private:
    int ngay, thang, nam;
public:
    void nhap(){
        cin >> ngay >> thang >> nam;
        ngay = abs(ngay);
        thang = abs(thang);
        nam = abs(nam);
        thang = thang % 12;
        if (thang == 0) thang = 12;
        if (ngay > CheckDayofMonth(thang, nam)) ngay = 1;
    }
    void operator+(int x){
        ngay += x;
    }
    void operator-(int x){
        ngay -= x;
    }
    long long convert(){
        long long _result = 0;
        for(int i = 0; i < nam; i++)
            if (CheckNamNhuan(i)) _result += 366;
            else _result += 365;
        for (int i = 1; i < thang; i++)
            _result += CheckDayofMonth(i, nam);
        return _result + ngay;
    }
    void operator-(NgayThangNam a){
        long long _a = convert();
        long long _b = a.convert();
        cout << abs(_a - _b);
    }
};

int main(){
    int key, x;
    NgayThangNam a, b;
    a.nhap();
    do{
        cin >> key;
        switch(key){
            case 1:
                cin >> x;
                a + x;
                break;
            case 2:
                cin >> x;
                a - x;
                break;
            case 3:
                b.nhap();
                b - a;
                break;
        }
    } while (key != 3);
    return 0;
}
