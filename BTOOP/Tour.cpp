#include "Tour.h"
#include <queue>


void quyDoi(int i)
{
	queue <int> a;
	while (i != 0)
	{
		int r = i % 10;
		a.push(r);
		i /= 10;
	}
	string s;
	int m = 0;
	while (!a.empty())  
	{
		if (m % 3 == 0) s = ' ' + s;
		s = to_string(a.front()) + s;
		a.pop();
		m++;
	}
	s += " (vnD)";
	cout << s;
}
void Tour::Input()
{
	Customer::Input();
	pla.Input(choose);
	veh.Input();
	typetr.Input();
	system("cls");
}
void Tour::InputFromLine(string str)
{
	string* tm = new string[15];
	int i;
	Customer::InputFromLine(str, tm, i);
	pla.InputFromLine(choose, tm, i);
	veh.InputFromLine(tm, i);
	typetr.InputFromLine(tm, i);
	delete[] tm;
}
void Tour::Output(int pos)
{
	Customer::Output(pos);
}
void Tour :: OutputTotal(int pos)
{
	Customer::OutputTotal(pos);
	cout << "| " << setw(27) << right; quyDoi(this->Total());
	cout << "||" << endl;
	cout << setfill('-') << setw(110) << '-' << endl;
}
long long Tour::CostAge(long long cost)  //Giá thông qua độ tuổi
{
	if (age <= 10)  cost *= 0.5;
	return cost;
}
long long Tour::CostType(long long cost)   // Giá sau khi duyệt qua loại khách hàng
{
	if (type == 1)
		cost *= 0.95;
	else if (type == 2)
		cost *= 0.9;
	return cost;
}
long long Tour::Total()
{
	long long var = pla.Cost(choose) + veh.Cost(choose);
	var = CostAge(var);                    // giá qua độ tuổi
	var = typetr.Cost(var);              //giá sau khi qua loại hình
	var = CostType(var);                   //giá cho loại khách hàng
	if (choose >= 5 || choose <= 9) var *= 1.2;      // Cộng phí cho chuyến đi nước ngoài
	return var;
}
string Tour::getFileSave()
{
	string temp;
	temp = Customer::getFileSave() + ',' + OutputPlace(choose) + ',' + OutputVehicle(veh.getTypeVehicle()) + ',' + OutputTypeTrip(typetr.getType()) + '\n';
	return temp;
}
string Tour::getID()
{
	return iD;
}
string Tour::getName()
{
	return name;
}
void Tour::OutputDetail()   //Mục 6
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << setfill('-') << setw(50) << '-' << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << setfill(' ');
	cout << "|| Ten:  " << setw(39) << left << name;
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| ID:  " << setw(40) << left << iD;
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Gioi tinh:  " << setw(33) << left << Gender(gender);
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Tuoi:  " << setw(38) << left << age;
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Loai ve:  " << setw(35) << left << TypeCustomer(type);
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Dia chi:  " << setw(35) << left << address;
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Dia diem:  " << setw(34) << left << OutputPlace(choose);
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Phuong tien:  " << setw(31) << left << OutputVehicle(veh.getTypeVehicle());
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Loai chuyen:  " << setw(31) << left << OutputTypeTrip(type);
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << "|| Tong gia tien:  " << setw(29) << left; quyDoi(this->Total());
	cout << "||" << endl;
	SetConsoleTextAttribute(setColor, 2);
	cout << setfill(' ') << setw(27) << ' ';
	SetConsoleTextAttribute(setColor, 244);
	cout << setfill('-') << setw(50) << '-' << endl;
}