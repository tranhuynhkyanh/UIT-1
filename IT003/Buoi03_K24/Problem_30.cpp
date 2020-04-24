#include <bits/stdc++.h>

using namespace std;

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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    stack<char> _stack;
    string _str;
	cin >> _str;
	reverse(_str.begin(), _str.end());
	while (_str.size() != 0) {
		bool _check_num;
		string s = get_str_val(_str, _check_num);
		if (_check_num)
            cout << s << ' ';
		else {
			if (s == "(" || _stack.empty()) {
				_stack.push(s[0]);
				continue;
			}
			if (s == ")") {
				while (_stack.top() != '(') {
					cout << _stack.top() << ' ';
					_stack.pop();
				}
				_stack.pop();
				continue;
			};
			if (check(s[0], _stack.top()) >= 0) _stack.push(s[0]);
			if (check(s[0], _stack.top()) < 0) {
				while (_stack.size() && _stack.top() != '('
                            && check(s[0], _stack.top()) < 0) {
					cout << _stack.top() << ' ';
					_stack.pop();
				}
				_stack.push(s[0]);
			}
		}
	}
	while (_stack.size()) {
		cout << _stack.top() << ' ';
		_stack.pop();
	}
	return 0;
}
