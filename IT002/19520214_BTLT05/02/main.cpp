#include "Vector.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

int main() {
	Vector a;
	a.Nhap();
	a.Xuat();
	Matrix b;
	b.Nhap();
	b.Xuat();
	Matrix tmp;
	tmp.Vector_Cong_Matrix(a, b);
	tmp.Vector_Nhan_Matrix(a, b);
	return 0;
}