#include <bits/stdc++.h>

using namespace std;

class point{
private:
    float x,y;
public:
    void nhap(){
        cin >> this->x;
        cin >> this->y;
    }
    void update_1(){
        this->x *= 2;
        this->y *= 2;
    }
    void update_2(){
        this->x = 0;
        this->y = 0;
    }
    void update_3(int vitri, int d){
        if (vitri == 0)
            this->x += d;
        else
            this->y += d;
    }
    void xuat(){
        cout << "(" << this->x << "," << this->y << ")";
    }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    point a; int n, key;
    a.nhap();
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> key;
        switch (key){
            case 1:
                a.update_1();
                break;
            case 2:
                a.update_2();
                break;
            case 3:
                int vitri, d;
                cin >> vitri >> d;
                a.update_3(vitri, d);
                break;
        }
    }
    a.xuat();
    return 0;
}
