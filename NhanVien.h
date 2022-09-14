#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien {
protected:
	string ten;
	int luong;
public:
	NhanVien();
	string getName();
	int getLuong();
	virtual void getInfor();
	virtual void changeInfor() = 0;
	virtual void tinhLuong() = 0;
};