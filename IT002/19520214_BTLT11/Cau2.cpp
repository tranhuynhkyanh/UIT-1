#include <iostream>

using namespace std;

class CDate{
protected:
    int ngay, thang, nam;
public:
    CDate(){
        this->ngay = 0;
        this->thang = 0;
        this->nam = 0;
    }
    CDate(int newNgay, int newThang, int newNam){
        this->ngay = newNgay;
        this->thang = newThang;
        this->nam = newNam;
    }
    friend istream& operator >> (istream& is, CDate& a){
        cout << "Nhap ngay: ";
        is >> a.ngay;
        cout << "Nhap thang: ";
        is >> a.thang;
        cout << "Nhap nam: ";
        is >> a.nam;
        return is;
    }
    bool KiemTraNamNhuan(int newNam){
        if (newNam % 400 == 0) return true;
        if (newNam % 4 == 0 && newNam % 100 != 0) return true;
        return false;
    }
    CDate ChuanHoa(){
        int ngay_cua_thang[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        if (KiemTraNamNhuan(this->nam)) ngay_cua_thang[2] = 29;
        if (this->ngay > ngay_cua_thang[this->thang]){
            this->ngay %= ngay_cua_thang[this->thang];
            this->thang += 1;
        }
        if (this->thang > 12){
            this->nam += 1;
            this->thang = 1;
        }
        return *this;
    }
    CDate& operator++(){ // prefix ++
        ++ngay;
        return *this;
    }
    CDate operator++(int){  // postfix ++
        ngay++;
        return *this;
    }
    friend ostream& operator << (ostream& os, CDate a){
        a.ChuanHoa();
        os << "Ngay: ";
        os << a.ngay << "/" << a.thang << "/" << a.nam << "\n";
        return os;
    }
};

int main(){
    CDate a;
    cin >> a;
    ++a;
    cout << a;
    a++;
    cout << a;
    return 0;
}
