#pragma once
#include "HinhHoc.h"
#include "HinhChuNhat.h"
#include "HinhElip.h"
#include "hinhTron.h"
#include "HinhVuong.h"
class tapHopHinh
{
private:
	int soLuong;
	HinhHoc** dsHinh;
public:
	tapHopHinh()
	{
		this->soLuong = 1;
		dsHinh = new HinhHoc * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			dsHinh[i] = NULL;
		}
	}
	~tapHopHinh()
	{
		for (int i = 0; i < this->soLuong; i++)
		{
			delete dsHinh[i];
		}
		delete[]dsHinh;
	}
	void nhap()
	{
		cout << "nhap so luong: ";
		cin >> this->soLuong;
		dsHinh = new HinhHoc*[this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = "";
			cout << "nhap loai hinh: \n1.elip 2.hinhtron 3.hinhchunhat 4.hinhvuong\n";
			cin.ignore();
			getline(cin, loai);
			if (loai == "1")
			dsHinh[i] = new HinhElip;
	   else if (loai == "2")
			dsHinh[i] = new hinhTron;
	   else if (loai == "3")
			dsHinh[i] = new HinhChuNhat;
	   else if (loai == "4")
			dsHinh[i] = new HinhVuong;
			dsHinh[i]->nhap();
		}
	}
	void xuat()
	{
		for (int i = 0; i < soLuong; i++)
		{
			dsHinh[i]->xuat();
		}
	}
};

