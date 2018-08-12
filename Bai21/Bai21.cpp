#include<iostream>
#include<conio.h>
#include"CCongTy.h"
using namespace std;
void main()
{
	CCongTy* x = new CCongTy();

	cout << "Nhap thong tin cong ty" << endl;
	x->Nhap();
	cout << "\nThong tin cong ty";
	x->Xuat();

	cout << "\nSo NV khong co phu cap: " << x->DemNVKhongPhuCap();

	CNhanVien* nvThucLanhThapNhat = x->TimNVThucLanhThapNhat();
	if (nvThucLanhThapNhat == NULL)
		cout << "\nKhong co nhan vien\n";
	else
	{
		cout << "\nNhan vien co thuc lanh thap nhat\n";
		nvThucLanhThapNhat->Xuat();
	}

	double tl;
	cout << "Nhap thuc lanh: ";
	cin >> tl;
	cout << "So NV co thuc lanh >= " << tl << ": " << x->DemNVCoThucLanhLonHonBangX(tl);

	cout << "\nTong tien cong ty phai chi: " << x->TinhTongTienCongTyChi();

	cout << "\nSap xep NV theo thuc lanh tang dan\n";
	x->SapXepNVTangDanTheoThucLanh();
	x->Xuat();
	
	delete x;

	_getch();
}