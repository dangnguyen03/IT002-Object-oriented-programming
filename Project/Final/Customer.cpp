#include "Customer.h"
#include <Windows.h>

string Gender(int i)   //Hỗ trợ xuất 
{
	if (i == 0) return "Nam";
	return "Nu";
}
int to_Gender(string s)
{
	if (s == "Nam" || s == "nam") return 0;
	else return 1;
}

string TypeCustomer(int i)
{
	if (i == 0) return "Thuong";
	else if (i == 1) return "Than thiet";
	else return "Vip";
}
int to_TypeCustomer(string s)
{
	if (s == "Thuong" || s == "thuong") return 0;
	else if (s == "Vip" || s == "vip") return 2;
	else return 1;
}

string OutputPlace(int i)
{
	if (i == 1) return "Nha Trang";
	else if (i == 2) return "Ha long";
	else if (i == 3) return "SaPa";
	else if (i == 4) return "Da Nang";
	else if (i == 5) return "Singapor";
	else if (i == 6) return "Han Quoc";
	else if (i == 7) return "Nhat Ban";
	else if (i == 8) return "Uc";
	else if (i == 9) return "Mi";
}
int to_Place(string s)
{
	if (s == "Nha Trang" || s == "nha trang") return 1;
	else if (s == "Ha Long" || s == "ha long") return 2;
	else if (s == "SaPa" || s == "sapa" || s == "sa pa" || s == "Sa Pa" || s == "Sa pa") return 3;
	else if (s == "Da Nang" || s == "da nang") return 4;
	else if (s == "Singapor" || s == "singapor" || s == "singapo") return 5;
	else if (s == "Han Quoc" || s == "han quoc") return 6;
	else if (s == "Nhat Ban" || s == "nhat ban") return 7;
	else if (s == "Uc" || s == "uc") return 8;
	else return 9;
}

string OutputVehicle(int i)
{
	if (i == 1) return "Xe khach";
	else if (i == 2) return "May bay";
	else if (i == 3) return "Tau thuy";
}
int to_Vehicle(string s)
{
	if (s == "Xe khach" || s == "xe khach") return 1;
	else if (s == "May bay" || s == "may bay") return 2;
	else return 3;
}

string OutputTypeTrip(int i)
{
	if (i == 0) return "Ngan ngay";
	else return "Dai ngay";
}
int to_TypeTrip(string s)
{
	if (s == "Dai ngay" || s == "dai ngay") return 1;
	else return 0;
}


void Customer:: Input()
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(setColor, 240);
	cout << " Ten khach hang:    " << endl;
	SetConsoleTextAttribute(setColor, 15);
	cin.ignore();
	getline(cin, name);
	SetConsoleTextAttribute(setColor, 240);
	cout << "Gioi tinh:          " << endl;
	SetConsoleTextAttribute(setColor, 15);
	cout << setfill('-') << setw(21) << '-' << endl;
	cout << "||     0. Nam      ||" << endl;
	cout << "||     1. Nu       ||" << endl;
	cout << setfill('-') << setw(21) << '-' << endl;
	cout << "Lua chon: ";
	do
	{
		cin >> gender;
		if (gender < 0 || gender > 1) cout << "Vui long nhap lai: ";
	} while (gender < 0 || gender >1);
	SetConsoleTextAttribute(setColor, 240);
	cout << " Tuoi:              " << endl;
	SetConsoleTextAttribute(setColor, 15);
	cin >> age;
	SetConsoleTextAttribute(setColor, 240);
	cout << " Ma dinh danh:      " << endl;
	SetConsoleTextAttribute(setColor, 15);
	cin.ignore();
	getline(cin, iD);
	SetConsoleTextAttribute(setColor, 240);
	cout << " Dia chi:           " << endl;
	SetConsoleTextAttribute(setColor, 15);
	getline(cin, address);
	SetConsoleTextAttribute(setColor, 240);
	cout << " Loai khach hang:   " << endl;
	SetConsoleTextAttribute(setColor, 15);
	cout << setfill('-') << setw(24) << '-' << endl;
	cout << "||    0. Thuong       ||" << endl;
	cout << "||    1. Than thiet   ||" << endl;
	cout << "||    2. Vip          ||" << endl;
	cout << setfill('-') << setw(24) << '-' << endl;
	cout << " Lua chon:          ";
	do
	{
		cin >> type;
		if (type < 0 || type >2) cout << "Vui long nhap lai: ";
	} while (type < 0 || type >2);
}
void Customer:: InputFromLine(string str, string* tm, int& i)          //Đọc dữ liệu khách từ 1 hàng của file lưu txt
{
	stringstream ss(str);
	string tmp;
	i = 0;
	while (getline(ss, tmp, ','))
	{
		tm[i] = tmp;
		i++;
	}
	i = 0;
	name = tm[i];
	gender = to_Gender(tm[++i]);
	age = stoi(tm[++i]);
	iD = tm[++i];
	address = tm[++i];
	type = to_TypeCustomer((tm[++i]));
	++i;
}
string Customer:: getFileSave()
{
	string temp;
	temp = name + ',' + Gender(gender) + ',' + to_string(age) + ',' + iD + ',' + address + ',' + TypeCustomer(type);
	return temp;
}
void Customer::Output(int pos)
{
	cout << setfill(' ');
	cout << "|| " << setw(2) << right << pos << "  ";
	cout << "|  " << setw(22) << left << name;
	cout << "|  " << setw(12) << left << iD;
	cout << "|     " << setw(6) << left << Gender(gender);
	cout << "|  " << setw(4) << left << age;
	cout << "| " << setw(11) << left << TypeCustomer(type);
	cout << "| " << setw(27) << left << address;
	cout << "||" << endl;
	cout << setfill('-') << setw(110) << '-' << endl;
}
void Customer :: OutputTotal(int pos)
{
	cout << setfill(' ');
	cout << "|| " << setw(2) << right << pos << "  ";
	cout << "|  " << setw(22) << left << name;
	cout << "|  " << setw(12) << left << iD;
	cout << "|     " << setw(6) << left << Gender(gender);
	cout << "|  " << setw(4) << left << age;
	cout << "| " << setw(11) << left << TypeCustomer(type);
}
istream& operator >> (istream& in, Customer& cus)
{
	cout << "Ten khach hang: ";
	cin.ignore();
	getline(in, cus.name);
	cout << "Gioi tinh:" << endl;
	cout << setfill('-') << setw(21) << '-' << endl;
	cout << "||     0. Nam      ||" << endl;
	cout << "||     1. Nu       ||" << endl;
	cout << setfill('-') << setw(21) << '-' << endl;
	cout << "Lua chon: ";
	do
	{
		in >> cus.gender;
		if (cus.gender != 1 && cus.gender != 0) cout << "Vui long chon dung: ";
	} while (cus.gender != 1 && cus.gender !=0);
	cout << "Tuoi: ";
	in >> cus.age;
	cout << "Ma dinh danh: ";
	cin.ignore();
	getline(in, cus.iD);
	cout << "Dia chi: ";
	getline(in, cus.address);
	cout << "oai khach hang: " << endl;
	cout << setfill('-') << setw(24) << '-' << endl;
	cout << "||    0. Thuong       ||" << endl;
	cout << "||    1. Than thiet   ||" << endl;
	cout << "||    2. Vip          ||" << endl;
	cout << setfill('-') << setw(24) << '-' << endl;
	cout << "Lua chon: ";
	do
	{
		in >> cus.type;
		if (cus.type < 0 || cus.type >2) cout << "Vui long nhap lai: ";
	} while (cus.type < 0 || cus.type >2);
	return in;
}
