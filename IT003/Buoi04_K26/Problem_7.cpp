#include <bits/stdc++.h>

using namespace std;

#define LL long long

LL n, x;
vector<LL> h;

LL DienTichLonNhat(vector<LL>& height) {
    stack<LL> _stack;
    LL _max_S = 0;
    for(int i = 0; i < height.size(); i++) {
        if(_stack.empty() || height[i] > height[_stack.top()])
            _stack.push(i);
        else {
            LL width = 0;
            LL _top = _stack.top();
            _stack.pop();
            if (_stack.empty())
                width = i;
            else
                width = (i - _stack.top() - 1);
            _max_S = max(_max_S, height[_top] * width * 10);
            i--;
        }
    }
    height.clear();
    return _max_S;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        h.push_back(x);
    }
    cout << DienTichLonNhat(h);
    return 0;
}
