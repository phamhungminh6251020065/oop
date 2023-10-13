#include "CanHo.h"
CanHo::CanHo() {
	DiaChi = "";
	TienDatCoc = 0;
	TienThueThang = 0;
	TinhTrangCH = 0;
}
void CanHo::Nhap() {
	cin.ignore();
	cout << "Nhap dia chi:"; getline(cin, DiaChi);
	cout << "Nhap tien dat coc:"; cin >> TienDatCoc;
	cout << "Nhap tien thue thang:"; cin >> TienThueThang;
	cout << "Nhap tinh trang can ho:"; cin >> TinhTrangCH;
	
}
void CanHo::Xuat() {
	cout << "Dia chi:" << DiaChi << endl;
	cout << "Tien dat coc:" << TienDatCoc << endl;
	cout << "Tien thue thang:" << TienThueThang << endl;
	cout << "Tinh trang can ho:" << TinhTrangCH << endl;
}
bool CanHo::operator>(CanHo c) {
	if (this->TienThueThang > c.TienThueThang) {
		return true;
	}
	else {
		return false;
	}
}
int CanHo::GetTinhTrangCH() {
	return TinhTrangCH;
}
float CanHo::GetTienThueThang() {
	return TienThueThang;
}