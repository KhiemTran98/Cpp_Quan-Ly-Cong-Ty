#include"CNhanVien.h"
class CCongTy
{
private:
	CNhanVien* *NV;
	int SoNV;
public:
	~CCongTy();
	void Nhap();
	void Xuat();
	int DemNVKhongPhuCap();
	CNhanVien* TimNVThucLanhThapNhat();
	int DemNVCoThucLanhLonHonBangX(double x);
	double TinhTongTienCongTyChi();
	void SapXepNVTangDanTheoThucLanh();
};