#include <bits/stdc++.h>

using namespace std;

bool check_num(string _s){
    if (_s.find('+') != -1) return false;
    if (_s.find('-') != -1) return false;
    if (_s.find('*') != -1) return false;
    if (_s.find('/') != -1) return false;
    return true;
}

int get_value(int a, string s, int b){
    if (s == "+") return a+b;
    if (s == "-") return a-b;
    if (s == "*") return a*b;
    if (s == "/") return a/b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string _str, _tmp;
    stack<int> _stack;
    int _num;
    getline(cin, _str);
	for (int i = 0; i < _str.length(); i++){
        _tmp = "";
        while (_str[i] == ' ') i++;
        while (i < _str.length() && _str[i] != ' ') {
            _tmp += _str[i];
            i++;
        }
        if (check_num(_tmp)) {
            _num = stoi(_tmp);
            _stack.push(_num);
        } else {
            int value_2 = _stack.top();
            _stack.pop();
            int value_1 = _stack.top();
            _stack.pop();
            _stack.push(get_value(value_1, _tmp, value_2));
        }
    }
    cout << _stack.top();
	return 0;
}
