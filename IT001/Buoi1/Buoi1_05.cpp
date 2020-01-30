#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=a; i<=b; i++)

int main(){
    int n;
    cin >> n;
    FOR(i,1,4) cout << n << " ";
    cout << endl;
    FOR(i,1,3){
        cout << n << "    " << n << endl;
    }
    FOR(i,1,4) cout << n << " ";
    return 0;
}
