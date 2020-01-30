#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)


string _str,arr_str[100],arr_str_done[100];
char chuoi[10101];

void XoaDauChuoiVaThayDauCach(char *_str){
    //Xoa ki tu dau
    while(_str[0] == ' ' || _str[0] == '.' || _str[0] == ','){
        rep(i,0,strlen(_str)-1) _str[i] = _str[i + 1];
        _str[strlen(_str) - 1] = '\0';
    }
    //Thay khoang trang thua bang '#'
    rep(i,0,strlen(_str))
        if (_str[i] == (_str[i+1]))
            _str[i] = '#';
}

bool CheckTieng(string s){
    if (isupper(s[0])) return true;
    return false;
}

bool CheckTen(string s){
    int pt = 0;
    string s_arr[100];
    while (!s.empty()){
			int tmp = s.find(" ", 0);
			if (tmp == -1)
				tmp = s.length();
			string f = s.substr(0, tmp);
			s = s.erase(0, tmp + 1);
            s_arr[pt++] = f;
    }
    if (pt < 2) return false;
    return true;
}

void XoaDau(string &s){
    int vitridauphay = s.find("," , 0);
    int vitridaucham = s.find("." , 0);
    if (vitridauphay>0) s.erase(vitridauphay,s.length()-vitridauphay);
    if (vitridaucham>0) s.erase(vitridaucham,s.length()-vitridaucham);
    //Thay dau '#' thanh khoang cach
    rep(i,0,s.length()){
        if (s[i] == '#') s[i] = ' ';
    }
}

int main(){
    cin.get(chuoi,10101);
    XoaDauChuoiVaThayDauCach(chuoi);
    rep(i,0,strlen(chuoi))
        _str += chuoi[i];
    if (_str.length() == 0){
        cout << "Chuoi rong.";
    } else {
        int spt = 0;
        while (!_str.empty()){
			int tmp = _str.find(" ", 0);
			if (tmp == -1)
				tmp = _str.length();
			string f = _str.substr(0, tmp);
			_str = _str.erase(0, tmp + 1);
            arr_str[spt++] = f;
		}

//		cout << arr_str[] << endl;
		int vt = 0, dem = 0;
		while (vt < spt){
		    string tmp;
            rep(i,vt,spt){
                if (CheckTieng(arr_str[i])){
                    tmp += arr_str[i] + " ";
                    vt++;
                    if (CheckTen(tmp))
                        arr_str_done[dem] = tmp;
                } else{
                    vt++;
                    break;
                }
            }
            if (!arr_str_done[dem].empty()) dem++;
		}
		rep(i,0,dem){
		    XoaDau(arr_str_done[i]);
            cout << arr_str_done[i] << endl;
		}
    }
    return 0;
}
