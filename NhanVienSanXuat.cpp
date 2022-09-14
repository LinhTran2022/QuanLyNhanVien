#include "NhanVienSanXuat.h"
NhanVienSanXuat::NhanVienSanXuat() {};
NhanVienSanXuat::NhanVienSanXuat(string ten, int soSanPham, int tienCong) {
	this->ten = ten;
	this->soSanPham = soSanPham;
	this->tienCong = tienCong;
	luong = soSanPham * tienCong;
}
void NhanVienSanXuat::getInfor() {
	NhanVien::getInfor();
	cout << "So san pham : " << soSanPham << endl;
	cout << "Tien cong : " << tienCong << endl;
}
void NhanVienSanXuat::changeInfor() {
	cout << "1. Chinh ten\n2. Chinh so san pham\n3. Chinh tien cong\n4. Da hoan thanh\n";
	int pick; 
	while (1) {
		cin >> pick;
		if (pick == 1) {
			cout << "Nhap ten moi : ";
			cin.ignore();
			cin >> ten;
		}
		else if (pick == 2) {
			cout << "Nhap so san pham moi : ";
			cin >> soSanPham;
			tinhLuong();
		}
		else if (pick == 3) {
			cout << "Nhap tien cong moi : ";
			cin >> tienCong;
			tinhLuong();
		}
		else break;
	}
}
void NhanVienSanXuat::tinhLuong() {
	luong = soSanPham*tienCong;
}