#include<iostream>
#include"CCongTy.h"
using namespace std;
CCongTy::~CCongTy()
{
	for (int i = 0; i < SoNV; i++)
		delete NV[i];
	delete[] NV;
}
void CCongTy::Nhap()
{
	cout << "Nhap so nhan vien: ";
	cin >> SoNV;
	NV = new CNhanVien*[SoNV];
	for (int i = 0; i < SoNV; i++)
	{
		cout << "\nNhap nhan vien thu " << i + 1 << endl;
		NV[i] = new CNhanVien();
		NV[i]->Nhap();
	}
}
void CCongTy::Xuat()
{
	for (int i = 0; i < SoNV; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << endl;
		NV[i]->Xuat();
	}
}
int CCongTy::DemNVKhongPhuCap()
{
	int d = 0;
	for (int i = 0; i < SoNV; i++)
		if (NV[i]->GetPhuCap() == 0)
			d++;
	return d;
}
CNhanVien* CCongTy::TimNVThucLanhThapNhat()
{
	if (SoNV <= 0)
		return NULL;
	CNhanVien* nv = NV[0];
	for (int i = 1; i < SoNV; i++)
		if (NV[i]->TinhThucLanh() < nv->TinhThucLanh())
			nv = NV[i];
	return nv;
}
int CCongTy::DemNVCoThucLanhLonHonBangX(double x)
{
	int d = 0;
	for (int i = 0; i < SoNV; i++)
		if (NV[i]->TinhThucLanh() >= x)
			d++;
	return d;
}
double CCongTy::TinhTongTienCongTyChi()
{
	double tong = 0;
	for (int i = 0; i < SoNV; i++)
		tong += NV[i]->TinhTongTien();
	return tong;
}
void CCongTy::SapXepNVTangDanTheoThucLanh()
{
	for (int i = 0; i < SoNV - 1; i++)
		for (int j = i + 1; j < SoNV; j++)
			if (NV[i]->TinhThucLanh() > NV[j]->TinhThucLanh())
			{
				CNhanVien* nv = NV[i];
				NV[i] = NV[j];
				NV[j] = nv;
			}
}