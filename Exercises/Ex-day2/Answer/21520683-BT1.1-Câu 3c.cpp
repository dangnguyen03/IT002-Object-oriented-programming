#include "Header.h"
int main() {
	DanhSach a[100];
	int sonhanvien;
	cout << "Nhap so nhan vien: ";
	cin >> sonhanvien;
	for (int i = 0; i < sonhanvien; i++) {
		a[i].input();
	}
	danhsachbe(a, sonhanvien);
	return 0;
}