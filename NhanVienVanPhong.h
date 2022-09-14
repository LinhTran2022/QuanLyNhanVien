#pragma once
#include "NhanVien.h"
class NhanVienVanPhong : public NhanVien{
	int luongCoBan;
	int soNgayLam;
public:
	NhanVienVanPhong();
	NhanVienVanPhong(string ten, int luongCoBan, int soNgayLam);
	void getInfor();
	void changeInfor();
	void tinhLuong();
};