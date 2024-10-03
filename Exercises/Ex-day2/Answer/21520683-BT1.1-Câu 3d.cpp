#include "Header.h"
int main() {

	DanhSach a[100];
	int sonhanvien;
	cout << "So nhan vien: ";
	cin >> sonhanvien;
	for (int i = 0; i < sonhanvien; i++) {
		a[i].input();
	}
	caud(a, sonhanvien);
	cout << setw(10) << left << "MSSV";
	cout << setw(22) << left << "Ten nhan vien";
	cout << setw(12) << left << "Phong ban" << endl;
	cout << setfill('.');
	cout << setw(44) << '.' << endl;
	for (int i = 0; i < sonhanvien; i++) {
		a[i].outputdanhsach();
	}
}
