#pragma once
#include"HocSinh.h"
class DanhSach_HocSinh
{
private:
	vector<HocSinh*> dsHocSinh;
public:
	void themHocSinh();
	void hienThiDanhSach();
	void timHocSinh();
	void suaHocSinh();
	void xoaHocSinh();
	void sapXepHocSinh_TB();
	void doc_File();
	void xuat_File();
	DanhSach_HocSinh();
	~DanhSach_HocSinh();
};

