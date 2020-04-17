#include <bits/stdc++.h>

using namespace std;

struct toado{
    float x, y;
};

int n;
toado p[10101];

void nhap(toado &point){
    cin >> point.x;
    cin >> point.y;
}

float dientich(toado p[], int n){
    float s = 0.0;
    int j = n - 1;
    for (int i = 0; i < n; i++){
        s += (p[j].x + p[i].x) * (p[j].y - p[i].y);
        j = i;
    }
    return abs(s / 2.0);
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++){
        nhap(p[i]);
    }
    cout << dientich(p, n);
}
