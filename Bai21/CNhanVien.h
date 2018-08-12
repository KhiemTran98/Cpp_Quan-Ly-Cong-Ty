#include<string>
using namespace std;
class CNhanVien
{
private:
	string Ten;
	double Luong, PhuCap;
public:
	~CNhanVien();
	void Nhap();
	void Xuat();
	double GetPhuCap();
	double TinhTienThue();
	double TinhThucLanh();
	double TinhTongTien();
};