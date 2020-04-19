#include "Matrix.h"
#include "Vector.h"
#include <iostream>

using namespace std;

Matrix::Matrix() {
	this->m = 0;
	this->n = 0;
	f = nullptr;
}

Matrix::Matrix(Matrix& newMatrix) {
	this->m = newMatrix.m;
	this->n = newMatrix.n;
	f = new double* [m];
	for (int i = 0; i < m; i++) 
		this->f[i] = new double[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			this->f[i][j] = newMatrix.f[i][j];
}

Matrix::~Matrix() {
	if (f == nullptr)
		return;
	for (int i = 0; i < m; i++) {
		delete[] f[i];
		f[i] = nullptr;
	}
	delete[] f;
	f = nullptr;
}

void Matrix::Nhap() {
	cout << "[=> Nhap matrix: " << endl;
	cout << "- Nhap so dong: ";
	cin >> this->m;
	cout << "- Nhap so cot: ";
	cin >> this->n;
	this->f = new double* [m];
	for (int i = 0; i < m; i++)
		this->f[i] = new double[n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << " + f[" << i << "][" << j << "] = ";
			cin >> this->f[i][j];
		}
	}
}

void Matrix::Xuat() {
	cout << "[=> Matrix: " << endl;
	for (int i = 0; i < m; i++) {
		cout << "\t";
		for (int j = 0; j < n; j++) {
			cout << this->f[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void Matrix::setMatrix(int x, int y, double value) {
	if ((x > -1) && (y > -1) && (x < this->m) && (y < this->n))
		this->f[x][y] = value;
}