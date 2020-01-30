#include <bits/stdc++.h>

using namespace std;

string tram(int &a, int &b, int &c){
    string _result;
    switch (a){
        case 1:
            _result = "mootj tram ";
            break;
        case 2:
            _result = "hai tram ";
            break;
        case 3:
            _result = "ba tram ";
            break;
        case 4:
            _result = "bon tram ";
            break;
        case 5:
            _result = "nam tram ";
            break;
        case 6:
            _result = "sau tram ";
            break;
        case 7:
            _result = "bay tram ";
            break;
        case 8:
            _result = "tam tram ";
            break;
        case 9:
            _result = "chin tram ";
            break;
    }
    return _result;
}

string chuc(int &a, int &b, int &c){
    string _result;
    switch (b){
        case 0:
            if ((a != 0) && (c != 0)) _result = "le ";
            break;
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

string donvi(int &a, int &b, int &c){
    string _result;
    switch (c){
        case 0:
            if ((a == 0) && (b == 0)) return "khong";
            break;
        case 1:
            if (b <= 1) _result = "mootj";
                else _result = "moots";
            break;
        case 2:
            _result = "hai";
            break;
        case 3:
            _result = "ba";
            break;
        case 4:
            if (b <= 1) _result = "bon";
                else _result = "tu";
            break;
        case 5:
            if (b == 0) _result = "nam";
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
    int a,b,c;
    cin >> a >> b >> c;
    cout << tram(a,b,c) << chuc(a,b,c) << donvi(a,b,c);
    return 0;
}
