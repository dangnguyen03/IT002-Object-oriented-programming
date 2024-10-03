#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string Gender(int i);
int to_Gender(string s);

string TypeCustomer(int i);

int to_TypeCustomer(string s);

string OutputPlace(int i);
int to_Place(string s);

string OutputVehicle(int i);
int to_Vehicle(string s);

string OutputTypeTrip(int i);
int to_TypeTrip(string s);

class Tour;

class Customer
{
private:
	string name;
	int gender; //0 ;a nu, 1 la nam
	int age;
	string iD;
	string address;
	int type;//0 thuong, 1: than thiet, 2: vip
public:
	Customer(){}
	virtual void Input();
	void InputFromLine(string str, string* tm, int& i);
	string getFileSave();
	void Output(int pos);
	void OutputTotal(int pos);
	~Customer() {}
	friend class Tour;
	friend istream& operator >> (istream& in, Customer& cus);
};