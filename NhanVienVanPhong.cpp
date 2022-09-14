#include "NhanVienVanPhong.h"
NhanVienVanPhong::NhanVienVanPhong() {};
NhanVienVanPhong::NhanVienVanPhong(string ten, int luongCoBan, int soNgayLam){
	this->ten = ten;
	this->luongCoBan = luongCoBan;
	this->soNgayLam = soNgayLam;
	luong = luongCoBan * soNgayLam;
}
void NhanVienVanPhong::getInfor() {
	NhanVien::getInfor();
	cout << "Luong co ban : " << luong << endl;
	cout << "So ngay lam : " << soNgayLam << endl;
}
void NhanVienVanPhong::changeInfor() {
	cout << "1. Chinh ten\n2. Chinh luong co ban\n3. Chinh so ngay lam\n4. Da hoan thanh\n";
	int pick;
	while (1) {
		cin >> pick;
		if (pick == 1) {
			cout << "Nhap ten moi : ";
			cin.ignore();
			cin >> ten;
		}
		else if (pick == 2) {
			cout << "Nhap luong co ban moi : ";
			cin >> luongCoBan;
			tinhLuong();
		}
		else if (pick == 3) {
			cout << "Nhap so ngay lam moi : ";
			cin >> soNgayLam;
			tinhLuong();
		}
		else break;
	}
}
void NhanVienVanPhong::tinhLuong() {
	luong = luongCoBan * soNgayLam;
}