#include <bits/stdc++.h>

using namespace std;

int n, m;

int _lower_bound(int* arr, int x){
    int pos = -1;
    int left = 0;
    int right = n - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (arr[mid] == x){
            pos = mid;
            right = mid - 1;
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
    cout << "Con Cac" << endl;
    return 0;
}
