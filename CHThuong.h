#pragma once
#include"CanHo.h"
#include<iostream>
using namespace std;
class CHThuong:public CanHo{
private:
	int SoTang;
public:
	CHThuong();
	void Nhap();
	void Xuat();
};

