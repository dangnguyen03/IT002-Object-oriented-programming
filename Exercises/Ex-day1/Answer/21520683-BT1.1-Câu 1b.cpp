#include <iostream>
#include <cmath>
using namespace std;
struct ToaDo {
	float x;
	float y;
};
float khoangcach(ToaDo x, ToaDo y) {
	float k;
	k = sqrt(pow((x.x - y.x), 2) + pow((x.y - y.y), 2));
	return k;
}
void xuat(ToaDo x, ToaDo y) {
	cout << '(' << x.x << ',' << x.y << ')' << " va " << '(' << y.x << ',' << y.y << ')';
}
int main() {
	int n;
	cin >> n;
	ToaDo diem[100];
	for (int i = 0; i < n; i++) {
		cin >> diem[i].x >> diem[i].y;
	}
	int k = khoangcach(diem[0], diem[1]); int x=0, y=0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (k < khoangcach(diem[i], diem[j])) {
				k = khoangcach(diem[i], diem[j]);
				x = i; y = j;
			}
		}
	}
	xuat(diem[x], diem[y]);
}