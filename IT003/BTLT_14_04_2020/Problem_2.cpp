#include <bits/stdc++.h>

using namespace std;

int top = -1, _count = -1;
int _stack[10101], _result[10101];

void print_step(){
    cout << "\t => STACK: ";
    for (int i=0; i<=top; i++){
        cout << _stack[i] << " ";
    }
    cout << endl;
}

void push(int x){
    top++;
    _stack[top] = x;
    cout << "push(" << x << ")";
    print_step();
}

void pop(){
    _count++;
    _result[_count] = _stack[top];
    top--;
    cout << "pop()";
    print_step();

}

int main(){
    push(5);
    push(3);
    pop();
    push(2);
    push(8);
    pop();
    pop();
    pop();
    push(9);
    push(1);
    pop();
    push(7);
    push(6);
    pop();
    pop();
    push(4);
    pop();
    pop();
    cout << "=> RESULT: ";
    for (int i=0; i<=_count; i++){
        cout << _result[i];
    }
    return 0;
}
