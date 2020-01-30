#include <bits/stdc++.h>

using namespace std;

#define repdown(i,a,b) for(int i=a; i>=b; i--)

string _str;

int main(){
    getline(cin, _str);
	if (_str.length() == 0){
        cout << "Chuoi rong.";
	} else {
	    while (!_str.empty()){
			int tmp = _str.find(" ", 0);
			if (tmp == -1)
				tmp = _str.length();
			string f = _str.substr(0, tmp);
			_str = _str.erase(0, tmp + 1);
			repdown(i,f.length()-1,0)
                cout << f[i];
            cout << " ";
		}
	}
    return 0;
}
