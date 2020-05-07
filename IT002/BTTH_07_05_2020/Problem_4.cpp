#include <bits/stdc++.h>

using namespace std;

class DongHo{
private:
    int gio, phut, giay;
public:
    void nhap(){
        cin >> gio >> phut >> giay;
        gio = abs(gio); phut = abs(phut); giay = abs(giay);
        if (gio > 24) gio %= 24;
        if (phut > 60) phut %= 60;
        giay += gio * 3600 + phut * 60;
    }
    void operator+(int x){
        giay += x;
    }
    void operator-(int x){
        giay -= x;
    }
    void xuat(){
        gio = giay / 3600; giay %= 3600;
        phut = giay / 60; giay %= 60;
        if (gio > 24) gio %= 24;
        cout << gio << " " << phut << " " << giay << " ";
    }
};

int main(){
    int n, x;
    string _oper;
    DongHo _time;
    _time.nhap();
    cin >> n;
    for (int i = 1; i<= n; i++){
        cin >> _oper;
        if (_oper == "++")
            _time + 1;
        if (_oper == "--")
            _time - 1;
        if (_oper == "+"){
            cin >> x;
            _time + x;
        }
        if (_oper == "-"){
            cin >> x;
            _time - x;
        }
    }
    _time.xuat();
    return 0;
}
