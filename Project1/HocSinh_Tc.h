#pragma once
#include"TuChon_TN.h"
#include"TuChon_XH.h"
#include"TuChon_CNNT.h"
class HocSinh_Tc
{
public:
	static HocSinh* newHocSinh(string hoTen,
		string gioiTinh,string ngaySinh, float toan, float van, float anhVan, int luaChon)
	{
		if (luaChon == 1)
			return new TuChon_TN(hoTen, gioiTinh,ngaySinh, toan, van, anhVan);
		else if (luaChon == 2)
			return new TuChon_XH(hoTen, gioiTinh, ngaySinh, toan, van, anhVan);
		else if (luaChon == 3)
			return new TuChon_CNNT(hoTen, gioiTinh, ngaySinh, toan, van, anhVan);
	}
};
