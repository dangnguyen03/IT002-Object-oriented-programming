#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Tour;
int to_Place(string s);
class Place
{
private:
	long long NhaTrang, HaLong, Sapa, DaNang, Singapor, Han, Nhat, Uc, America;
public:
	Place();
	void Input(int& choose);
	void InputFromLine(int& choose, string* tm, int& i);
	long long Cost(int choose);
	friend class Tour;
	~Place(){}
};