class Vector {
private:
	int n;
	double* v;
	friend class Matrix;
public:
	Vector();
	Vector(int newN);
	Vector(Vector& newVector);
	~Vector();
	void Nhap();
	void Xuat();
	void setVector(int vitri, double value);
};

