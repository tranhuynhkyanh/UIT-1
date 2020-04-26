#include <bits/stdc++.h>

#define LL long long
#define endl "\n"

using namespace std;

int n, k;
LL x;

int binary_search_x(LL *arr, LL x){
    int left = 0, right = n - 1, mid;
    while (left <= right){
        mid = (left + right) / 2;
        if (arr[mid] == x) return mid;
        if (x < arr[mid])
            right = mid - 1;
        else left = mid + 1;
    }
    return -1;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    LL *a = new LL[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    for (int i = 1; i <= k; i++){
        cin >> x;
        cout << binary_search_x(a, x) << endl;
    }
    return 0;
}
