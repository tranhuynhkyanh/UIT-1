#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

string _str;
pair <string,int> s[1000];

bool check(string& f, int& i) {
	bool ans = true;
	rep(j,1,i) {
		if (s[j].first == f) {
			s[j].second++;
			ans = false;
		}
	}
	return ans;
}

int main() {
	int i = 1;
	getline(cin, _str);
	if (_str.length() == 0) cout << "Chuoi rong.";
	else{
		while (!_str.empty()){
			int tmp = _str.find(" ", 0);
			if (tmp == -1)
				tmp = _str.length();
			string f = _str.substr(0, tmp);
			if (check(f, i) == true) {
				s[i].first = f;
				s[i].second = 1;
				i++;
			}
			_str = _str.erase(0, tmp + 1);
		}
	}
	rep(j,1,i - 1)
		cout << s[j].first << ": " << s[j].second << endl;
	return 0;
}
