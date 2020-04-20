#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

bool _CheckNgoac(string _s){
    stack<char> _stack;
    for (int i = 0; i < _s.length(); i++)
        if (_s[i] == '{' || _s[i] == '[' || _s[i] == '(')
            _stack.push(_s[i]);
        else {
            if (_stack.empty())
                return false;
            else {
                if (_s[i] == '}' && _stack.top() != '{')
                    return false;
                if (_s[i] == ']' && _stack.top() != '[')
                    return false;
                if (_s[i] == ')' && _stack.top() != '(')
                    return false;
                _stack.pop();
            }
        }
    if (!_stack.empty()) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string _s;
    do {
        cin >> _s;
        if ((_s) == "END") exit;
        else {
            if (_CheckNgoac(_s))
                cout << "TRUE" << endl;
            else
                cout << "FALSE" << endl;
        }
    } while (_s != "END");
    return 0;
}
