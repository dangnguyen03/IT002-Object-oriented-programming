#include <iostream>
#include <algorithm>
using namespace std;

class Time
{
private:
	int hour, minute, sec;
public:
	Time(){}
	bool operator > (const Time other);
	bool operator < (const Time other);
	bool operator == (const Time other);
	Time operator + (const Time other);
	Time operator - (const Time other);
	friend istream& operator  >> (istream& in, Time& t);
	friend ostream& operator << (ostream& out, Time t);
	~Time(){}
};

int main()
{
	Time t1, t2, t3;
	cout << "Enter time 1: " << endl;
	cin >> t1;
	cout << endl;
	cout << "Enter time 2: " << endl;
	cin >> t2;
	cout << endl;
	cout << "Output time 1: " << t1;
	cout << "Output time 2: " << t2 << endl;
	cout << "Sum time: " << t1 + t2;
	cout << "Eliminate: " << t1 - t2 << endl;
	cout << t1 << "   " << t2 << endl;
	if (t1 > t2) cout << "Bigger: t1 " << endl;
	else if (t1 < t2) cout << "Bigger t2" << endl;
	else if (t1 == t2) cout << "Equal" << endl;
	return 0;
}

bool Time :: operator > (const Time other)
{
	if (this->hour < other.hour) return false;
	else if (this->hour > other.hour) return true;
	else if (this->minute < other.minute) return false;
	else if (this->minute > other.minute) return true;
	else if (this->sec <= other.sec) return false;
	else return true;
}
bool Time ::operator < (const Time other)
{
	if (this->hour < other.hour) return true;
	else if (this->hour > other.hour) return false;
	else if (this->minute < other.minute) return true;
	else if (this->minute > other.minute) return false;
	else if (this->sec < other.sec) return true;
	else return false;
}
bool Time ::operator == (const Time other)
{
	if (this->hour != other.hour) return false;
	else if (this->minute != other.minute)return false;
	else if (this->sec != other.sec) return false;
	else return true;
}
Time Time :: operator + (const Time other)
{
	Time temp = *this;
	this->sec += other.sec;
	if (this->sec >= 60)
	{
		this->sec -= 60;
		this->minute += 1;
	}
	this->minute += other.minute;
	if (this->minute >= 60)
	{
		this->minute -= 60;
		this->hour += 1;
	}
	this->hour += other.hour;
	if (this->hour >= 24)this->hour -= 24;
	swap(temp, *this);
	return temp;
}
Time Time :: operator - (const Time other)
{
	Time temp = *this;
	this->sec =this->sec -  other.sec;
	if (this->sec < 0)
	{
		this->sec += 60;
		this->minute -= 1;
	}
	this->minute-= other.minute;
	if (this->minute < 0)
	{
		this->minute += 60;
		this->hour -= 1;
	}
	this->hour -= other.hour;
	if (this->hour < 0)this->hour += 24;
	swap(temp, *this);
	return temp;
}
istream& operator  >> (istream& in, Time& t)
{
	cout << "Enter hour: ";
	do
	{
		in >> t.hour;
		if (t.hour < 0 || t.hour >= 60) cout << "Enter again: ";
	} while (t.hour < 0 || t.hour >= 60);
	cout << "Enter minute: ";
	do
	{
		in >> t.minute;
		if (t.minute < 0 || t.minute >= 60) cout << "Enter again: ";
	} while (t.minute < 0 || t.minute >= 60);
	cout << "Enter section: ";
	do
	{
		in >> t.sec;
		if (t.sec < 0 || t.sec >= 60) cout << "Enter again: ";
	} while (t.sec < 0 || t.sec >= 60);
	return in;
}
ostream& operator << (ostream& out, Time t)
{
	if (t.hour < 10) out << 0 << t.hour;
	else out << t.hour;
	out << ':';
	if (t.minute < 10) out << 0 << t.minute;
	else out << t.minute;
	out << ':';
	if (t.sec < 10) out << 0 << t.sec;
	else out << t.sec;
	out << endl;
	return out;
}