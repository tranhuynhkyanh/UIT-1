#include "SoPhuc.h"
#include <iostream>

using namespace std;

int main() {
    SoPhuc a, b;
    cout << "[=> Nhap so phuc a:\n";
    cin >> a;
    cout << "[=> So phuc a: " << a;
    b = a;
    b++;
    ++b;
    b--;
    --b;
    cout << "[=> So phuc b: " << b;
    return 0;
}