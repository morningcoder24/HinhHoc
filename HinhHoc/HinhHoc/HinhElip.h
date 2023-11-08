#pragma once
#include "HinhHoc.h"
class HinhElip : public HinhHoc
{
protected:
	float banKinhLon;
	float banKinhBe;
public:
	void nhap()
	{
		cout << "ban kinh lon: "; cin >> this->banKinhLon;
		cout << "ban kinh be: "; cin >> this->banKinhBe;
	}
	float tinhDienTich()
	{
		return this->banKinhLon * this->banKinhBe * 3.14;
	}
	void xuat()
	{
		cout << "ban kinh lon: " << banKinhLon << endl;
		cout << "ban kinh be: " << banKinhBe << endl;
	}
};

