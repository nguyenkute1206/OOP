#include "TuChon_TN.h"
TuChon_TN::~TuChon_TN() {}
void TuChon_TN::nhap()
{
	do {
		cout << "Diem ly: ";
		cin >> ly;
		if (ly < 0 || ly > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (ly < 0 || ly > 10);
	do {
		cout << "Diem hoa: ";
		cin >> hoa;
		if (hoa < 0 || hoa > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (hoa < 0 || hoa > 10);
	do {
		cout << "Diem sinh: ";
		cin >> sinh;
		if (sinh < 0 || sinh > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (sinh < 0 || sinh > 10);
	
}
void TuChon_TN::xuat()
{
	cout << "Tu chon khoa hoc Tu Nhien" << endl;
	cout << "Diem ly: " << ly << endl;
	cout << "Diem hoa: " << hoa << endl;
	cout << "Diem sinh: " << sinh << endl;
}
float TuChon_TN::tinhTB()
{
	return (get_toan() + get_van() + get_anhVan() + ly + hoa + sinh) / 6;
}
void TuChon_TN::nhap_File(ifstream& input)
{
	input >> ly;
	input >> hoa;
	input >> sinh;
}
void TuChon_TN::xuat_File(ofstream& output)
{
	output << "Tu chon khoa hoc Tu Nhien" << endl;
	output << "Diem ly: " << ly << endl;
	output << "Diem hoa: " << hoa << endl;
	output << "Diem sinh: " << sinh << endl;
}