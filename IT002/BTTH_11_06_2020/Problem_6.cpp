#include <bits/stdc++.h>

using namespace std;

class Mau{
protected:
    int loai;
    int rh;
public:
    void Nhap(){
        cout << "Nhap nhom mau: 1 - O , 2 - A, 3 - B, 4 - AB: ";
        cin >> loai;
        cout << "Nhap loai mau: 1 - Rh+, 0 - Rh-: ";
        cin >> rh;
    }
    int getLoai(){
        return loai;
    }
    int getRh(){
        return rh;
    }
    int getViTriMeCha(){
        return loai - 1;
    }
    int getViTriNhan(){
        return 2*loai + rh - 2;
    }
    friend bool checkResultNhan(Mau a, Mau b){
        bool table[8][8] = {{1,0,0,0,0,0,0,0},
                            {1,1,0,0,0,0,0,0},
                            {1,0,1,0,0,0,0,0},
                            {1,1,1,1,0,0,0,0},
                            {1,0,0,0,1,0,0,0},
                            {1,1,0,0,1,1,0,0},
                            {1,0,1,0,1,0,1,0},
                            {1,1,1,1,1,1,1,1}};
        return table[a.getViTriNhan(), b.getViTriNhan()];
    }
};

class O : public Mau{
public:
    O(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 1;
    }
};

class A : public Mau{
public:
    A(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 2;
    }
};

class B : public Mau{
public:
    B(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 3;
    }
};

class AB : public Mau{
public:
    AB(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 4;
    }
};

int main(){
    Mau *mau[1010];
    int n, loaimau;
    bool loairh;
    cout << "YEU CAU 1\n";
    cout << "[=> Nhap so luong: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap nhom mau: 1 - O , 2 - A, 3 - B, 4 - AB: ";
        cin >> loaimau;
        cout << "Nhap loai mau: 1 - Rh+, 0 - Rh-: ";
        cin >> loairh;
        switch (loaimau){
            case 1:
                mau[i] = new O(loairh);
                break;
            case 2:
                mau[i] = new A(loairh);
                break;
            case 3:
                mau[i] = new B(loairh);
                break;
            case 4:
                mau[i] = new AB(loairh);
                break;
        }
    }
    cout << "YEU CAU 2\n";
    Mau a, b, c;
    a.Nhap(); b.Nhap(); c.Nhap();
    return 0;
}
