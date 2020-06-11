#include <bits/stdc++.h>

using namespace std;

class Mau{
protected:
    int loai;
    int rh;
public:
    void Nhap(){
        cout << "Nhap nhom mau: 1 - O , 2 - A, 3 - B, 4 - AB: ";
        cin >> loai;
        cout << "Nhap loai mau: 1 - Rh+, 0 - Rh-: ";
        cin >> rh;
    }
    int getLoai(){
        return loai;
    }
    int getRh(){
        return rh;
    }
    int getViTriMeCha(){
        return loai - 1;
    }
    int getViTri(){
        return 2*loai + rh - 2;
    }
    string getTenMau(){
        string result = "";
        if (loai == 1) result = "O";
        if (loai == 2) result = "A";
        if (loai == 3) result = "B";
        if (loai == 4) result = "AB";
        if (rh == 0) result += '-';
        if (rh == 1) result += '+';
        return result;
    }
    string getTenXetNghiem(){
        if (loai == 1) return "O";
        if (loai == 2) return "A";
        if (loai == 3) return "B";
        return "AB";
    }
};

class O : public Mau{
public:
    O(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 1;
    }
};

class A : public Mau{
public:
    A(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 2;
    }
};

class B : public Mau{
public:
    B(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 3;
    }
};

class AB : public Mau{
public:
    AB(bool newRH){
        Mau::rh = newRH;
        Mau::loai = 4;
    }
};

string getTenMauVoiViTri(int vitri){
    int loai = (vitri / 2) + 1, rh;
    if (vitri % 2 == 0) rh = 0;
        else rh = 1;
    string result = "";
    if (loai == 1) result = "O";
    if (loai == 2) result = "A";
    if (loai == 3) result = "B";
    if (loai == 4) result = "AB";
    if (rh == 0) result += '-';
    if (rh == 1) result += '+';
    return result;
}

bool checkResult(int x, int y){
    bool table[8][8] = {{1,0,0,0,0,0,0,0},
                        {1,1,0,0,0,0,0,0},
                        {1,0,1,0,0,0,0,0},
                        {1,1,1,1,0,0,0,0},
                        {1,0,0,0,1,0,0,0},
                        {1,1,0,0,1,1,0,0},
                        {1,0,1,0,1,0,1,0},
                        {1,1,1,1,1,1,1,1}};
    return table[x][y];
}

class MauCon{
public:
    string arr[4];
};

bool checkHuyetThong(Mau cha, Mau me, Mau con){
    int vitricha = cha.getViTriMeCha();
    int vitrime = me.getViTriMeCha();
    string maucuacon = con.getTenXetNghiem();
    MauCon table[4][4] = {
        {{"O", "-", "-", "-"}, {"O", "A", "-", "-"},  {"O", "-", "B", "-"},  {"-", "A", "B", "-"}},
        {{"O", "A", "-", "-"}, {"O", "A", "-", "-"},  {"O", "A", "B", "AB"}, {"-", "A", "B", "AB"}},
        {{"O", "-", "B", "-"}, {"O", "A", "B", "AB"}, {"O", "-", "B", "-"},  {"-", "A", "B", "AB"}},
        {{"-", "A", "B", "-"}, {"-", "A", "B", "AB"}, {"-", "A", "B", "AB"}, {"-", "A", "B", "AB"}}
    };
    for(int i = 0; i < 4; i++)
        if (maucuacon == table[vitrime][vitricha].arr[i]) return true;
    return false;
}

int main(){
    Mau *mau[1010];
    int n, loaimau;
    bool loairh;
    cout << "YEU CAU 1\n";
    cout << "[=> Nhap so luong: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap nhom mau: 1 - O , 2 - A, 3 - B, 4 - AB: ";
        cin >> loaimau;
        cout << "Nhap loai mau: 1 - Rh+, 0 - Rh-: ";
        cin >> loairh;
        switch (loaimau){
            case 1:
                mau[i] = new O(loairh);
                break;
            case 2:
                mau[i] = new A(loairh);
                break;
            case 3:
                mau[i] = new B(loairh);
                break;
            case 4:
                mau[i] = new AB(loairh);
                break;
        }
    }
    cout << "YEU CAU 2\n";
    Mau cha, me, con;
    cout << "[=> Nhap mau cha: \n";
    cha.Nhap();
    cout << "[=> Nhap mau me: \n";
    me.Nhap();
    cout << "[=> Nhap mau con: \n";
    con.Nhap();
    cout << "[=> Ket qua xet nghiem: ";
    if (checkHuyetThong(cha, me, con))
        cout << "La con cua cha me!\n";
    else
        cout << "La con cua hang xom roi!!\n";
    cout << "YEU CAU 3\n";
    Mau maunhan;
    maunhan.Nhap();
    cout << "[=> Nhom mau co the cho nhom mau " << maunhan.getTenMau() << ": ";
    for(int i = 0; i < 8; i++){
        if (checkResult(maunhan.getViTri(), i))
            cout << getTenMauVoiViTri(i) << " ";
    }
    return 0;
}
