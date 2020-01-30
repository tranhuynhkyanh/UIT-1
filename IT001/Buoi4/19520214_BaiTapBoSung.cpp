#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<=b; i++)

long long n, f[1000000],f2[1000000];
int key;
bool KeyCheck = false;

void InMenu();
void NhapMang();
void XuatMang();
void TinhTong();
void DemChan();
bool CheckNguyenTo(long long n);
void TinhTongNguyenTo();
void InViTriSoLe();
void TimGiaTriLonNhat();
void TimSoChanDauTien();
long long CheckUCLN(long long a, long long b);
void TimUCLN();
void TimSoNguyenToNhoNhatLonHonMax();
void LietKeGiaTriXuatHienMotLan();
void LietKeThoaDieuKien();
void TimGiaTriAmDauTien();
void TimGiaTriAmLonNhat();
void XapXepLeTangDan();
void NhapLuaChon();
void ChooseCase(int key);

int main(){
    InMenu();
    NhapLuaChon();
    return 0;
}

void NhapLuaChon(){
    cout << "Nhap chuc nang (1 - 15): ";
    cin >> key;
    if (!KeyCheck && key != 1){
        do
        {
            if (key < 1 || key > 15){
                KeyCheck = false;
                system("cls");
                InMenu();
                NhapLuaChon();
            }
            cout << "Ban chua nhap mang! Vui long chon so 1!" << endl;
            cout << "Nhap chuc nang (1 - 15): ";
            cin >> key;
            KeyCheck = true;
        } while (key != 1);
        ChooseCase(key);
    } else ChooseCase(key);
}

void ChooseCase(int key){
    switch (key)
    {
        case 1:
        {
            NhapMang();
            NhapLuaChon();
            break;
        }
        case 2:
        {
            XuatMang();
            NhapLuaChon();
            break;
        }
        case 3:
        {
            TinhTong();
            NhapLuaChon();
            break;
        }
        case 4:
        {
            DemChan();
            NhapLuaChon();
            break;
        }
        case 5:
        {
            TinhTongNguyenTo();
            NhapLuaChon();
            break;
        }
        case 6:
        {
            InViTriSoLe();
            NhapLuaChon();
            break;
        }
        case 7:
        {
            TimGiaTriLonNhat();
            NhapLuaChon();
            break;
        }
        case 8:
        {
            TimSoChanDauTien();
            NhapLuaChon();
            break;
        }
        case 9:
        {
            TimUCLN();
            NhapLuaChon();
            break;
        }
        case 10:
        {
            TimSoNguyenToNhoNhatLonHonMax();
            NhapLuaChon();
            break;
        }
        case 11:
        {
            LietKeGiaTriXuatHienMotLan();
            NhapLuaChon();
            break;
        }
        case 12:
        {
            LietKeThoaDieuKien();
            NhapLuaChon();
            break;
        }
        case 13:
        {
            TimGiaTriAmDauTien();
            NhapLuaChon();
            break;
        }
        case 14:
        {
            TimGiaTriAmLonNhat();
            NhapLuaChon();
            break;
        }
        case 15:
        {
            XapXepLeTangDan();
            NhapLuaChon();
            break;
        }
        default:
        {
            KeyCheck = false;
            system("cls");
            InMenu();
            NhapLuaChon();
        }
    }
    return;
}

void InMenu(){
    system("color a");
    cout << "=================================================== MENU ===================================================" << endl;
    cout << "1.  Nhap mang mot chieu cac so nguyen." << endl;
    cout << "2.  Xuat mang." << endl;
    cout << "3.  Tinh tong tat ca cac phan tu trong mang." << endl;
    cout << "4.  Dem so luong gia tri chan co trong mang." << endl;
    cout << "5.  Tinh tong tat ca cac so nguyen to co trong mang." << endl;
    cout << "6.  In ra vi tri cac phan tu co gia tri le trong mang." << endl;
    cout << "7.  Tim gia tri lon nhat trong mang." << endl;
    cout << "8.  Tim so chan dau tien trong mang cac so nguyen." << endl;
    cout << "9.  Tim uoc chung lon nhat cua tat ca cac phan tu trong mang." << endl;
    cout << "10. Tim so nguyen to nho nhat lon hon moi gia tri co trong mang." << endl;
    cout << "11. Liet ke cac gia tri xuat hien trong mang 1 chieu cac so nguyen dung 1 lan." << endl;
    cout << "12. Liet ke cac gia tri trong mang ma thoa dieu kien lon hon gia tri tuyet doi cua gia tri dung lien sau no." << endl;
    cout << "13. Tim gia tri am dau tien trong mang." << endl;
    cout << "14. Tim gia tri am lon nhat trong mang." << endl;
    cout << "15. Sap xep le tang dan nhung gia tri khac giu nguyen vi tri." << endl;
    cout << "============================================================================================================" << endl;
    return;
}

void NhapMang(){
    cout << "Nhap so luong phan tu mang (1 <= n <= 1000000): ";
    cin >> n;
    if (n < 1 || n > 1000000){
        do
        {
            cout << "Nhap sai so luong! Vui long nhap lai!" << endl;
            cout << "Nhap so luong phan tu mang (1 <= n <= 1000000): ";
            cin >> n;
        } while (n < 1 || n > 1000000);
    }
    fill(f, f+n, 0);
    rep(i, 0, n-1){
        cout << "Nhap phan tu thu " << (i+1) << ": ";
        cin >> f[i];
    }
    return;
}

void XuatMang(){
    cout << "Mang da nhap: ";
    rep(i, 0, n-1)
        cout << f[i] << " ";
    cout << endl;
    return;
}

void TinhTong(){
    long long sum = 0;
    rep(i, 0, n-1) sum += f[i];
    cout << "Tong tat ca cac phan tu trong mang: " << sum;
    cout << endl;
    return;
}

void DemChan(){
    long long sophantuchan = 0;
    rep(i, 0, n-1) if (f[i] % 2 == 0) sophantuchan++;
    cout << "So luong gia tri chan co trong mang: " << sophantuchan;
    cout << endl;
    return;
}

bool CheckNguyenTo(long long n){
    if (n == 1) return false;
    rep(i, 2, trunc(sqrt(n)))
        if (n % i == 0) return false;
    return true;
}

void TinhTongNguyenTo(){
    long long sum = 0;
    rep(i, 0, n-1)
        if (CheckNguyenTo(f[i])) sum += f[i];
    cout << "Tong tat ca cac so nguyen to trong mang: " << sum;
    cout << endl;
    return;
}

void InViTriSoLe(){
    bool CheckEmpty = true;
    cout << "Vi tri cac so le: ";
    rep(i, 0, n-1)
        if (f[i] % 2 == 1){
            cout << (i+1) << " ";
            CheckEmpty = false;
        }
    if (CheckEmpty) cout << "Khong tim thay!";
    cout << endl;
    return;
}

void TimGiaTriLonNhat(){
    long long giatrimax = f[0];
    rep(i, 1, n-1)
        if (f[i] > giatrimax) giatrimax = f[i];
    cout << "Gia tri lon nhat: " << giatrimax;
    cout << endl;
    return;
}

void TimSoChanDauTien(){
    long long sochandautien = -1;
    rep(i, 0, n-1)
        if (f[i] % 2 == 0){
            sochandautien = f[i];
            break;
        }
    if (sochandautien == -1)
        cout << "Error: -1 !!! Khong tim thay so chan trong mang!";
            else
                cout << "So chan dau tien trong mang: " << sochandautien;
    cout << endl;
    return;
}

long long CheckUCLN(long long a, long long b){
    if (a <= 0 || b <= 0) return -1;
    long long tmp = b % a;
    while (tmp != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void TimUCLN(){
    long long uocchung = CheckUCLN(f[0],f[1]);
    rep(i, 2, n-1) uocchung = CheckUCLN(uocchung,f[i]);
    cout << "Uoc chung lon nhat cua cac phan tu trong mang: ";
    if (uocchung == -1) cout << "Khong tim thay!"; else cout << uocchung;
    cout << endl;
    return;
}

void TimSoNguyenToNhoNhatLonHonMax(){
    long long giatrimax = f[0], socantim;
    rep(i, 1, n-1)
        if (f[i] > giatrimax) giatrimax = f[i];
    for(int j = giatrimax + 1; j > giatrimax; j++){
        if (CheckNguyenTo(j)){
            socantim = j;
            break;
        }
    }
    cout << "So nguyen to nho nhat lon hon moi gia tri trong mang: ";
    if (socantim == 0) cout << 2; else cout << socantim;
    cout << endl;
    return;
}

void LietKeGiaTriXuatHienMotLan(){
    rep(i,0,n-1) f2[i] = f[i];
    bool CheckEmpty = true;
    rep(i,0,n-2)
        rep(j,0,n-i-2)
            if (f2[j] > f2[j+1]) swap(f2[j],f2[j+1]);
    f2[n] = -LLONG_MAX;
    f2[-1] = LLONG_MAX;
    cout << "Gia tri xuat hien 1 lan: ";
    rep(i,0,n-1)
        if ((f2[i] != f2[i-1]) && (f2[i] != f2[i+1])){
                cout << f2[i] << " ";
                CheckEmpty = false;
        }
    if (CheckEmpty) cout << "Error: -1 !!! Khong tim thay so thoa dieu kien!";
    cout << endl;
    return;
}

void LietKeThoaDieuKien(){
    bool CheckEmpty = true;
    cout << "Gia tri trong mang lon hon tri tuyet doi so lien sau: ";
    rep(i,0,n-2)
        if (f[i] > abs(f[i+1])){
            cout << f[i];
            CheckEmpty = false;
        }
    if (CheckEmpty) cout << "Khong tim thay!";
    cout << endl;
    return;
}

void TimGiaTriAmDauTien(){
    bool CheckEmpty = true;
    cout << "Gia tri am dau tien trong mang: ";
    rep(i, 0, n-1)
        if (f[i] < 0){
            cout << f[i];
            CheckEmpty = false;
            break;
        }
    if (CheckEmpty) cout << "Error: -1 !!! Khong tim thay so am trong mang!";
    cout << endl;
    return;
}

void TimGiaTriAmLonNhat(){
    long long giatrimax = -LLONG_MAX;
    rep(i, 0, n-1)
        if (f[i] < 0 && f[i] > giatrimax){
            giatrimax = f[i];
        }
    cout << "Gia tri am lon nhat trong mang: ";
    if (giatrimax == -LLONG_MAX) cout << "Error: -1 !!! Khong tim thay so thoa yeu cau!";
        else cout << giatrimax;
    cout << endl;
    return;
}

void XapXepLeTangDan(){
    rep(i,0,n-1) f2[i] = f[i];
    rep(i,0,n-2)
        if(f2[i] % 2 != 0){
            rep(j,i+1,n-1)
                if(f2[j] % 2 != 0 && f2[i] > f2[j])
                    swap(f2[i],f2[j]);
        }
    cout << "Mang da xap xep: ";
    rep(i,0,n-1) cout << f2[i] << " ";
    cout << endl;
    return;
}
