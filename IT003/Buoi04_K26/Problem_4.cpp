#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void print_home_dir(string _dir){
    stack<string> _stack, _stack_reverse;
    string _result = "/";
    string _tmp;
    for (int i = 0; i < _dir.length(); i++){
        _tmp = "";
        while (_dir[i] == '/') i++;
        while (i < _dir.length() && _dir[i] != '/') {
            _tmp += _dir[i];
            i++;
        }
        if (_tmp == "..") {
            if (!_stack.empty())
                _stack.pop();
        } else if (_tmp == ".")
            continue;
        else if (_tmp != "")
            _stack.push(_tmp);
    }
    while (!_stack.empty()) {
        _stack_reverse.push(_stack.top());
        _stack.pop();
    }
    while (!_stack_reverse.empty()) {
        if (_stack_reverse.size() != 1)
            _result += _stack_reverse.top() + "/";
        else
            _result += _stack_reverse.top();
        _stack_reverse.pop();
    }
    cout << _result << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string _dir;
    do {
        cin >> _dir;
        if ((_dir) == "END") exit;
        else
            print_home_dir(_dir);
    } while (_dir != "END");
    return 0;
}
