#include "CHChungCu.h"
CHChungCu::CHChungCu() :CanHo() {
	ViTriTangCH = 0;
}
void CHChungCu::Nhap() {
	CanHo::Nhap();
	cout << "Nhap vi tri tang:"; cin >> ViTriTangCH;
}
void CHChungCu::Xuat() {
	cout << "Can ho chung cu" << endl;
	CanHo::Xuat();
	cout << "Vi tri tang:" << ViTriTangCH << endl;
}
