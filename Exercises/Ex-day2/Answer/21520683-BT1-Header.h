#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
struct Thuoctinh {
	char MSSV[8], Name[20], phongban[10];
	int luong, thuong, thuclanh;
};

class DanhSach {
private:
	Thuoctinh a;
public:
	void input();
	int thuclanh();
	void outputthuclanh();
	void outputdanhsach();
	char phongban[10], MSSV[8];
};
void min(DanhSach* a, int n);
void danhsachbe(DanhSach* a, int n);
void caud(DanhSach* a, int n) ;

