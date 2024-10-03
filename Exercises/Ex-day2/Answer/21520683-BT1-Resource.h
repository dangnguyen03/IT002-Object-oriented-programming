#include "Header.h"
int ucln(int a, int b) {
	a = abs(a); b = abs(b);
	if (a == b) return a;
	else if (a > b) return ucln(a - b, b);
	else return ucln(a, b - a);
}
void Doidau(int& a, int& b) {
	if (a && b < 0 || a>0 && b < 0) {
		a *= -1;
		b *= -1;
	}
}
void Phanso::Nhap() {
	cout << "Nhap tu so: "; cin >> tuso;
	do {
		cout << "Nhap mau so: "; cin >> mauso;
	} while (mauso == 0);
}
void Phanso::RutGon() {
	int k = ucln(tuso, mauso);
	tuso /= k; mauso /= k;
	Doidau(tuso, mauso);
}
void Phanso::PSMax(Phanso a, Phanso b) {
	if ((float)a.tuso / a.mauso >= (float)b.tuso / b.mauso) {
		b.tuso = a.tuso;
		b.mauso - a.mauso;
	}
}
void Phanso::Pheptoan(Phanso& a, Phanso b, char c) {
	a.RutGon(); b.RutGon();
	int tugia, maugia;
	switch (c)
	{
	case '+': {
		tugia = a.tuso * b.mauso + b.tuso * a.mauso;
		maugia = a.mauso * b.mauso;
		a.tuso = tugia;
		a.mauso = maugia;
	} break;
	case '-': {
		tugia = a.tuso * b.mauso - b.tuso * a.mauso;
		maugia = a.mauso * b.mauso;
		a.tuso = tugia;
		a.mauso = maugia;
	} break;
	case '*': {
		tugia = a.tuso * b.tuso;
		maugia = a.mauso * b.mauso;
		a.tuso = tugia;
		a.mauso = maugia;
	} break;
	case '/': {
		tugia = a.tuso * b.mauso;
		maugia = a.mauso * b.tuso;
		a.tuso = tugia;
		a.mauso = maugia;
	} break;
	}
	a.RutGon();
}
void Phanso::output() {
	if (tuso == 0) cout << "Phan so la : " << 0;
	else
		if (mauso == 1) cout << "Phan so: " << tuso << endl;
		else cout << "Phan so: " << tuso << "/" << mauso << endl;
}

