#include <bits/stdc++.h>

using namespace std;

void nghich_the(vector<int> arr){
    int _result = 0;
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = i + 1; j < arr.size(); j++){
            if (arr[i] > arr[j]) _result++;
        }
    }
    cout << _result << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int key, x, pos;
    vector<int> arr;
    do{
        cin >> key;
        if (key == 1){
            cin >> x;
            arr.push_back(x);
        }
        if (key == 2){
            cin >> pos >> x;
            arr[pos] = x;
        }
        if (key != 0) nghich_the(arr);
    } while (key != 0);
    return 0;
}
