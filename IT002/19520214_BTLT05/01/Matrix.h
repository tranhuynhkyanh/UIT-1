class Vector;
class Matrix{
private:
	int m, n;
	double **f;
public:
	Matrix();
	Matrix(Matrix& newMatrix);
	~Matrix();
	void Nhap();
	void Xuat();
	void setMatrix(int x, int y, double value);
	friend void Vector_Cong_Matrix(Vector a, Matrix b);
	friend void Vector_Nhan_Matrix(Vector a, Matrix b);
};

