#include <bits/stdc++.h>

using namespace std;

string nghin(int &a, int &b, int &c, int &d){
    string _result;
    switch (a){
        case 1:
            _result = "mootj nghin ";
            break;
        case 2:
            _result = "hai nghin ";
            break;
        case 3:
            _result = "ba nghin ";
            break;
        case 4:
            _result = "bon nghin ";
            break;
        case 5:
            _result = "nam nghin ";
            break;
        case 6:
            _result = "sau nghin ";
            break;
        case 7:
            _result = "bay nghin ";
            break;
        case 8:
            _result = "tam nghin ";
            break;
        case 9:
            _result = "chin nghin ";
            break;
    }
    return _result;
}

string tram(int &a, int &b, int &c, int &d){
    string _result;
    switch (b){
        case 0:
            if (((a != 0) && (c != 0))
                || ((a != 0) && (d != 0))) _result = "khong tram ";
            break;
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

string chuc(int &a, int &b, int &c, int &d){
    string _result;
    switch (c){
        case 0:
            if (((b !=0) && (d !=0 )) || ((a != 0) && (d!=0))) _result = "le ";
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

string donvi(int &a, int &b, int &c, int &d){
    string _result;
    switch (d){
        case 0:
            if ((a == 0) && (b == 0) && (c == 0)) return "khong";
            break;
        case 1:
            if (c <= 1) _result = "mootj";
                else _result = "moots";
            break;
        case 2:
            _result = "hai";
            break;
        case 3:
            _result = "ba";
            break;
        case 4:
            if (c <= 1) _result = "bon";
                else _result = "tu";
            break;
        case 5:
            if (c == 0) _result = "nam";
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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << nghin(a,b,c,d) << tram(a,b,c,d) << chuc(a,b,c,d) << donvi(a,b,c,d);
    return 0;
}
