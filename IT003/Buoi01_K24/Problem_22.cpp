#include <bits/stdc++.h>

using namespace std;

#define LL long long

int n, heso[10101], x[10101], vephai, dem = 0;

void process(int i, LL tmp){
    if(i == n){
        if(tmp == vephai){
            //for(int j = 0; j<n; j++)
            //    cout << x[j] << " ";
            //cout << endl;
            dem++;
        }
        return;
    }
    for(x[i] = 0; x[i] <= vephai/heso[i]; x[i]++)
        if(tmp + x[i] * heso[i] <= vephai)
            process(i+1, tmp + x[i]*heso[i]);
}

int main(){
    cin >> n;
    for(int i = 0; i<n; i++)
        cin >> heso[i];
    cin >> vephai;
    process(0, 0);
    cout << dem;
    return 0;
}
