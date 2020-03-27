#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct PHANSO {
    int tuSo;
    int mauSo;
};

PHANSO PhanSo[10101];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, vt_min, vt_max;
    float _min, _max;
    cin >> n;
    _min = 99999;
    _max = -99999;
    vt_min = 0;
    vt_max = 0;

    for (int i = 0; i < n; i++) {
        cin >> PhanSo[i].tuSo;
        do {
            cin >> PhanSo[i].mauSo;
        } while (PhanSo[i].mauSo == 0);
    }
    for (int i = 0; i < n; i++) {
        float kq;
        kq = (float) PhanSo[i].tuSo / PhanSo[i].mauSo;
        if (kq < _min){
            _min = kq;
            vt_min = i;
        }
        if (kq > _max){
            _max = kq;
            vt_max = i;
        }
    }
    cout << PhanSo[vt_min].tuSo << "/" << PhanSo[vt_min].mauSo << endl;
    cout << PhanSo[vt_max].tuSo << "/" << PhanSo[vt_max].mauSo;
    return 0;
}