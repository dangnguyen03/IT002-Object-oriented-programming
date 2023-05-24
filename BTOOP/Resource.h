#pragma once

#include "Tour.h"
#include "Place.h"
#include "TypeTrip.h"
#include "Vehicle.h"
#include "Customer.h"
#include "Tour.h"
#include <fstream>


using namespace std;
class Tour;
class Customer;
class Place;
class Vehicle;
class Typetrip;


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

void OutputBoard();
void OutputBoard2();
struct Node
{
	Tour info;
	Node* pNext;
};
typedef Node* node;

struct List
{
	node pHead;
	node pTail;
};
typedef List& list;
void createList(list l);
node GetNode(Tour cus);
void addTail(list l, node p);
void addHead(list l, node p);
int countNode(List l);

void removeAfterQ(list l, node q);

void SelectionBoard();

void DetailCost();

void DetailInformation(const char* filename, List l, int pos);
void DeleteFirst(list l);
void DeleteList(const char* filename, const char* filenumber);


void DeleteFromName(const char* filename, const char* filenumber, list l, string name);
void DeleteFromID(const char* filename, const char* filenumber, list l, string iD);

void DetailInSearchName(List l, string name);
void DetailInSearchID(List l, string iD);
void ChangeInfomation(const char* filename, list l, string name);
void ChangeInfomation2(const char* filename, list l, string name);

void removeNode(list l, int pos);

int SearchID(List l, string id);
int SearchName(List l, string name);

void DeleteCustomer(const char* filename, const char* filenumber, list l, int pos);

void HighestToLowest(const char* filename, list l);
void LowestToHighest(const char* filename, list l);
void SortID(const char* filename, list l);
void SortName(const char* filename, list l);
void SortIDLower(const char* filename, list l);


void InputAddList(const char* filename, const char* filenumber, list l);
void OutputList(const char* filename, const char* filenumber);
void OutputList2(const char* filename, const char* filenumber);

int StartProgram(const char* filename, const char* filenumber, list l);


void creatFileCSV(const char* csv);
void FileCSV(const char* csv, const char* filename);
void FileName(const char* csv, const char* filename);

void Action(const char* csv, const char* filename, const char* filenumber, list l, char conti);
void gotoxy(int x, int y);
void load(string s);
void Loading();
void Ending();