#include<iostream>
#include"CNhanVien.h"
using namespace std;
CNhanVien::~CNhanVien() {}
void CNhanVien::Nhap()
{
	cout << " Nhap ten: ";
	cin.ignore();
	getline(cin, Ten);
	cout << " Nhap luong: ";
	cin >> Luong;
	cout << " Nhap phu cap: ";
	cin >> PhuCap;
}
void CNhanVien::Xuat()
{
	cout << " Ten: " << Ten << endl;
	cout << " Luong: " << Luong << endl;
	cout << " Phu cap: " << PhuCap << endl;
}
double CNhanVien::GetPhuCap()
{
	return PhuCap;
}
double CNhanVien::TinhTienThue()
{
	if (Luong <= 9000000 && Luong >= 5000000)
		return Luong / 100 * 5;
	if (Luong > 9000000)
		return Luong / 100 * 10;
	return 0;
}
double CNhanVien::TinhThucLanh()
{
	double Thue = TinhTienThue();
	return Luong + PhuCap - Thue;
}
double CNhanVien::TinhTongTien()
{
	double Thue = TinhTienThue();
	return Luong + PhuCap + Thue;
}