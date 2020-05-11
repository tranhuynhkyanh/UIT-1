#include <bits/stdc++.h>

using namespace std;

int n, m;

int _upper_bound(int* arr, int x){
    int pos = -1;
    int left = 0;
    int right = n - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (arr[mid] == x){
            pos = mid;
            left = mid + 1;
        }
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return pos;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> x;
        cout << _upper_bound(a, x) << "\n";
    }
    return 0;
}
