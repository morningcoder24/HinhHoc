#pragma once
#include "HinhChuNhat.h"
class HinhVuong : public HinhChuNhat
{
public: 
	void nhap()
	{
		cout << "nhap canh: ";
		cin >> this->chieuDai;//9
		this->chieuRong = this->chieuDai; //9
	}
	void xuat()
	{
		cout << "canh la: " << this->chieuDai << endl;
	}
	float tinhDienTich()
	{
		return this->chieuDai * this->chieuRong;
	}
};

