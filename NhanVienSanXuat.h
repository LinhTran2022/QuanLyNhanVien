#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien{
	int soSanPham;
	int tienCong;
public:
	NhanVienSanXuat();
	NhanVienSanXuat(string ten, int soSanPham, int tienCong);
	void getInfor();
	void changeInfor();
	void tinhLuong();
};