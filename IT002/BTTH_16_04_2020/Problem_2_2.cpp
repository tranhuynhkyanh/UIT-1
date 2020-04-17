#include <bits/stdc++.h>

using namespace std;

struct SoPhuc{
    float thuc, ao;
};

void nhap(SoPhuc &x){
    cin >> x.thuc;
    cin >> x.ao;
}

float module(SoPhuc x){
    return sqrt(pow(x.thuc, 2) + pow(x.ao, 2));
}

void xuat(SoPhuc x){
    if (module(x) == 0){
        cout << "ERROR";
    } else {
        if (x.thuc == 0 && x.ao == 0){
            cout << "0";
        } else if (x.thuc == 0){
            cout << x.ao << "i";
        } else if (x.ao == 0){
            cout << x.thuc;
        } else {
            if (x.ao < 0)
                cout << x.thuc << " - " << abs(x.ao) << "i";
            else
                cout << x.thuc << " + " << abs(x.ao) << "i";
        }
    }
}

SoPhuc nhan_int(SoPhuc a, int x){
    SoPhuc tmp;
    tmp.thuc = a.thuc * x;
    tmp.ao = a.ao * x;
    return tmp;
}
SoPhuc cong(SoPhuc a, SoPhuc b){
    SoPhuc tmp;
    tmp.thuc = a.thuc + b.thuc;
    tmp.ao = a.ao + b.ao;
    return tmp;
}
SoPhuc tru(SoPhuc a, SoPhuc b){
    SoPhuc tmp;
    tmp.thuc = a.thuc - b.thuc;
    tmp.ao = a.ao - b.ao;
    return tmp;
}
SoPhuc nhan(SoPhuc a, SoPhuc b){
    SoPhuc tmp;
    tmp.thuc = (a.thuc * b.thuc) - (a.ao * b.ao);
    tmp.ao = (a.thuc * b.ao) + (a.ao * b.thuc);
    return tmp;
}
SoPhuc chia(SoPhuc a, SoPhuc b){
    SoPhuc tmp;
    tmp.thuc = (((a.thuc * b.thuc) + (a.ao * b.ao)) / (pow(b.thuc, 2) + pow(b.ao, 2)));
    tmp.ao =  ((b.thuc * a.ao) - (a.thuc * b.ao))/ (pow(b.thuc, 2) + pow(b.ao, 2));
    return tmp;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    SoPhuc c1, c2;
    nhap(c1);
    nhap(c2);
    SoPhuc _x = cong(c1, c2);
    SoPhuc _x_2 = tru(c2, nhan_int(c1, 2));
    SoPhuc _x_3 = tru(c1, nhan_int(c2, 4));
    SoPhuc KetQua = chia(nhan(_x, _x_2), _x_3);
    xuat(KetQua);
    return 0;
}
