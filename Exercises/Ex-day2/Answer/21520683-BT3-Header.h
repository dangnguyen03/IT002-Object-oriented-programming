#pragma once
#include <iostream>
#include <cmath>
using namespace std;
int ucln(int a, int b);
void Doidau(int& a, int& b);
typedef class Phanso {
private:
	int tuso;
	int mauso;
public:
	void Nhap();
	void RutGon();
	void PSMax(Phanso a, Phanso b);
	void Pheptoan(Phanso& a, Phanso b, char c);
	void output();
} PS;

