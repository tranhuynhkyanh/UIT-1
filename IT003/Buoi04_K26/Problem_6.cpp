/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

//###INSERT CODE HERE -

int _queue[10101], _size = 0;

void print(){
    std::cout << "QUEUE: ";
    for (int i = 0; i < _size; i++)
        std::cout << _queue[i] << " ";
    std::cout << "\n";
}

void push(int x){
    _queue[_size] = x;
    _size++;
    std::cout << "pushed" << "\n";
}

void pop(){
    if (_size == 0)
        std::cout << "EMPTY" << "\n";
    else {
        std::cout << _queue[0] << "\n";
        for (int i = 0; i < _size - 1; i++)
            _queue[i] = _queue[i+1];
        _size--;
    }
}

void peek(){
    if (_size == 0)
        std::cout << "EMPTY" << "\n";
    else
        std::cout << _queue[0] << "\n";
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
