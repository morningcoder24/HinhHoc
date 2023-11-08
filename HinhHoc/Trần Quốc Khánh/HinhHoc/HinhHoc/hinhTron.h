#pragma once
#include "HinhElip.h"
class hinhTron:public HinhElip
{
public:
	void nhap() {
		cout << "nhap ban kinh hinh tron: ";
		cin >> this->banKinhLon;
		this->banKinhBe = this->banKinhLon;
	}
	void xuat()
	{
		cout << "ban kinh la: " << this->banKinhLon << endl;
	}
	float tinhDienTich()
	{
		return HinhElip::tinhDienTich();
	}
};

