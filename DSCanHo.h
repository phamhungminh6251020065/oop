#pragma once
#include"CanHo.h"
#include"CHChungCu.h"
#include"CHThuong.h"
#include<iostream>
using namespace std;
class DSCanHo{
private:
	CanHo **dsCanHo;
	int SoCH;
public:
	void Nhap();
	void Xuat();
	void Xoa();
	void Them();
	void SapXepTangDan();
	void SapXepGiamDan();
	void CanHoTrong();
	void TongTienThue();
	void GhiFile();
	int LaySoLuong();
};

