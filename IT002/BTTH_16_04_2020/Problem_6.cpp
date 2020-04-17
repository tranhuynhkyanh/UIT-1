#include <bits/stdc++.h>

using namespace std;

vector<double> a;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, vitri;
    double x, y;
    do{
        cin >> n;
        switch (n){
            case 0:
                cin >> x;
                a.push_back(x);
                break;
            case 1:
                cin >> x;
                if (a.size() != 0)
                    for(int i=0; i<a.size(); i++){
                        if (a[i] == x){
                            a.erase(a.begin() + i);
                            break;
                        }
                    }
                break;
            case 2:
                cin >> x;
                if (a.size() != 0)
                    for(int i=0; i<a.size(); i++){
                        if (a[i] == x){
                            a.erase(a.begin() + i);
                        }
                    }
                break;
            case 3:
                cin >> vitri >> y;
                if (vitri > -1 && vitri <a.size()){
                    a[vitri] = y;
                }
                break;
        }
    } while (n != -1);
    if (a.size() == 0){
        cout << "[]";
    } else {
        cout << "[";
        for (int i=0; i<a.size()-1; i++){
                cout << a[i] << ",";
        }
        cout << a[a.size()-1] << "]";
    }
    return 0;
}
