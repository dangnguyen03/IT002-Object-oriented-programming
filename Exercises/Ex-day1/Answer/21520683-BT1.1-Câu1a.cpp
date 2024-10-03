#include <iostream>
using namespace std;
int main() {
	int Array[100];
	int n,k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> Array[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (Array[i] > Array[j]) {
				k = Array[i];
				Array[i] = Array[j];
				Array[j] = k;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << Array[i];
	}
}