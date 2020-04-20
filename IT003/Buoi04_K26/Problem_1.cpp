#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int _stack[10101], _size = 0;

void push(int x){
    _stack[_size] = x;
    _size++;
}

void pop(){
    if (_size == 0)
        cout << "EMPTY" << endl;
    else {
        cout << _stack[_size-1] << endl;
        _size--;
    }
}

void peek(){
    if (_size == 0)
        cout << "EMPTY" << endl;
    else
        cout << _stack[_size-1] << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int key, n;
    do {
        cin >> key;
        switch(key){
            case 1:
                cin >> n;
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
        }
    } while (key != 4);
    return 0;
}
