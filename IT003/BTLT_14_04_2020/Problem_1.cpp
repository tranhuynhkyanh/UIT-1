#include <bits/stdc++.h>

using namespace std;

string s, _result;
int top = -1;
char _stack[10101];

void print_step(){
    cout << "\t => STACK: ";
    for (int i=0; i<=top; i++){
        cout << _stack[i] << " ";
    }
    cout << endl;
}

void push(char x){
    top++;
    _stack[top] = x;
    cout << "push(" << x << ")";
    print_step();
}

void pop(char x){
    _result += _stack[top];
    top--;
    cout << "pop()";
    print_step();
}

int main(){
    cin >> s;
    for (int i=0; i<s.length(); i++){
        if (s[i] != '*')
            push(s[i]);
        else
            pop(s[i]);
    }
    cout << "=> RESULT: " << _result;
    return 0;
}
