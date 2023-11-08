#pragma once
#include"HinhHoc.h"
class HinhChuNhat : public HinhHoc
{
protected:
	float chieuDai;
	float chieuRong;
public:
	void xuat(){
		cout << "chieu dai: " << this->chieuDai << endl;
		cout << "chieu rong: " << this->chieuRong << endl;
	}
	void nhap()
	{
		cout << "dai: "; cin >> chieuDai;
		cout << "rong: "; cin >> chieuRong;
	}
	float tinhDienTich()
	{
		return this->chieuDai * this->chieuRong;
	}
};

