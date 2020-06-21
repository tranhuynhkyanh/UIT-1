#include <iostream>
#include <string>

using namespace std;

class KhachHang{
protected:
    string sHoTen;
    long long llChungMinh;
    int iSoThangSuDung;
    int iGoiDichVu;
    int iPhiCoBan;
    int iHoTroPT;
public:
    void Nhap(){
        cout << "- Nhap ho ten: ";
        cin.ignore();
        getline(cin, sHoTen);
        cout << "- Nhap chung minh: ";
        cin >> llChungMinh;
        cout << "- Nhap so thang su dung: ";
        cin >> iSoThangSuDung;
    }
    int getSoThangSuDung(){
        return iSoThangSuDung;
    }
    virtual int getChiPhi() = 0;
    virtual void Xuat(){
        cout << sHoTen << " | " << llChungMinh << " | ";
    }
};

class Premium : public KhachHang {
protected:
    int iChiPhiLop;
    int iDichVuXongHoi;
public:
    Premium(){
        KhachHang::iGoiDichVu = 1;
        KhachHang::iPhiCoBan = 1000;
        KhachHang::iHoTroPT = 0;
        iChiPhiLop = 0;
        iDichVuXongHoi = 0;
    }
    int getChiPhi(){
        return iPhiCoBan;
    }
    void Xuat(){
        KhachHang::Xuat();
        cout << "Premium | ";
    }
};

class Basic : public KhachHang {
protected:
    int iChiPhiLop;
public:
    Basic(){
        KhachHang::iGoiDichVu = 2;
        KhachHang::iPhiCoBan = 500;
        KhachHang::iHoTroPT = 100;
        iChiPhiLop = 100;
    }
    int getChiPhi(){
        return iPhiCoBan + iHoTroPT + iChiPhiLop;
    }
    void Xuat(){
        KhachHang::Xuat();
        cout << "Basic | ";
    }
};

class NonMember : public KhachHang {
public:
    NonMember(){
        KhachHang::iGoiDichVu = 2;
        KhachHang::iPhiCoBan = 200;
        KhachHang::iHoTroPT = 200;
    }
    int getChiPhi(){
        return iPhiCoBan + iHoTroPT;
    }
    void Xuat(){
        KhachHang::Xuat();
        cout << "Non-Member | ";
    }
};

int main(){
    int soluong, loai, vt_max = 0;
    long long chiphi = 0, chiphimax = -1;
    cout << "** NHAP DANH SACH KHACH HANG\n";
    cout << "[=> Nhap so luong khach hang: ";
    cin >> soluong;
    KhachHang **kh;
    kh = new KhachHang * [soluong];
    for(int i = 0; i < soluong; i++){
        cout << "[=> Nhap khach hang thu " << i+1 << ": \n";
        cout << "- Nhap loai goi can mua (1_Premium, 2_Basic, 3_Non_member): ";
        cin >> loai;
        if (loai == 1){
            kh[i] = new Premium;
            kh[i]->Nhap();
        }
        if (loai == 2){
            kh[i] = new Basic;
            kh[i]->Nhap();
        }
        if (loai == 3){
            kh[i] = new NonMember;
            kh[i]->Nhap();
        }
    }
    cout << "** DANH SACH KHACH HANG\n";
    cout << "Ho va ten | Chung minh | Goi dich vu | So thang | Chi phi 1 thang | Tong chi phi \n";
    for(int i = 0; i < soluong; i++){
        kh[i]->Xuat();
        chiphi = kh[i]->getChiPhi() * 1000;
        cout << kh[i]->getSoThangSuDung() << " | ";
        cout << chiphi << " | ";
        cout << chiphi * kh[i]->getSoThangSuDung() << "\n";
        if (chiphimax < chiphi * kh[i]->getSoThangSuDung()){
            vt_max = i;
            chiphimax = chiphi * kh[i]->getSoThangSuDung();
        }
    }
    cout << "** KHACH HANG CHI NHIEU NHAT\n";
    kh[vt_max]->Xuat();
    chiphi = kh[vt_max]->getChiPhi() * 1000;
    cout << kh[vt_max]->getSoThangSuDung() << " | ";
    cout << chiphi << " | " << chiphimax << "\n";
    return 0;
}
