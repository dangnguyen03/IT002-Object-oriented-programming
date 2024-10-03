#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
class Tour;
int to_TypeTrip(string s);
class TypeTrip
{
private:
	int type; //0 la ngan, 1 la dai, ngan la 3 ngay, dai la 2 tuan
public:
	void Input();
	void InputFromLine(string* tm, int i);
	long long Cost(long long cost);
	int getType();
	friend class Tour;
};