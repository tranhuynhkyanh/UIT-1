#include <bits/stdc++.h>

using namespace std;

#define pi 3.14

class tamgiac{
private:
    float x1, y1, x2, y2, x3, y3;
public:
    void nhap(){
        cin >> this->x1 >> this->y1;
        cin >> this->x2 >> this->y2;
        cin >> this->x3 >> this->y3;
    }
    void update(float goc, float d){
        this->x1 += (cos(goc) * d);
        this->y1 += (sin(goc) * d);
        this->x2 += (cos(goc) * d);
        this->y2 += (sin(goc) * d);
        this->x3 += (cos(goc) * d);
        this->y3 += (sin(goc) * d);
    }
    void xuat(){
        cout << "(" << this->x1 << "," << this->y1 << ")" << endl;
        cout << "(" << this->x2 << "," << this->y2 << ")" << endl;
        cout << "(" << this->x3 << "," << this->y3 << ")" << endl;
    }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    float goc, d;
    tamgiac a;
    a.nhap();
    cin >> goc >> d;
    goc = (goc * pi) / 180;
    a.update(goc, d);
    a.xuat();
    return 0;
}
