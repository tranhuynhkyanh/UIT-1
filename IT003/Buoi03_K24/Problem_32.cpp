#include <bits/stdc++.h>

using namespace std;

string _str, _str_result = "";

int check(char a, char b){
	if (b == ')') return -1;
	if (a == '*' || a == '/'){
		if (b == '+' || b == '-')
            return 1;
		return 0;
	}
	return -1;
}

string get_str_val(string &_s, bool &_num) {
	string _result = "";
	if (string("()+-*/").find(_s.back()) != -1) {
		_result += _s.back();
		_s.pop_back();
		_num = false;
		return _result;
	}
	_num = true;
	while (_s.size() != 0 && string("()+-*/").find(_s.back()) == -1) {
		_result += _s.back();
		_s.pop_back();
	}
	return _result;
}

void getPostfix(){
    stack<char> _stack;
	reverse(_str.begin(), _str.end());
	while (_str.size() != 0) {
		bool _check_num;
		string s = get_str_val(_str, _check_num);
		if (_check_num){
            _str_result += s;
            _str_result += " ";
		} else {
			if (s == "(" || _stack.empty()) {
				_stack.push(s[0]);
				continue;
			}
			if (s == ")") {
				while (_stack.top() != '(') {
                    _str_result += _stack.top();
                    _str_result += " ";
					_stack.pop();
				}
				_stack.pop();
				continue;
			};
			if (check(s[0], _stack.top()) >= 0) _stack.push(s[0]);
			if (check(s[0], _stack.top()) < 0) {
				while (_stack.size() && _stack.top() != '('
                            && check(s[0], _stack.top()) < 0) {
                    _str_result += _stack.top();
                    _str_result += " ";
					_stack.pop();
				}
				_stack.push(s[0]);
			}
		}
	}
	while (_stack.size()) {
		_str_result += _stack.top();
		_str_result += " ";
		_stack.pop();
	}
	return;
}

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

void getResult(){
    string _str = _str_result, _tmp;
    stack<int> _stack;
    int _num;
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
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> _str;
    getPostfix();
    getResult();
}
