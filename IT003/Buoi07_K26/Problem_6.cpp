#include <bits/stdc++.h>

using namespace std;

void insert(vector<long long> &arr, long long x) {
    vector<long long>::iterator it = lower_bound(arr.begin(), arr.end(), x);
    arr.insert(it, x);
}

int output(vector<long long> arr, long long x){
    for(int i = 0; i < arr.size(); i++)
        if (arr[i] == x) return i+1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    vector<long long> arr;
    vector<long long>::iterator lower;
    long long x;
    int key;
    do {
        cin >> key;
        if (key == 0) exit;
        if (key == 1){
            cin >> x;
            if (!binary_search(arr.begin(), arr.end(), x))
                insert(arr,x);
        }
        if (key == 2){
            cin >> x;
            cout << output(arr, x) << "\n";
        }
    } while (key != 0);
    return 0;
}
