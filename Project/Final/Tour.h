#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <windows.h>
#include "Place.h"
#include "Vehicle.h"
#include "TypeTrip.h"
#include "Customer.h"
using namespace std;

void quyDoi(int i);
string Gender(int i);
string TypeCustomer(int i);
string OutputPlace(int i);
string OutputVehicle(int i);
string OutputTypeTrip(int i);
void OutputBoard();

class Tour : public Customer {
private:
	int choose;
	Place pla;
	Vehicle veh;
	TypeTrip typetr;
public:
	Tour(){}
	void Input();
	void InputFromLine(string str);
	void Output(int pos);
	void OutputTotal(int pos);
	long long CostAge(long long cost);
	long long CostType(long long cost);
	long long Total();
	string getFileSave();
	string getID();
	string getName();
	void OutputDetail();
	~Tour(){}
};