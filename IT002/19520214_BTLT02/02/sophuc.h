#include <iostream>

using namespace std;

struct SOPHUC {
    float PhanThuc;
    float PhanAo;
};

void NhapSoPhuc(SOPHUC &SoPhuc);
void XuatSoPhuc(SOPHUC SoPhuc);
SOPHUC CongSoPhuc(SOPHUC SoPhuc1, SOPHUC SoPhuc2);
SOPHUC TruSoPhuc(SOPHUC SoPhuc1, SOPHUC SoPhuc2);