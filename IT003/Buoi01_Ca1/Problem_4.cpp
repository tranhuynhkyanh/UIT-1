#include <bits/stdc++.h>

using namespace std;

#define max_n 2200

int n, a[max_n][max_n], _kq[3];

struct point{
    int x, y, u, v;
};

bool process(int x, int y, int u, int v){
    if (x == u){
        _kq[a[u][v]]++;
        return true;
    } else {
        int d3=(u-x+1)/3;
        vector<point> ptr{
            {x, y, x+d3-1, y+d3-1},
            {x, y+d3, x+d3-1, v-d3},
            {x, y+2*d3, x+d3-1, v},
            {x+d3, y, x+2*d3-1, y+d3-1},
            {x+d3, y+d3, x+2*d3-1, v-d3},
            {x+d3, y+2*d3, x+2*d3-1, v},
            {x+2*d3, y, u, y+d3-1},
            {x+2*d3, y+d3, u, v-d3},
            {x+2*d3, y+2*d3, u, v}
        };
        int _kq_tmp[3]={0, 0, 0};
        for(point &i:ptr){
            if(process(i.x, i.y, i.u, i.v))
                _kq_tmp[a[i.x][i.y]]++;
        }
        if(_kq_tmp[0]==9 || _kq_tmp[1]==9 || _kq_tmp[2]==9){
            _kq[a[x][y]]-=8;
            return true;
        } else
            return false;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    }
    process(1,1,n,n);
    cout << _kq[0] << "\n" << _kq[1] << "\n" << _kq[2];
    return 0;
}
