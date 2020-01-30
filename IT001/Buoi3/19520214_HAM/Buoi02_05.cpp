#include <bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

void xuat(string s);

int main(){
    int n;
    string s;
    cin >> n >> s;
    rep(i,1,n) xuat(s);
    return 0;
}

void xuat(string s){
    cout << "Minh yeu " << s << " nhieu lam!" << endl;
    return;
}
