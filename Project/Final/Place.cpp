#include "Place.h"
#include <iostream>
#include <Windows.h>

Place::Place()
{
	NhaTrang = 7000000;
	HaLong = 15000000;
	Sapa = 5000000;
	DaNang = 10000000;
	Singapor = 30000000;
	Han = 50000000;
	Nhat = 45000000;
	Uc = 25000000;
	America = 55000000;
}
void Place::Input(int& choose)
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(setColor, 240);
	cout << "Dia diem du lich:   " << endl;
	SetConsoleTextAttribute(setColor, 15);
	cout << setfill('-') << setw(28) << '-' << endl;
	cout << "||     1. Nha Trang       ||" << endl;
	cout << "||     2. Ha Long         ||" << endl;
	cout << "||     3. SaPa            ||" << endl;
	cout << "||     4. Da Nang         ||" << endl;
	cout << "||     5. Singapor        ||" << endl;
	cout << "||     6. Han Quoc        ||" << endl;
	cout << "||     7. Nhat Ban        ||" << endl;
	cout << "||     8. Uc              ||" << endl;  
	cout << "||     9. My              ||" << endl;
	cout << setfill('-') << setw(28) << '-' << endl;
	cout << "Lua chon: ";

	do
	{
		cin >> choose;
		if (choose < 1 || choose>9) cout << "Hien tai chua co tour den dia diem nay, vui long nhap lai: ";
	} while (choose < 1 || choose>9);
	switch (choose)
	{
	case 1: NhaTrang = 7000000; break;
	case 2: HaLong = 15000000; break;
	case 3: Sapa = 5000000; break;
	case 4: DaNang = 10000000; break;
	case 5: Singapor = 30000000; break;
	case 6: Han = 50000000; break;
	case 7: Nhat = 45000000; break;
	case 8: Uc = 25000000; break;
	case 9: America = 55000000; break;
	}
}
void Place::InputFromLine(int& choose, string* tm, int& i)
{
	choose = to_Place(tm[i]);
	++i;
}
long long Place::Cost(int choose)
{
	switch (choose)
	{
	case 1: return NhaTrang;
	case 2: return HaLong;
	case 3: return Sapa;
	case 4: return DaNang;
	case 5: return Singapor;
	case 6: return Han;
	case 7: return Nhat;
	case 8: return Uc;
	case 9: return America;
	}
}