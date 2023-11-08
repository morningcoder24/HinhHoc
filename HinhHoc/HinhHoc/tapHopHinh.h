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
			cout << "nhap loai hinh: ";
			getline(cin, loai);
			if (loai == "elip")
			dsHinh[i] = new HinhElip;
	   else if (loai == "hinhtron")
			dsHinh[i] = new hinhTron;
	   else if (loai == "chunhat")
			dsHinh[i] = new HinhChuNhat;
	   else if (loai == "hinhvuong")
			dsHinh[i] = new HinhVuong;
			hinh->nhap();
			this->dsHinh[i] = hinh;

		}
	}
};

