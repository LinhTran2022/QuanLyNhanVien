#pragma once
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include <vector>
class CongTy {
	vector<NhanVien*> nhanVien;
public:
	void themNhanVien();
	void xuatNhanVien(string Ten);
	void chinhSuaThongTin(string Ten);
	void tinhLuongNhanVien(string Ten);
	void tongLuong();
};