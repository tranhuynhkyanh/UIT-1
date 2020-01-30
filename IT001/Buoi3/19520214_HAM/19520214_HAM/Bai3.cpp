#include <bits/stdc++.h>

using namespace std;

long long n, sum = 0;

void dem_sum_le(long long n);

int main(){
    cin >> n;
    dem_sum_le(n);
    cout << sum;
    return 0;
}

void dem_sum_le(long long n){
    if (n>0){
        if (((n % 10) % 2) == 1)
            sum += n % 10;
        n = n/10;
        dem_sum_le(n);
    }
    return;
}
