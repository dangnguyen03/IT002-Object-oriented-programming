#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Tour;
int to_Vehicle(string s);
class Vehicle
{
private:
	int typeVehicle;
	float coach;
	float plane;
	float ship;
public:
	int getTypeVehicle();
	void InputFromLine(string* tm, int& i);
	void Input();
	long long Cost(int choose);
	friend class Tour;
};