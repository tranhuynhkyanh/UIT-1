#include "Vector.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

void Vector_Cong_Matrix(Vector a, Matrix b) {
	Vector result(a);
	if (b.m == 1 && b.n == a.n) {
		for (int i = 0; i < result.n; i++)
			result.v[i] += b.f[0][i];
		cout << "[=> Ket qua sau khi cong: " << endl;
		result.Xuat();
	} else
		cout << "[=> Khong the cong!" << endl;
}

void Vector_Nhan_Matrix(Vector a, Matrix b) {
	if (a.n != b.m)
		cout << "[=> Khong the nhan!" << endl;
	else {
		Vector result(b.n);
		for (int i = 0; i < b.n; i++) {
			result.v[i] = 0;
			for (int j = 0; j < a.n; j++)
				result.v[i] += a.v[j] * b.f[j][i];
		}
		cout << "[=> Ket qua sau khi nhan: " << endl;
		result.Xuat();
	}
}

int main() {
	Vector a;
	a.Nhap();
	a.Xuat();
	Matrix b;
	b.Nhap();
	b.Xuat();
	Vector_Cong_Matrix(a, b);
	Vector_Nhan_Matrix(a, b);
	return 0;
}