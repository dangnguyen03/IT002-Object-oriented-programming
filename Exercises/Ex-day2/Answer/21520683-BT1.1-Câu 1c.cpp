#include "Header.h"
int main() {
	Phanso a, b;
	a.Nhap(); b.Nhap(); char c;
	cin >> c;
	a.Pheptoan(a, b, c);
	a.output();
	return 0;
}