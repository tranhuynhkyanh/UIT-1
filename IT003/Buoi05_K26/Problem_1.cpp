#include <bits/stdc++.h>

#define LL long long
#define endl "\n"

using namespace std;

int n, k;
vector<LL> a;
LL x;

int linear_search_x(vector<LL> arr, LL x){
    int _result = -1;
    LL _range = LLONG_MAX;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == x)
            return i;
        else if (abs(arr[i] - x) < _range){
            _range = abs(arr[i] - x);
            _result = i;
        }
    }
    return _result;
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
        cout << linear_search_x(a, x) << endl;
    }
    return 0;
}

