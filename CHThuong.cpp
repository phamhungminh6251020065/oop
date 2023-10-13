#include "CHThuong.h"
CHThuong::CHThuong() :CanHo() {
	SoTang = 0;
}
void CHThuong::Nhap() {
	CanHo::Nhap();
	cout << "Nhap so tang:"; cin >> SoTang;
}
void CHThuong::Xuat() {
	cout << "Can ho thuong" << endl;
	CanHo::Xuat();
	cout << "So tang:" << SoTang << endl;
}
