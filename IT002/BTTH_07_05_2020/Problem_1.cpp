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
        cout << gio << "h " << phut << "p " << giay << "s";
    }
};

int main(){
    int key, x;
    DongHo _time;
    _time.nhap();
    do{
        cin >> key;
        switch(key){
            case 1:
                _time + 1;
                break;
            case 2:
                _time - 1;
                break;
            case 3:
                cin >> x;
                _time + x;
                break;
            case 4:
                cin >> x;
                _time - x;
                break;
        }
    } while (key != -1);
    _time.xuat();
    return 0;
}
