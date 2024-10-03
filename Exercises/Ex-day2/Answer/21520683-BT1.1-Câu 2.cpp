#include <iostream>
using namespace std;
class Day {
private:
	int ngay, thang, nam;
public:
	void input() {
		cout << "Nhap ngay: "; cin >> ngay;
		cout << "Nhap thang: "; cin >> thang;
		cout << "Nhap nam: "; cin >> nam;
	}
	int checknhuan() {
		if (nam % 400 == 0 && nam % 100 != 0) return 1;
		return 0;
	}
	void  output() {
		cout << "Ngay tiep theo: " << ngay << '/' << thang << '/' << nam << endl;
	}
	void phanbietthang2(Day& a) {
		if (a.checknhuan()) {
			if (a.ngay <= 28) {
				ngay++;
			}
			else
			{
				ngay = 1; 
				thang = 3;
			}
		}
		else
		{
			if (a.ngay < 28) {
				ngay++;
			}
			else
			{
				ngay = 1;
				thang = 3;
			}
		}
	}
	void tinhtoan(Day& a) {
		if (thang != 2) {
			if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
				if (ngay <= 30) {
					ngay++;
				}
				else if (thang != 12) {
					ngay = 1; thang++;
				}
				else {
					ngay = 1; thang = 1; nam++;
				}
			}
			else {
				if (ngay <29) {
					ngay++;
				}
				else {
					ngay = 1; thang++;
				}
			}
		}
		else
		{
			phanbietthang2(a);
		}
	}

};
int main() {
	Day a;
	a.input();
	a.tinhtoan(a);
	a.output();
	return 0;
}