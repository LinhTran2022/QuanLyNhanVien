#include "NhanVien.h"
NhanVien::NhanVien() {};
string NhanVien::getName() {
	return ten;
}
int NhanVien::getLuong() {
	return luong;
}
void NhanVien::getInfor() {
	cout << "Ten : " << ten << "\n" << "Luong : " << luong << endl;
}