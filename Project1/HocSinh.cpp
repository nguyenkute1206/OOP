#include "HocSinh.h"
HocSinh::~HocSinh() {}

void HocSinh::nhap() {}
void HocSinh::xuat() {}
void HocSinh::nhap_File(ifstream& input){}
void HocSinh::xuat_File(ofstream & output){}
void HocSinh::xuatBB()
{
	cout << "Ho Ten: " << hoTen << endl;
	cout << "Gioi Tinh: " << gioiTinh << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
	cout << "Diem toan: " << toan << endl;
	cout << "Diem van: " << van << endl;
	cout << "Diem anh van: " << anhVan << endl;
	xuat();// goi hàm xuất của lớp con

	cout << "TB: " << tinhTB() << endl;
	if (tinhTB() < 5) {
		cout << "Hoc luc yeu!" << endl;
	}
	else if (tinhTB() >= 5 && tinhTB() < 8) {
		cout << "Hoc luc kha!" << endl;
	}
	else if (tinhTB() >= 8) {
		cout << "Hoc luc tot!" << endl;
	}
}
void HocSinh::xuatBB_File(ofstream& output)
{
	output << "Ho Ten: " << hoTen << endl;
	output << "Gioi Tinh: " << gioiTinh << endl;
	output << "Ngay sinh: " << ngaySinh << endl;
	output << "Diem toan: " << toan << endl;
	output << "Diem van: " << van << endl;
	output << "Diem anh van: " << anhVan << endl;
	xuat_File(output);// goi hàm xuất của lớp con
	output << "TB: " << tinhTB() << endl;
	if (tinhTB() < 5) {
		output << "Hoc luc yeu!" << endl;
	}
	else if (tinhTB() >= 5 && tinhTB() < 8) {
		output << "Hoc luc kha!" << endl;
	}
	else if (tinhTB() >= 8) {
		output << "Hoc luc tot!" << endl;
	}
}