#include "CongTy.h"
void CongTy::themNhanVien() {
	cout << "1. Nhan vien van phong\n2. Nhan vien san xuat\n";
	int choice = 1;
	cin >> choice;
	string ten;
	if (choice == 1) {
		int soNgayLam, luongCoBan;
		cout << "Nhap ten : ";
		cin.ignore();
		getline(cin, ten);
		cout << "Nhap so ngay lam : ";
		cin >> soNgayLam;
		cout << "Nhap luong co ban : ";
		cin >> luongCoBan;
		NhanVien* nv = new NhanVienVanPhong(ten,luongCoBan,soNgayLam);
		CongTy::nhanVien.push_back(nv);
	}
	else if (choice == 2) {
		int soSanPham, tienCong;
		cout << "Nhap ten : ";
		cin.ignore();
		getline(cin, ten);
		cout << "Nhap so san pham : ";
		cin >> soSanPham;
		cout << "Nhap tien cong : ";
		cin >> tienCong;
		NhanVien* nv = new NhanVienSanXuat(ten, soSanPham, tienCong);
		CongTy::nhanVien.push_back(nv);
	}
}

void CongTy::xuatNhanVien(string Ten) {
	for (int i = 0; i < nhanVien.size(); i++) {
		if (nhanVien[i]->getName() == Ten) {
			nhanVien[i]->getInfor();
		}
	}
}

void CongTy::chinhSuaThongTin(string Ten) {
	for (int i = 0; i < nhanVien.size(); i++) {
		if (nhanVien[i]->getName() == Ten) {
			nhanVien[i]->getInfor();
			nhanVien[i]->changeInfor();
		}
	}
}
void CongTy::tinhLuongNhanVien(string Ten) {
	for (int i = 0; i < nhanVien.size(); i++) {
		if (nhanVien[i]->getName() == Ten) {
			cout << Ten << " : " << nhanVien[i]->getLuong() << endl;
		}
	}
}

void CongTy::tongLuong() {
	int sum = 0;
	for (int i = 0; i < nhanVien.size(); i++) {
		sum += nhanVien[i]->getLuong();
	}
	cout << sum << endl;
}