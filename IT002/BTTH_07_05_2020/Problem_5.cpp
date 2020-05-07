#include <bits/stdc++.h>

using namespace std;

class DaThuc{
private:
    int somu;
    float *heso;
public:
    void nhap(){
        cin >> somu;
        heso = new float[somu+1];
        for(int i = 0; i <= somu; i++)
            cin >> heso[i];
    }
    void xuat(){
        bool print_first = false;
        for(int i = 0; i <= somu; i++){
            if (heso[i] != 0){
                if (print_first == false){
                    cout << heso[i] << "x^0";
                    print_first = true;
                } else {
                    heso[i] >= 0 ? cout << "+" : cout << "-";
                    cout << abs(heso[i]) << "x^" << i;
                }
            }
        }
    }
    friend DaThuc operator+(DaThuc a, DaThuc b) {
        DaThuc _result;
        if (a.somu > b.somu){
            _result.somu = a.somu;
            _result.heso = new float[_result.somu + 1];
        } else {
            _result.somu = b.somu;
            _result.heso = new float[_result.somu + 1];
        }
        for(int i = 0; i <= a.somu; i++)
            _result.heso[i] += a.heso[i];
        for(int i = 0; i <= b.somu; i++)
            _result.heso[i] += b.heso[i];
        return _result;
    }
    friend DaThuc operator-(DaThuc a, DaThuc b) {
        DaThuc _result;
        if (a.somu > b.somu){
            _result.somu = a.somu;
            _result.heso = new float[_result.somu + 1];
        } else {
            _result.somu = b.somu;
            _result.heso = new float[_result.somu + 1];
        }
        for(int i = 0; i <= a.somu; i++)
            _result.heso[i] = a.heso[i];
        for(int i = 0; i <= b.somu; i++)
            _result.heso[i] -= b.heso[i];
        return _result;
    }

    friend DaThuc operator*(DaThuc a, DaThuc b) {
        DaThuc _result;
        _result.somu = a.somu + b.somu;
        _result.heso = new float[_result.somu + 1];
        for(int i = 0; i <= a.somu; i++)
            for(int j = 0; j <= b.somu; j++)
                _result.heso[i+j] += a.heso[i] * b.heso[j];
        return _result;
    }
};

int main(){
    char _oper;
    DaThuc a,b,c;
    a.nhap();
    b.nhap();
    cin >> _oper;
    if (_oper == '+')
        c = a + b;
    if (_oper == '-')
        c = a - b;
    if (_oper == '*')
        c = a * b;
    c.xuat();
    return 0;
}
