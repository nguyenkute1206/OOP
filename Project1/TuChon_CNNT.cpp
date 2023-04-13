#include "TuChon_CNNT.h"
TuChon_CNNT::~TuChon_CNNT() {}

void TuChon_CNNT::nhap()
{
	do {
		cout << "Diem cong nghe: ";
		cin >> congNghe;
		if (congNghe < 0 || congNghe > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (congNghe < 0 || congNghe > 10);

	do {
		cout << "Diem tin hoc: ";
		cin >> tinHoc;
		if (tinHoc < 0 || tinHoc > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (tinHoc < 0 || tinHoc > 10);
	
	do {
		cout << "Diem Nghe thuat: ";
		cin >> ngheThuat;
		if (ngheThuat < 0 || ngheThuat > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (ngheThuat < 0 || ngheThuat > 10);

}
void TuChon_CNNT::xuat()
{
	cout << "Tu chon khoa hoc cong nghe - nghe thuat " << endl;
	cout << "Diem cong nghe: " << congNghe << endl;
	cout << "Diem tin hoc: " << tinHoc << endl;
	cout << "Diem nghe thuat: " << ngheThuat << endl;
}
float TuChon_CNNT::tinhTB()
{
	return (get_toan() + get_van() + get_anhVan() + congNghe + tinHoc + ngheThuat) / 6;
}
void TuChon_CNNT::nhap_File(ifstream& input)
{
	input >> congNghe;
	input >> tinHoc;
	input >> ngheThuat;
}
void TuChon_CNNT::xuat_File(ofstream& output)
{
	output << "Tu chon khoa hoc cong nghe - nghe thuat " << endl;
	output << "Diem cong nghe: " << congNghe << endl;
	output << "Diem tin hoc: " << tinHoc << endl;
	output << "Diem nghe thuat: " << ngheThuat << endl;
}