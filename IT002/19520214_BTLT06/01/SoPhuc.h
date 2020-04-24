class SoPhuc{
private:
	float fThuc;
	float fAo;
public:
	SoPhuc();
	SoPhuc(float newThuc);
	SoPhuc(SoPhuc &newSoPhuc);
	~SoPhuc();
	void Nhap();
	void Xuat();
	friend SoPhuc operator+(SoPhuc a, SoPhuc b);
	friend SoPhuc operator-(SoPhuc a, SoPhuc b);
	friend SoPhuc operator+(SoPhuc a, int b);
	friend SoPhuc operator-(SoPhuc a, int b);
};

