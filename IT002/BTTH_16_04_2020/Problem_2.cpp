#include <bits/stdc++.h>

using namespace std;

class SoPhuc{
private:
    float thuc;
    float ao;
public:
    void nhap(){
        cin >> this->thuc;
        cin >> this->ao;
    }
    float module(float thuc, float ao){
        return sqrt(pow(thuc, 2) + pow(ao, 2));
    }
    void cong(SoPhuc a){
        thuc = thuc + a.thuc;
        ao = ao + a.ao;
    }
    void tru(SoPhuc a){
        thuc = thuc - a.thuc;
        ao = ao - a.ao;
    }
    void nhan_x(int x){
        thuc = thuc * x;
        ao = ao * x;
    }
    void nhan(SoPhuc a){
        SoPhuc tmp;
        tmp.thuc = (thuc * a.thuc) - (ao * a.ao);
        tmp.ao = (thuc * a.ao) + (ao * a.thuc);
        thuc = tmp.thuc;
        ao = tmp.ao;
    }
    void chia(SoPhuc a){
        SoPhuc tmp;
        tmp.thuc = (((thuc * a.thuc) + (ao * a.ao)) / (pow(a.thuc, 2) + pow(a.ao, 2)));
        tmp.ao =  ((a.thuc * ao) - (thuc * a.ao))/ (pow(a.thuc, 2) + pow(a.ao, 2));
        thuc = tmp.thuc;
        ao = tmp.ao;
    }
    void xuat(){
        if (module(this->thuc, this->ao) == 0){
            cout << "ERROR";
        } else {
            if (this->thuc == 0 && this->ao == 0){
                cout << "0";
            } else if (this->thuc == 0){
                cout << this->ao << "i";
            } else if (this->ao == 0){
                cout << this->thuc;
            } else {
                if (this->ao < 0)
                    cout << this->thuc << " - " << abs(this->ao) << "i";
                else
                    cout << this->thuc << " + " << abs(this->ao) << "i";
            }
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    SoPhuc c1, c2;
    c1.nhap(); c2.nhap();
    //_x = c1 + c2
    SoPhuc _x = c1; _x.cong(c2);
    //_x = c2 - 2 * c1
    SoPhuc _x_2 = c2;
    //_tmp = 2 * c1
    SoPhuc _tmp = c1; _tmp.nhan_x(2);
    _x_2.tru(_tmp);
    //_x_3 = c1 - 4 * c2
    SoPhuc _x_3 = c1;
    //_tmp_2 = 4 * c2
    SoPhuc _tmp_2 = c2; _tmp_2.nhan_x(4);
    _x_3.tru(_tmp_2);
    //KetQua
    SoPhuc KetQua = _x; KetQua.nhan(_x_2); KetQua.chia(_x_3);
    KetQua.xuat();
    return 0;
}
