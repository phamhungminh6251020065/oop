#include "DSCanHo.h"
#include<fstream>
void DSCanHo::Nhap() {
	cout << "\t\tNHAP THONG TIN CAC CAN HO" << endl;
	cout << "Nhap so can ho:"; cin >> SoCH;
	for (int i = 0; i < SoCH; i++) {
		cout << "\t\t*************CAN_HO***********" << endl;
		cout << "\t\t**          1.Thuong        **" << endl;
		cout << "\t\t**          2.Chung cu      **" << endl;
		cout << "\t\t******************************" << endl;
		int chon;
		cout << "Nhap loai can ho:"; cin >> chon;
		if (chon == 1) {
			dsCanHo[i] = new CHThuong();
			dsCanHo[i]->Nhap();
		}
		else if (chon == 2) {
			dsCanHo[i] = new CHChungCu();
			dsCanHo[i]->Nhap();
		}
		else {
			cout << "Khong hop le";
			i--;
		}
	}
}
void DSCanHo::Xuat() {
	cout << "\t\tDANH SACH CAC CAN HO" << endl;
	for (int i = 0; i < SoCH; i++) {
		cout << "Thong tin can ho thu " << i + 1 << endl;
		dsCanHo[i]->Xuat();
		cout << endl;
	}
}
void DSCanHo::Xoa() {
	cout << "So luong can ho hien co:" << LaySoLuong() << endl;
	int ViTri;
	cout << "Nhap vi tri muon xoa:"; cin >> ViTri;
	do {
		if (ViTri < 0 || ViTri > LaySoLuong()) {
			cout << "Vi tri nhap vao khong hop le. Vui long nhap lai! ";
		}
	} while (ViTri < 0 || ViTri >LaySoLuong());
	delete dsCanHo[ViTri];
	// Dich chuyen mang
	for (int i = ViTri; i < SoCH - 1; i++) {
		dsCanHo[i] = dsCanHo[i + 1];
	}
	// Giam so luong phan tu sau khi xoa.
	--SoCH;
}
void DSCanHo::Them() {
	int ViTri;
	CanHo *ch;
	CanHo** them = new CanHo*[SoCH + 1];
	for (int i = 0; i < SoCH; i++) {
		them[i] = dsCanHo[i];
	}
	delete[] dsCanHo;
	dsCanHo = them;
	SoCH++;
	int vt, type;
	cout << "So luong ch hien co trong danh sach: " << LaySoLuong() << endl;
	cout << "Nhap vao vi tri can them trong danh sach: ";

	do {
		cin >> vt;
		if (vt < 0 || vt > LaySoLuong()) {
			cout << "Vi tri nhap vao khong hop le. Vui long nhap lai! ";
		}
	} while (vt < 0 || vt > LaySoLuong());

	cout << "\t\t*************CAN_HO**************" << endl;
	cout << "\t\t**          1.Chung cu         **" << endl;
	cout << "\t\t**          2.Thuong           **" << endl;
	cout << "\t\t*********************************" << endl;
	cout << "Chon loai ca si can them:"; cin >> type;
	if (type == 1) {
		ch = new CHChungCu();
		ch->Nhap();
	}
	else if (type == 2) {
		ch = new CHThuong();
		ch->Nhap();
	}
	else {
		cout << "Lua chon khong hop le\n";
		return;
	}

	delete[] dsCanHo;
	dsCanHo = them;
	SoCH++;
}
int DSCanHo::LaySoLuong() {
	return SoCH;
}
void DSCanHo::SapXepTangDan() {
	cout << "\t\tSAP XEP TANG DAN THEO TIEN THUE THANG" << endl;
	for (int i = 0; i < SoCH - 1; i++) {
		for (int j = i + 1; j < SoCH; j++) {
			if (*dsCanHo[i] > *dsCanHo[j]) {
				swap(*dsCanHo[i], *dsCanHo[j]);
			}
		}
	}
	Xuat();
}
void DSCanHo::SapXepGiamDan() {
	cout << "\t\tSAP XEP GIAM DAN THEO TIEN THUE THANG" << endl;
	for (int i = 0; i < SoCH - 1; i++) {
		for (int j = i + 1; j < SoCH; j++) {
			if (*dsCanHo[i] > *dsCanHo[j]) {
			}
			else {
				swap(*dsCanHo[i], *dsCanHo[j]);

			}
		}
	}
	Xuat();
}
void DSCanHo::CanHoTrong() {
	int dem = 0;
	for (int i = 0; i < SoCH; i++) {
		if (dsCanHo[i]->GetTinhTrangCH() == 0) {
			dem++;
		}
	}
	cout << "So can ho trong:" << dem << endl;
}
void DSCanHo::TongTienThue() {
	/*for (int i = 0; i < SoCH; i++) {
		if (dsCanHo[i]->GetTinhTrangCH == 1) {
			float Tong = 0;
			dsCanHo[i]->GetTienThueThang += Tong;
			cout << "Tong tien thue la:" << Tong << endl;

		}
	}*/
}
void DSCanHo::GhiFile() {
	// Mở file để ghi
	ofstream outfile("danhsach.txt");
	// Chuyển đầu ra của console vào file
	streambuf *coutbuf = cout.rdbuf();
	cout.rdbuf(outfile.rdbuf());
	// In ra kết quả trên console để chuyển vào file
	for (int i = 0; i < SoCH; i++) {
		cout << "\n-------\n";
		cout << "\nThong tin can ho thu : " << i + 1 << endl;
		dsCanHo[i]->Xuat();
	}
	// Đóng file sau khi ghi
	outfile.close();
	// Chuyển lại đầu ra mặc định của console
	cout.rdbuf(coutbuf);
}