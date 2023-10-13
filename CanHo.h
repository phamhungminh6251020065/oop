#pragma once
#include<iostream>
#include<string>
using namespace std;
class CanHo{
protected:
	string DiaChi;
	float TienDatCoc, TienThueThang;
	//decimal TinhTrangCH;
	int TinhTrangCH;
public:
	CanHo();
	virtual void Nhap();
	virtual void Xuat();
	bool operator >(CanHo c);
	int GetTinhTrangCH();
	float GetTienThueThang();
};

