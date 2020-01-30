#include <bits/stdc++.h>

using namespace std;


string chuc(int &a){
    string _result;
    switch (a){
        case 1:
            _result = "muoiwf ";
            break;
        case 2:
            _result = "hai muoiw ";
            break;
        case 3:
            _result = "ba muoiw ";
            break;
        case 4:
            _result = "bon muoiw ";
            break;
        case 5:
            _result = "nam muoiw ";
            break;
        case 6:
            _result = "sau muoiw ";
            break;
        case 7:
            _result = "bay muoiw ";
            break;
        case 8:
            _result = "tam muoiw ";
            break;
        case 9:
            _result = "chin muoiw ";
            break;
    }
    return _result;
}

string donvi(int &a, int &b){
    string _result;
    switch (b){
        case 0:
            if (a == 0) return "khong";
            break;
        case 1:
            if (a <= 1) _result = "mootj";
                else _result = "moots";
            break;
        case 2:
            _result = "hai";
            break;
        case 3:
            _result = "ba";
            break;
        case 4:
            if (a <= 1) _result = "bon";
                else _result = "tu";
            break;
        case 5:
            if (a == 0) _result = "nam";
                else _result = "lam";
            break;
        case 6:
            _result = "sau";
            break;
        case 7:
            _result = "bay";
            break;
        case 8:
            _result = "tam";
            break;
        case 9:
            _result = "chin";
            break;
    }
    return _result;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << chuc(a) << donvi(a,b);
    return 0;
}
