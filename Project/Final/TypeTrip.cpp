#include "TypeTrip.h"
#include <Windows.h>
void TypeTrip::Input()
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(setColor, 240);
	cout << "Loai hinh:          " << endl;
    SetConsoleTextAttribute(setColor, 15);
	cout << setfill('-') << setw(30) << '-' << endl;
	cout << "||  0. Ngan ngay (3 ngay)   ||" << endl;
	cout << "||  1. Dai ngay (> 7 ngay)  ||" << endl;
	cout << setfill('-') << setw(30) << '-' << endl;
	cout << "Lua chon: ";

	cin >> type;
}
void TypeTrip::InputFromLine(string* tm, int i)
{
	type = to_TypeTrip(tm[i]);
}
long long TypeTrip::Cost(long long cost)
{
	if (type == 1) cost *= 1.5;
	return cost;
}
int TypeTrip::getType()
{
	return type;
} 