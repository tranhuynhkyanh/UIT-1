#include <bits/stdc++.h>

using namespace std;

int check(char c){
    if (c == '(' || c == ')') return -1;
    if (c == '+' || c == '-' || c == '*' || c == '/') return 0;
    return 1;
}

void print_char(char c){
    if (c == '('){
        cout << "( open_parenthesis" << endl;
        return;
    }
    if (c == ')'){
        cout << ") close_parenthesis" << endl;
        return;
    }
    if (c == '+'){
        cout << "+ operator" << endl;
        return;
    }
    if (c == '-'){
        cout << "- operator" << endl;
        return;
    }
    if (c == '*'){
        cout << "* operator" << endl;
        return;
    }
    if (c == '/'){
        cout << "/ operator" << endl;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s;
    cin >> s;
    while (s.length() != 0){
        if (check(s[0]) == -1 || check(s[0]) == 0) {
            print_char(s[0]);
            s.erase(s.begin());
        } else {
            while (check(s[0]) == 1 && s.length() != 0){
                cout << s[0];
                s.erase(s.begin());
            }
            cout << " operand" << endl;
        }
    }
    return 0;
}
