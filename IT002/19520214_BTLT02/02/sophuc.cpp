#include "sophuc.h"

void NhapSoPhuc(SOPHUC &SoPhuc) {
   cout << " + Phan thuc: ";
   cin >> SoPhuc.PhanThuc;
   cout << " + Phan ao: ";
   cin >> SoPhuc.PhanAo;
}

void XuatSoPhuc(SOPHUC SoPhuc) {
    cout << SoPhuc.PhanThuc;
    if (SoPhuc.PhanAo < 0)
        cout << " - " << abs(SoPhuc.PhanAo) << "i";
    else if (SoPhuc.PhanAo > 0)
        cout << " + " << abs(SoPhuc.PhanAo) << "i";
    cout << endl;
}

SOPHUC CongSoPhuc(SOPHUC SoPhuc1, SOPHUC SoPhuc2) {
    SOPHUC KetQua;
    KetQua.PhanThuc = SoPhuc1.PhanThuc + SoPhuc2.PhanThuc;
    KetQua.PhanAo = SoPhuc1.PhanAo + SoPhuc2.PhanAo;
    return KetQua;
}

SOPHUC TruSoPhuc(SOPHUC SoPhuc1, SOPHUC SoPhuc2) {
    SOPHUC KetQua;
    KetQua.PhanThuc = SoPhuc1.PhanThuc - SoPhuc2.PhanThuc;
    KetQua.PhanAo = SoPhuc1.PhanAo - SoPhuc2.PhanAo;
    return KetQua;
}