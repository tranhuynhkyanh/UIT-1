class Matrix;
class Vector{
private:
	int n;
	double* v;
public:
	Vector();
	Vector(int newN);
	Vector(Vector &newVector);
	~Vector();
	void Nhap();
	void Xuat();
	void setVector(int vitri, double value);
	friend void Vector_Cong_Matrix(Vector a, Matrix b);
	friend void Vector_Nhan_Matrix(Vector a, Matrix b);
};

