#include "Vehicle.h"    
#include <Windows.h>
int Vehicle::getTypeVehicle()
{
	return typeVehicle;
}
void Vehicle::InputFromLine(string* tm, int& i)
{
	typeVehicle = to_Vehicle(tm[i]);
	++i;
}
void Vehicle::Input()
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(setColor, 240);
	cout << "Loai phuong tien:   " << endl;
	SetConsoleTextAttribute(setColor, 15);
	cout << setfill('-') << setw(20) << '-' << endl;
	cout << "||  1. Xe khach   ||" << endl;
	cout << "||  2. May bay    ||" << endl;
	cout << "||  3. Tau thuy   ||" << endl;
	cout << setfill('-') << setw(20) << '-' << endl;
	cout << "Lua chon: ";
	do
	{
		cin >> typeVehicle;   // 1 la xe khach, 2 la may bay, 3 la tau thuy
		if (typeVehicle < 1 || typeVehicle>3) cout << "Chua co loai phuong tien nay, vui long nhap lai: ";
	} while (typeVehicle < 1 || typeVehicle >3);
}
long long Vehicle::Cost(int choose)
{
	if (typeVehicle == 1)
		coach = 1000000;
	else if (typeVehicle == 2)
		plane = 7000000;
	else if (typeVehicle == 3)
		ship = 10000000;
	if (choose > 4 && choose < 10)
	{
		coach *= 1.2;
		plane *= 1.2;
		ship *= 1.2;
	}
	if (typeVehicle == 1)
		return coach;
	else if (typeVehicle == 2)
		return plane;
	else if (typeVehicle == 3)
		return ship;
}