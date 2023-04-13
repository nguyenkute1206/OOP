#include "DanhSach_HocSinh.h"
#include"HocSinh_Tc.h"

DanhSach_HocSinh::DanhSach_HocSinh() {}

DanhSach_HocSinh::~DanhSach_HocSinh()
{
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		delete dsHocSinh[i];
	}
}

void DanhSach_HocSinh::themHocSinh()
{
	cout << "   == Nhap thong tin hoc sinh ==   " << endl;
	string hoTen;
	string gioiTinh;
	string ngaySinh;
	float toan;
	float van;
	float anhVan;
	cin.ignore();
	cout << "Nhap ten hoc sinh: ";
	getline(cin, hoTen);
	fflush(stdin);
	cout << "Nhap gioi tinh: ";
	getline(cin, gioiTinh);
	fflush(stdin);
	cout << "Nhap ngay sinh: ";
	getline(cin, ngaySinh);
	fflush(stdin);
	do {
		cout << "Diem toan: ";
		cin >> toan;
		if (toan < 0 || toan > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (toan < 0 || toan > 10);
	do {
		cout << "Diem van: ";
		cin >> van;
		if (van < 0 || van > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (van < 0 || van > 10);
	do {
		cout << "Diem anh van: ";
		cin >> anhVan;
		if (anhVan < 0 || anhVan > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (anhVan < 0 || anhVan > 10);

	cout << "  =======   nhom mon tu chon  =======" << endl;
	cout << "=====  1: Nhom mon khoa hoc Tu Nhien 2 : Nhom mon khoa hoc Xa Hoi 3 : Nhom mon Cong Nghe - Nghe Thuat  ====" << endl;
	int luaChon;
	do
	{
		cout << "Lua chon: ";
		cin >> luaChon;
		if (luaChon != 1 && luaChon != 2 && luaChon != 3)
		{
			cout << "== Lua chon khong hop le! Vui long thu lai. ==" << endl;
		}
	} while (luaChon != 1 && luaChon != 2 && luaChon != 3);
	HocSinh* hs = HocSinh_Tc::newHocSinh(hoTen, gioiTinh, ngaySinh, toan, van, anhVan, luaChon);
	hs->nhap(); // gọi phương thức nhập của lớp con                                  
	dsHocSinh.push_back(hs);
}

void DanhSach_HocSinh::hienThiDanhSach()
{
	//tinh so hoc sinh
	int n = dsHocSinh.size();
	cout << "\nSo Hoc sinh: " << n << endl;
	// tinh so luong hs gioi, kha, yeu
	int yeu = 0, kha = 0, gioi = 0;
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		if (dsHocSinh[i]->tinhTB() < 5) {
			yeu++;
		}
		else if (dsHocSinh[i]->tinhTB() >= 5 && dsHocSinh[i]->tinhTB() < 8) {
			kha++;
		}
		else if (dsHocSinh[i]->tinhTB() >= 8) {
			gioi++;
		}
	}
	cout << "\nso hoc sinh gioi: " << gioi << " (" << fixed << setprecision(2) << (float)gioi / n*100 << "%)" << endl;
	cout << "so hoc sinh kha: " << kha << " (" << fixed << setprecision(2) << (float)kha / n*100 << "%)" << endl;
	cout << "so hoc sinh yeu: " << yeu << " (" << fixed << setprecision(2) << (float)yeu / n * 100 << "%)" << endl;
	// xuat thong tin hoc sinh
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		cout << "\nHoc sinh thu: " << i + 1 << "\n";
		dsHocSinh[i]->xuatBB();
	}
}

void DanhSach_HocSinh::timHocSinh()
{
	int kt_Stt;
	cout << "Nhap stt: " ;
	cin >> kt_Stt;
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		if ((i+1) == kt_Stt)
		{
			cout << "== Duoc tim thay! ==\n" << endl;
			dsHocSinh[i]->xuatBB();
			return;
		}
	}
	cout << "Khong tim thay! " << endl;
}

void DanhSach_HocSinh::xoaHocSinh()
{
	int kt_Stt;
	cout << "Nhap stt: ";
	cin >> kt_Stt;
	// xuat thong tin truoc khi xoa
	bool timThay = false;
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		if ((i + 1) == kt_Stt)
		{
			cout << "== Duoc tim thay! ==\n" << endl;
			dsHocSinh[i]->xuatBB();
			timThay = true;
			break;
		}
	}
	if (!timThay) {
		cout << "== Khong tim thay hoc sinh co STT tren! ==" << endl;
		return ;
	}

	// xoa hoc sinh
	char luaChon;
	cout << "Ban muon xoa hoc sinh nay? (y/n): ";
	cin >> luaChon;
	do {
		if (luaChon == 'n' || luaChon == 'N') {
			cout << "Thoat xoa..." << endl;
			return ;
		}
		// do something here
		for (int i = 0; i < dsHocSinh.size(); i++)
		{
			if ((i + 1) == kt_Stt)
			{
				dsHocSinh.erase(dsHocSinh.begin() + i);
				cout << "Xoa hoc sinh thanh cong!" << endl;
				return ;
			}
		}

	} while (luaChon == 'y' || luaChon == 'Y');
	return;
}


void DanhSach_HocSinh::sapXepHocSinh_TB()
{
	int n = dsHocSinh.size();
	{
		if (n == 0 || n == 1)
		{
			cout << "== Khong sap xep! (sl hoc sinh <= 1) == " << endl;
			return;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) 
		{
			if (dsHocSinh[j]->tinhTB() < dsHocSinh[min_idx]->tinhTB()) 
			{
				min_idx = j;
			}
		}
		if (min_idx != i) 
		{
			swap(dsHocSinh[i], dsHocSinh[min_idx]);
		}
	}
	cout << "Da sap xep danh sach hoc sinh theo Diem TB!" << endl;
}


void DanhSach_HocSinh::suaHocSinh()
{
	int kt_Stt;
	cout << "Nhap stt: ";
	cin >> kt_Stt;
	// xuat thong tin truoc khi sua
	bool timThay = false;
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		if ((i + 1) == kt_Stt)
		{
			cout << "== Duoc tim thay! ==\n" << endl;
			dsHocSinh[i]->xuatBB();
			timThay = true;
			break;
		}
	}
	if (!timThay) {
		cout << "Khong tim thay hoc sinh co STT tren!" << endl;
		return;
	}

	char luaChon;
	cout << "Ban muon sua thong tin hoc sinh nay? (y/n): ";
	cin >> luaChon;
	do {
		if (luaChon == 'n' || luaChon == 'N') {
			cout << "Thoat sua..." << endl;
			return;
		}
		// do something here
		for (int i = 0; i < dsHocSinh.size(); i++)
		{
			if ((i + 1) == kt_Stt)
			{
				cout << "\nNhap thong tin moi cho hoc sinh :" << i + 1 << endl;
				string hoTen;
				string gioiTinh;
				string ngaySinh;
				float toan;
				float van;
				float anhVan;
				cin.ignore();
				cout << "Nhap ten hoc sinh: ";
				getline(cin, hoTen);
				fflush(stdin);
				cout << "Nhap gioi tinh: ";
				getline(cin, gioiTinh);
				fflush(stdin);
				cout << "Nhap ngay sinh: ";
				getline(cin, ngaySinh);
				fflush(stdin);
				do {
					cout << "Diem toan: ";
					cin >> toan;
					if (toan < 0 || toan > 10)
					{
						cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
					}
				} while (toan < 0 || toan > 10);
				do {
					cout << "Diem van: ";
					cin >> van;
					if (van < 0 || van > 10)
					{
						cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
					}
				} while (van < 0 || van > 10);
				do {
					cout << "Diem anh van: ";
					cin >> anhVan;
					if (anhVan < 0 || anhVan > 10)
					{
						cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
					}
				} while (anhVan < 0 || anhVan > 10);

				cout << "  =======   nhom mon tu chon  =======" << endl;
				cout << "=====  1: Nhom mon khoa hoc Tu Nhien 2 : Nhom mon khoa hoc Xa Hoi 3 : Nhom mon Cong Nghe - Nghe Thuat  ====" << endl;
				int luaChon;
				do
				{
					cout << "Lua chon: ";
					cin >> luaChon;
					if (luaChon != 1 && luaChon != 2 && luaChon != 3)
					{
						cout << "== Lua chon khong hop le! Vui long thu lai. ==" << endl;
					}
				} while (luaChon != 1 && luaChon != 2 && luaChon != 3);
				HocSinh* hs = HocSinh_Tc::newHocSinh(hoTen, gioiTinh, ngaySinh, toan, van, anhVan, luaChon);
				hs->nhap(); // gọi phương thức nhập của lớp con                                  
				dsHocSinh[i] = hs;
				cout << "Sua thong tin hoc sinh thanh cong!" << endl;
				return;
			}
		}

	} while (luaChon == 'y' || luaChon == 'Y');
	return;
}

void DanhSach_HocSinh::doc_File()
{
	ifstream input("data.txt");
	if (!input.is_open())
	{
		cout << "khong doc duoc file";
		return;
	}
	while (!input.eof())
	{
		string hoTen;
		string gioiTinh;
		string ngaySinh;
		float toan;
		float van;
		float anhVan;
		input.ignore();

		getline(input, hoTen);
		fflush(stdin);

		getline(input, gioiTinh);
		fflush(stdin);

		getline(input, ngaySinh);
		fflush(stdin);
		input >> toan;
		input >> van;
		input >> anhVan;
		int luaChon;
		input >> luaChon;

		HocSinh* hs = HocSinh_Tc::newHocSinh(hoTen, gioiTinh, ngaySinh, toan, van, anhVan, luaChon);
		hs->nhap_File(input); // Truyền đối tượng ifstream input vào cho phương thức nhap_File()
		dsHocSinh.push_back(hs);

	}
	input.close();
	cout << "Them hoc sinh thanh cong!" << endl;
}
void DanhSach_HocSinh::xuat_File()
{
	ofstream output("output_hocsinh.txt");
	if (output.is_open())
	{
		int n = dsHocSinh.size();
		output << "\nSo Hoc sinh: " << n << endl;
		// tinh so luong hs gioi, kha, yeu
		int yeu = 0, kha = 0, gioi = 0;
		for (int i = 0; i < dsHocSinh.size(); i++)
		{
			if (dsHocSinh[i]->tinhTB() < 5) {
				yeu++;
			}
			else if (dsHocSinh[i]->tinhTB() >= 5 && dsHocSinh[i]->tinhTB() < 8) {
				kha++;
			}
			else if (dsHocSinh[i]->tinhTB() >= 8) {
				gioi++;
			}
		}
		output << "\nso hoc sinh gioi: " << gioi << " (" << fixed << setprecision(2) << (float)gioi / n * 100 << "%)" << endl;
		output << "so hoc sinh kha: " << kha << " (" << fixed << setprecision(2) << (float)kha / n * 100 << "%)" << endl;
		output << "so hoc sinh yeu: " << yeu << " (" << fixed << setprecision(2) << (float)yeu / n * 100 << "%)" << endl;
		// xuat thong tin hoc sinh
		for (int i = 0; i < dsHocSinh.size(); i++)
		{
			output << "\nHoc sinh thu: " << i + 1 << "\n";
			dsHocSinh[i]->xuatBB_File(output);
		}
		output.close();
		cout << "== xuat file thanh cong ==" << endl;
	}
	else
	{
		cout << "khong tao duoc file!" << endl;
	}
}