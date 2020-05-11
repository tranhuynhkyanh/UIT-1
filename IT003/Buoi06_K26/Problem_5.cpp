/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;

class data{
private:
    int x;
    static int assignment_count;
    static int n;
public:

    friend ostream& operator<<(ostream &os, const data& a);
    friend istream& operator>>(istream &os, data& a)    ;
    static void set_n(int n){
        if (data::n == 0) data::n = n;
        else cout << "WRONG";
    }
    data& operator=(const data& a){
        assignment_count++;
        if (assignment_count > 3* data::n){
            cout << "WRONG";
        }
        this->x = a.x;
        return *this;
    }

    bool operator<(const data& a){
        return this->x < a.x;
    }
};
int data::assignment_count = 0;
int data::n = 0;

ostream& operator<<(ostream &os, const data& a){
    return os << a.x;
}
istream& operator>>(istream &os, data& a){
    return os >> a.x;
}


//###INSERT CODE HERE -

void _swap(data &a, data &b){
    data _tmp = a;
    a = b;
    b = _tmp;
}

void select_sort(data* arr, int n){
    for (int i = 0; i < n-1; i++){
        int min_pos = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min_pos])
            min_pos = j;
        _swap(arr[min_pos], arr[i]);
    }
}


int main(){
    int n;
    cin >> n;
    data::set_n(n);

    data *A = new data[n];
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    select_sort(A, n);

    for(int i = 0; i < n; i++){
        cout << A[i] << " " ;
    }
}
