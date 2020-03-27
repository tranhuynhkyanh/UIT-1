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

int UCLN(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}


void process(int TuSo, int MauSo) {
   int UocChung = UCLN(TuSo, MauSo);
   cout << (TuSo / UocChung) << "/" << (MauSo / UocChung) << endl;
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> PhanSo[i].tuSo;
        do {
            cin >> PhanSo[i].mauSo;
        } while (PhanSo[i].mauSo == 0);
    }    
    for (int i = 0; i < n; i++)
        process(PhanSo[i].tuSo, PhanSo[i].mauSo);
    return 0;
}