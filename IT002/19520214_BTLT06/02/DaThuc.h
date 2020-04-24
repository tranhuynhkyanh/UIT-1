class DaThuc{
private:
	int BacCaoNhat;
	int SoMuDaThuc[101];
	int HeSoDaThuc[101];
public:
	void Nhap();
	void Xuat();
	void Xuat(int x);
	friend bool operator!=(DaThuc a, DaThuc b);
	friend DaThuc operator+(DaThuc a, DaThuc b);
	friend DaThuc operator-(DaThuc a, DaThuc b);
    friend DaThuc operator+(DaThuc a, int b);
	friend DaThuc operator-(DaThuc a, int b);
};

