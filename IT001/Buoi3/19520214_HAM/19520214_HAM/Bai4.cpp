#include <bits/stdc++.h>

using namespace std;

long long n, sum = 0;

void dem_sum_chan(long long n);

int main(){
    cin >> n;
    dem_sum_chan(n);
    cout << sum;
    return 0;
}

void dem_sum_chan(long long n){
    if (n>0){
        if (((n % 10) % 2) == 0)
            sum += n % 10;
        n = n/10;
        dem_sum_chan(n);
    }
    return;
}
