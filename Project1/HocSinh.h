#pragma once
#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<vector>
using namespace std;

class HocSinh
{
private:
	string hoTen;
	string gioiTinh;
	string ngaySinh;
	float toan;
	float van;
	float anhVan;
public:

	HocSinh(string _hoTen, string _gioiTinh, string _ngaySinh, float _toan, float _van,float _anhVan) : hoTen(_hoTen), gioiTinh(_gioiTinh),ngaySinh(_ngaySinh),
		toan(_toan), van(_van), anhVan(_anhVan) {}

	~HocSinh();
	string get_hoTen()
	{
		return hoTen;
	}
	string get_gioiTinh()
	{
		return gioiTinh;
	}
	string get_ngaySinh()
	{
		return ngaySinh;
	}
	float get_toan()
	{
		return toan;
	}
	float get_van()
	{
		return van;
	}
	float get_anhVan()
	{
		return anhVan;
	}
	//--------
	void xuatBB();
	void xuatBB_File(ofstream& output);
	virtual float tinhTB()
	{
		return 0;
	}
	virtual void nhap_File(ifstream& input);
	virtual void xuat_File(ofstream& output);
	virtual void nhap();
	virtual void xuat();
};
