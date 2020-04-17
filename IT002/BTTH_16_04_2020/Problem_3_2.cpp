#include <bits/stdc++.h>

using namespace std;

float x, y, n;
int key;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> x >> y >> n;
    for (int i=1; i<=n; i++){
        cin >> key;
        switch (key){
            case 1:
                x = x*2;
                y = y*2;
                break;
            case 2:
                x = 0;
                y = 0;
                break;
            case 3:
                int check, d;
                cin >> check >> d;
                if (check == 0)
                    x = x + d;
                else
                    y = y + d;
                break;
        }
    }
    cout << "(" << x << "," << y << ")";
    return 0;
}
