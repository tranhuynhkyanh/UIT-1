#include <bits/stdc++.h>

#define LL long long
#define endl "\n"

using namespace std;

int n, k;
vector<LL> a;
LL x;

void linear_search_rank_x(vector<LL> arr, LL x){
    int _result_low = 0, _result_high = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] < x)
            _result_low++;
        else if (arr[i] > x)
            _result_high++;
    }
    cout << _result_low << " " << _result_high << endl;
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
        linear_search_rank_x(a, x);
    }
    return 0;
}
