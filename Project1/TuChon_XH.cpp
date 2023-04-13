#include "TuChon_XH.h"
void TuChon_XH::nhap()
{
	do {
		cout << "Diem Su: ";
		cin >> su;
		if (su < 0 || su > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (su < 0 || su > 10);
	
	do {
		cout << "Diem Dia: ";
		cin >> dia;
		if (dia < 0 || dia > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (dia < 0 || dia > 10);
	do {
		cout << "Diem giao duc kinh te: ";
		cin >> gdkt;
		if (gdkt < 0 || gdkt > 10)
		{
			cout << "== Diem tu 0 -> 10 Hay nhap lai! ==" << endl;
		}
	} while (gdkt < 0 || gdkt > 10);
}
void TuChon_XH::xuat()
{
	cout << "Tu chon Khoa Hoc Xa Hoi" << endl;
	cout << "Diem su: " << su << endl;
	cout << "Diem dia ly: " << dia << endl;
	cout << "Diem giao duc kinh te: " << gdkt << endl;
}
float TuChon_XH::tinhTB()
{
	return (get_toan() + get_van() + get_anhVan() + su + dia + gdkt) / 6;
}
void TuChon_XH::nhap_File(ifstream& input)
{
	input >> su;
	input >> dia;
	input >> gdkt;
}
void TuChon_XH::xuat_File(ofstream& output)
{
	output << "Tu chon Khoa Hoc Xa Hoi" << endl;
	output << "Diem su: " << su << endl;
	output << "Diem dia ly: " << dia << endl;
	output << "Diem giao duc kinh te: " << gdkt << endl;
}