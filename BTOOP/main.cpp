#include "Resource.h"

int main() {
	Loading();
	system("color 2");
	List l;
	createList(l);
	if (StartProgram("filename.txt", "filenumber.txt", l) == 1) {
		char conti('n');
		Action("List.csv","filename.txt","filenumber.txt" , l, conti);
	}
	Ending();
	return 0;
}