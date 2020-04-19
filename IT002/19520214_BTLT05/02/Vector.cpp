#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector() {
	this->n = 0;
	this->v = nullptr;
}

Vector::Vector(int newN) {
	this->n = newN;
	this->v = new double[n];
}

Vector::Vector(Vector& newVector) {
	this->n = newVector.n;
	this->v = new double[n];
	for (int i = 0; i < n; i++) {
		this->v[i] = newVector.v[i];
	}
}

Vector::~Vector() {
	if (this->v != nullptr)
		delete[] this->v;
}

void Vector::Nhap() {
	cout << "[=> Nhap vector: " << endl;
	cout << "- Nhap so phan tu vector: ";
	cin >> this->n;
	this->v = new double[n];
	for (int i = 0; i < n; i++) {
		cout << " + v[" << i << "] = ";
		cin >> this->v[i];
	}
}

void Vector::Xuat() {
	cout << "[=> Vector: ";
	cout << "(";
	for (int i = 0; i < n - 1; i++) {
		cout << this->v[i] << ",";
	}
	cout << v[n - 1] << ")";
	cout << endl << endl;
}

void Vector::setVector(int vitri, double value) {
	if (vitri < this->n && vitri > -1)
		this->v[vitri] = value;
}
