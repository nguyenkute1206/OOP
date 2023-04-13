#pragma once
#include"HocSinh.h"
class TuChon_XH :public HocSinh
{
private:
	float su;
	float dia;
	float gdkt;
public:
	TuChon_XH(string _hoTen, string _gioiTinh, string _ngaySinh,
		float _toan, float _van, float _anhVan) :HocSinh(_hoTen, _gioiTinh, _ngaySinh
			, _toan, _van, _anhVan) {}
	~TuChon_XH();
	float tinhTB() override;
	void nhap()override;
	void xuat()override;
	void nhap_File(ifstream& input)override;
	void xuat_File(ofstream& output)override;
};
