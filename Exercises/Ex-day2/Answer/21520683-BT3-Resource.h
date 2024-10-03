#include "Header.h"
void min(DanhSach* a, int n) {  //Câu bbbbbbbbbb
	int k = a[0].thuclanh();
	for (int i = 1; i < n; i++) {
		if (k > a[i].thuclanh()) k = a[i].thuclanh();
	}
	cout << setw(22) << left << "Thuc lanh thap nhat: ";
	cout << setw(30) << left << k << endl;
	cout << setw(10) << left << "MSSV";
	cout << setw(22) << left << "Ten nhan vien";
	cout << setw(12) << left << "Phong ban" << endl;
	cout << setfill('.');
	cout << setw(44) << '.' << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].thuclanh() == k) {
			a[i].outputdanhsach();
		}
	}
}
void danhsachbe(DanhSach* a, int n) { // Câu cccccccccccccc
	cout << setw(10) << left << "MSSV";
	cout << setw(22) << left << "Ten nhan vien";
	cout << setw(12) << left << "Phong ban" << endl;
	cout << setfill('.');
	cout << setw(44) << '.' << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].thuclanh() >= 1200000) {
			a[i].outputdanhsach();
		}
	}
}
void caud(DanhSach* a, int n) { // Câu dddddd
	DanhSach k;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if ((a[i].phongban > a[j].phongban) || (a[i].phongban == a[i].phongban && a[i].MSSV < a[j].MSSV)) {
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
}
void DanhSach :: input() {
	cin.ignore();
	cout << "Nhap MSSV: "; cin.getline(a.MSSV, 8);
	cout << "Nhap ten: "; cin.getline(a.Name, 20);
	cout << "Nhap phong ban: "; cin.getline(a.phongban, 10);
	cout << "Nhap luong: "; cin >> a.luong;
	cout << "Nhap thuong: "; cin >> a.thuong;
	a.thuclanh = a.luong + a.thuong;
}
int DanhSach :: thuclanh() {
	return  a.thuclanh;
}
void DanhSach :: outputthuclanh() {
	cout << "Luong thuc lanh: " << a.thuclanh << endl;   // Câu aaaaaaaaaaaa
}
void DanhSach :: outputdanhsach() {
	cout << setfill(' ');
	cout << setw(10) << left << a.MSSV;
	cout << setw(22) << left << a.Name;
	cout << setw(12) << left << a.phongban << endl;
}