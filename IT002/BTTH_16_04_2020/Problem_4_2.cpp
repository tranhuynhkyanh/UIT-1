#include <bits/stdc++.h>

using namespace std;

#define pi 3.14

struct toado{
    float x, y;
};

float goc, d;
toado p1, p2, p3;

void nhap(toado &point){
    cin >> point.x;
    cin >> point.y;
}

void xuat(toado point){
    point.x += (cos(goc) * d);
    point.y += (sin(goc) * d);
    cout << "(" << point.x << "," << point.y << ")" << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    nhap(p1); nhap(p2); nhap(p3);
    cin >> goc >> d;
    goc = (goc * pi) / 180;
    xuat(p1); xuat(p2); xuat(p3);
    return 0;
}
