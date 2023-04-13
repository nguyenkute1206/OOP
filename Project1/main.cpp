#include"HocSinh_Tc.h"
#include"DanhSach_HocSinh.h"
int main()
{
	DanhSach_HocSinh ds;
	int choice;
	do {
		system("cls");// xoa man hinh
		cout << "==== CHUONG TRINH QUAN LY HOC SINH ====" << endl;
		cout << "Option 1: Nhap them hoc sinh: " << endl;
		cout << "Option 2: Xuat danh sach hoc sinh: " << endl;
		cout << "Option 3: Tim kiem theo So thu tu: " << endl;
		cout << "Option 4: Sua thong tin hoc sinh: " << endl;
		cout << "Option 5: Xoa hoc sinh theo So thu tu: " << endl;
		cout << "Option 6: Sap xep hoc sinh theo Diem Trung Binh:" << endl;
		cout << "Option 7: Them hoc sinh tu File: " << endl;
		cout << "Option 8: Xuat hoc sinh ra File: " << endl;
		cout << "Option 9: Thoat chuong trinh: " << endl;
		cout << "Lua chon: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ds.themHocSinh();
			break;
		case 2:
			ds.hienThiDanhSach();
			system("pause");
			break;
		case 3:
			ds.timHocSinh();
			system("pause");
			break;
		case 4:
			ds.suaHocSinh();
			system("pause");
			break;
		case 5:
			ds.xoaHocSinh();
			system("pause");
			break;
		case 6:
			ds.sapXepHocSinh_TB();
			system("pause");
			break;
		case 7:
			ds.doc_File();
			system("pause");
			break;
		case 8:
			ds.xuat_File();
			system("pause");
			break;
		case 9:
			cout << "cam on" << endl;
			exit(0);
			break;
		default:
			cout << "Lua chon khong hop le!" << endl;
			break;
		}
		cout << endl;
	} while (choice != 10);
	return 0;
}
