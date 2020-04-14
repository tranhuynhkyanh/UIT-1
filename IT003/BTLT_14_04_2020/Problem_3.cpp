#include <bits/stdc++.h>

using namespace std;

int head = 0, tail = -1, _count = -1;
int _queue[10101], _result[10101];

void print_step(){
    cout << "\t => QUEUE: ";
    for (int i=head; i<=tail; i++){
        cout << _queue[i] << " ";
    }
    cout << endl;
}

void enq(int x){
    tail++;
    _queue[tail] = x;
    cout << "enq(" << x << ")";
    print_step();
}

void deq(){
    _result[++_count] = _queue[head];
    head++;
    cout << "deq()";
    print_step();
}

int main(){
    enq(5);
    enq(3);
    deq();
    enq(2);
    enq(8);
    deq();
    enq(9);
    enq(1);
    deq();
    enq(7);
    enq(6);
    deq();
    deq();
    enq(4);
    deq();
    deq();
    cout << "=> RESULT: ";
    for (int i=0; i<=_count; i++){
        cout << _result[i];
    }
    return 0;
}
