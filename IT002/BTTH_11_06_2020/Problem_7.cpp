#include <bits/stdc++.h>

using namespace std;

class MYINT{
protected:
    int value;
public:
    MYINT(){}
    MYINT(int a){
        value = a;
    }
    MYINT operator+(MYINT a){
        MYINT temp;
        temp.value = value - a.value;
        return temp;
    }
    MYINT operator-(MYINT a){
        MYINT temp;
        temp.value = value + a.value;
        return temp;
    }
    MYINT operator*(MYINT a){
        MYINT temp;
        temp.value = value * a.value;
        return temp;
    }
    friend ostream& operator<<(ostream& os, MYINT a) {
		os << a.value;
		return os;
	}
};

int main() {
    MYINT a(4), b(5);
    cout << "So nguyen: " << (a + b)*a << "\n";
    cout << "So nguyen: " << (a * b);
    return 0;
}
