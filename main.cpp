#include "CongTy.h"
int main() {
	CongTy congTy;
	while (1) {
		cout << "1. Them nhan vien\n2. Xuat nhan vien\n3. Chinh sua thong tin\n4. Tinh luong nhan vien\n5. Tinh tong luong\n6. Thoat\n";
		int pick;
		cin >> pick;
		if (pick == 1) {
			congTy.themNhanVien();
		}
		else if (pick == 5) {
			congTy.tongLuong();
		}
		else if (pick == 2 || pick == 3 || pick == 4) {
			string Ten;
			cout << "Nhap ten : ";
			cin.ignore();
			getline(cin, Ten);
			if (pick == 2) {
				congTy.xuatNhanVien(Ten);
			}
			else if (pick == 3) {
				congTy.chinhSuaThongTin(Ten);
			}
			else {
				congTy.tinhLuongNhanVien(Ten);
			}
		}
		else break;
	}
}