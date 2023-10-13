#include"DSCanHo.h"
void Menu() {
	cout << "\t\t*************MENU************" << endl;
	cout << "\t\t** 1.Nhap thong tin        **" << endl;
	cout << "\t\t** 2.Xuat thong tin        **" << endl;
	cout << "\t\t** 3.Xoa can ho            **" << endl;
	cout << "\t\t** 4.Them can ho           **" << endl;
	cout << "\t\t** 5.Sap xep tang dan      **" << endl;
	cout << "\t\t** 6.Sap xep giam dan      **" << endl;
	cout << "\t\t** 7.So can ho trong       **" << endl;
	cout << "\t\t** 8.Tong tien thue        **" << endl;
	cout << "\t\t** 9.Ghi file              **" << endl;
	cout << "\t\t** 10.Thoat chuong trinh    **" << endl;
	cout << "\t\t*****************************" << endl;
}
int main() {
	DSCanHo ds;
	int LuaChon;
	do {
		Menu();
		cout << "Nhap lua chon:"; cin >> LuaChon;
		switch (LuaChon)
		{
		case 1:
			ds.Nhap();
			break;
		case 2:
			ds.Xuat();
			break;
		case 3:
			ds.Xoa();
			break;
		case 4:
			ds.Them();
			break;
		case 5:
			ds.SapXepTangDan();
			break;
		case 6:
			ds.SapXepGiamDan();
			break;
		case 7:
			ds.CanHoTrong();
			break;
		case 8:
			ds.TongTienThue();
			break;
		case 9:
			ds.GhiFile();
			cout << "Ghi thanh cong !" << endl;
			break;
		case 10:
			cout << "Goodbye !" << endl;
		default:
			break;
		}
	} while (LuaChon != 10);

	system("pause");
	return 0;
}
