/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

//###INSERT CODE HERE -

int _stack[10101], _size = 0;

void print(){
    std::cout << "STACK: ";
    for (int i = _size-1; i >= 0; i--)
        std::cout << _stack[i] << " ";
    std::cout << "\n";
}

void push(int x){
    _stack[_size] = x;
    _size++;
    std::cout << "pushed" << "\n";
}

void pop(){
    if (_size == 0)
        std::cout << "EMPTY" << "\n";
    else {
        std::cout << _stack[_size-1] << "\n";
        _size--;
    }
}

void peek(){
    if (_size == 0)
        std::cout << "EMPTY" << "\n";
    else
        std::cout << _stack[_size-1] << "\n";
}

int main(){
    int key, n;
    do {
        std::cin >> key;
        switch(key){
            case 1:
                std::cin >> n;
                push(n);
                print();
                break;
            case 2:
                pop();
                print();
                break;
            case 3:
                peek();
                print();
                break;
        }
    } while (key != 4);
    return 0;
}
