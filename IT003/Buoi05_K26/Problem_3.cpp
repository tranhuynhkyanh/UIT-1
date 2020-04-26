#include <bits/stdc++.h>

#define LL long long
#define endl "\n"

using namespace std;

int n, k;
vector<LL> a;
LL x;

int binary_search_x(vector<LL> arr, LL x){
    int left = 0, right = arr.size() - 1, mid;
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
    for (int i = 1; i <= n; i++){
        cin >> x;
        a.push_back(x);
    }
    cin >> k;
    for (int i = 1; i <= k; i++){
        cin >> x;
        cout << binary_search_x(a, x) << endl;
    }
    return 0;
}

