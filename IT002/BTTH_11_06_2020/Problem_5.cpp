#include <bits/stdc++.h>

using namespace std;

class Cong{
protected:
    int loai;
public:
    int getLoai(){
        return loai;
    }
    virtual void Nhap() = 0;
    virtual int Lay() = 0;
};

class Cong_1 : public Cong{
protected:
    int dongia;
    int sohang;
public:
    Cong_1(){
        Cong::loai = 1;
    }
    void Nhap(){
        cin >> dongia;
        cin >> sohang;
    }
    int Lay(){
        return dongia*sohang;
    }
};

class Cong_2 : public Cong{
protected:
    int trituecauhoi;
public:
    Cong_2(){
        Cong::loai = 2;
    }
    void Nhap(){
        cin >> trituecauhoi;
    }
    int Lay(){
        return trituecauhoi;
    }
};

class Cong_3 : public Cong{
protected:
    int sucdungsy;
public:
    Cong_3(){
        Cong::loai = 3;
    }
    void Nhap(){
        cin >> sucdungsy;
    }
    int Lay(){
        return sucdungsy;
    }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, type;
    cin >> n;
    Cong *cong[1000];
    for(int i = 0; i < n; i++){
        cin >> type;
        if (type == 1) cong[i] = new Cong_1();
        if (type == 2) cong[i] = new Cong_2();
        if (type == 3) cong[i] = new Cong_3();
        cong[i]->Nhap();
    }
    int Tien, TriTue, SucManh;
    cin >> Tien >> TriTue >> SucManh;
    for(int i = 0; i < n; i++){
        if (cong[i]->getLoai() == 1){
            Tien -= cong[i]->Lay();
        }
        if (cong[i]->getLoai() == 2){
            if (cong[i]->Lay() > TriTue)
                TriTue = -1;
        }
        if (cong[i]->getLoai() == 3){
            SucManh -= cong[i]->Lay();
        }
    }
    if (Tien < 0 || TriTue < 0 || SucManh < 0)
        cout << -1;
    else
        cout << Tien << " " << TriTue << " " << SucManh;
    return 0;
}
