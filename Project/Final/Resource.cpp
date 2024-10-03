#include "Resource.h"
#include <algorithm>
#include <string>
#include <windows.h>

void OutputBoard()   // Tên thuộc tính trong bảng
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(setColor, 48);
	cout << "||"; 	 cout <<" STT ";	
	cout << setfill(' ') << "|        Ten" << setw(13) << ' ';
	cout << "| Ma dinh danh" << setw(1) << ' ';
	cout << "| Gioi tinh ";
	cout << "| Tuoi" << setw(1) << ' ';
	cout << "| Loai khach ";
	cout << "|        Dia chi" << setw(13) << ' ' << "||" << endl;
	SetConsoleTextAttribute(setColor, 180);
}
void OutputBoard2()
{
		HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(setColor, 48);
	cout << "||"; 	 cout <<" STT ";	
	cout << setfill(' ') << "|        Ten" << setw(13) << ' ';
	cout << "| Ma dinh danh" << setw(1) << ' ';
	cout << "| Gioi tinh ";
	cout << "| Tuoi" << setw(1) << ' ';
	cout << "| Loai khach ";
	cout << "|    Tong gia ve" << setw(13) << ' ' << "||" << endl;
	SetConsoleTextAttribute(setColor, 180);
}
void createList(list l)
{
	l.pHead = l.pTail = NULL;
}
node GetNode(Tour cus)
{
	node temp = new Node;
	temp->info = cus;
	temp->pNext = NULL;
	return temp;
}
void addTail(list l, node p) {
	if (l.pHead == NULL)
		l.pHead = l.pTail = p;
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
void addHead(list l, node p) {
	if (!l.pHead)
		l.pHead = l.pTail = p;
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
int countNode(List l)
{
	node temp = l.pHead;
	int count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->pNext;
	}
	return count;
}

void removeAfterQ(list l, node q)
{
	node temp;
	if (q != NULL)
	{
		temp = q->pNext;
		if (temp != NULL)
		{
			if (temp == l.pTail)
				l.pTail = q;
			q->pNext = temp->pNext;
			delete temp;
		}
		else return;
	}
	else return;
}

void SelectionBoard()
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << setfill('*') << setw(55) << '*' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << "**       CAC THAO TAC VOI DANH SACH KHACH HANG       **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << setfill('*') << setw(55) << '*' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   1. Xoa toan bo danh sach da luu                 **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   2. Them khach hang vao danh sach                **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   3. Xoa mot khach hang trong danh sach           **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   4. Sap xep danh sach theo chi dinh              **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   5. Tim kiem                                     **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   6. Chi tiet thong tin ve cua khach hang         **";   //Chi tiết thông tin vé của khách hàng
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   7. Xuat danh sach khach hang                    **" ;
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   8. Thong tin gia chi tiet                       **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**   9. Xuat file CSV                                **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**  10. Cap nhat tu file CSV                         **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << "**  11. Thoat                                        **";
		SetConsoleTextAttribute(setColor, 15);
	cout << endl << setfill(' ') << setw(26) << ' ';
	SetConsoleTextAttribute(setColor, 224);
	cout << setfill('*') << setw(55) << '*';
		SetConsoleTextAttribute(setColor, 15);
	cout << endl;
}

void DetailCost()
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);	
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << setfill('*') << setw(75) << '*' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << "**               DANH MUC VE CO BAN  ";
	cout << setfill(' ') << setw(13) << ' ';
	cout << "**       Gia (VND)     **" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << setfill('*') << setw(75) << '*' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||  I. DIA DIEM   "; cout << setfill(' ') << setw(32) << ' ';
	cout << "||"; cout << setfill(' ') << setw(21) << ' '; cout << "||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    1. Nha Trang"; cout << setw(32) << ' '; cout << "||       7 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    2. Ha Long  "; cout << setw(32) << ' '; cout << "||      15 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    3. Sa Pa    "; cout << setw(32) << ' '; cout << "||       5 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    4. Da Nang  "; cout << setw(32) << ' '; cout << "||      10 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    5. Singapor "; cout << setw(32) << ' '; cout << "||      30 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    6. Han Quoc "; cout << setw(32) << ' '; cout << "||      50 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    7. Nhat Ban "; cout << setw(32) << ' '; cout << "||      45 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    8. Uc       "; cout << setw(32) << ' '; cout << "||      25 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    9. My       "; cout << setw(32) << ' '; cout << "||      55 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << setfill('-') << setw(75) << '-' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||  II. PHUONG TIEN (x1.2 voi nuoc ngoai)"; cout << setfill(' ') << setw(9) << ' ';
	cout << "||"; cout << setfill(' ') << setw(21) << ' '; cout << "||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    1. Xe khach "; cout << setw(32) << ' '; cout << "||       1 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    2. May bay  "; cout << setw(32) << ' '; cout << "||       7 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    3. Tau thuy "; cout << setw(32) << ' '; cout << "||      10 000 000     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << setfill('-') << setw(75) << '-' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||            Ve co ban = Gia dia diem + Gia phuong tien                 ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << setfill('*') << setw(75) << '*' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << "**                  TINH GIA VE";
	cout << setfill(' ') << setw(19) << ' ';
	cout << "**       Gia (VND)     **" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 356);
	cout << setfill('*') << setw(75) << '*' << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||  I. Duoi 10 tuoi            " << setfill(' ') << setw(19) << ' '; cout << "||   Ve co ban * 0.5   ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||  II. Loai tour ( > 7 ngay ) " << setfill(' ') << setw(19) << ' '; cout << "||   Ve co ban * 1.5   ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||  III. Loai khach            " << setfill(' ') << setw(19) << ' '; cout << "||                     ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    1. Thuong                " << setfill(' ') << setw(19) << ' '; cout << "||     Ve co ban       ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    2. Than thiet            " << setfill(' ') << setw(19) << ' '; cout << "||   Ve co ban * 0.95  ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||    3. VIP                   " << setfill(' ') << setw(19) << ' '; cout << "||   Ve co ban * 0.9   ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << "||  III. Nuoc ngoai            " << setfill(' ') << setw(19) << ' '; cout << "||   Ve co ban * 1.2   ||" << endl;
		SetConsoleTextAttribute(setColor, 15);
	cout << setfill(' ') << setw(15) << ' ';
	SetConsoleTextAttribute(setColor, 484);
	cout << setfill('-') << setw(75) << '-' << endl;
	cout << endl;
		SetConsoleTextAttribute(setColor, 15);
}

void DetailInformation(const char* filename, List l, int pos)
{
	ifstream fileName;
	string str;
	fileName.open(filename);
	for (int i = 0; i < pos; i++)
	{
		getline(fileName, str);
	}
	fileName.close();
	Tour tou;
	tou.InputFromLine(str);
	tou.OutputDetail();

}
void DeleteFirst(list l)
{
	node temp = l.pHead;
	if (temp == NULL) return;
	else if (temp->pNext == NULL) createList(l);
	else
	{
		temp = temp->pNext;
		l.pHead = temp;
	}
}
void DeleteList(const char* filename, const char* filenumber)     //Mục  1
{
	fstream fileNumber;
	fileNumber.open(filenumber, ios::out);
	int n = 0;
	fileNumber << n;
	fileNumber.close();
	ofstream fileName;
	fileName.open(filename);   // Cách xóa nội dung từ file mở ra bằng cú pháp ios :: trunc
	fileName.close();
}

void DeleteFromName(const char* filename, const char* filenumber, list l, string name)
{
	node t = l.pHead;
	if (t == NULL) return;
	if (t->info.getName() == name)
	{
		DeleteFirst(l);
	}
	else
	{
		while (t!=NULL)
		{
			if (t->pNext->info.getName() == name) break;
			t = t->pNext;
		}
		removeAfterQ(l, t);
	}
	fstream fileName, fileNumber;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename, ios::out);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	delete[] str;
	fileName.close();
	fileNumber.open(filenumber);
	int n;
	fileNumber >> n;
	fileNumber.close();
	ofstream fileNu;
	fileNu.open(filenumber);
	if (n >= 1)
		n--;
	fileNu << n;
	fileNu.close();
	cout << "Da xong" << endl;
}
void DeleteFromID(const char* filename, const char* filenumber, list l, string iD)
{
	node t = l.pHead;
	if (t == NULL) return;
	if (t->info.getID() == iD)
	{
		DeleteFirst(l);
	}
	else
	{
		while (t != NULL)
		{
			if (t->pNext->info.getID() == iD) break;
			t = t->pNext;
		}
		removeAfterQ(l, t);
	}
	fstream fileName, fileNumber;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename, ios::out);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	delete[] str;
	fileName.close();
	fileNumber.open(filenumber);
	int n;
	fileNumber >> n;
	fileNumber.close();
	ofstream fileNu;
	fileNu.open(filenumber);
	if (n >= 1)
		n--;
	fileNu << n;
	fileNu.close();
	cout << "Da xong" << endl;
}
void DetailInSearchName(List l,string name)
{
	string str;
	node temp = l.pHead;
	while (temp != NULL)
	{
		if (temp->info.getName() == name) str = temp->info.getFileSave();
		temp = temp->pNext;
	}
	Tour tou;
	tou.InputFromLine(str);
	tou.OutputDetail();
}
void DetailInSearchID(List l, string iD)
{
	string str;
	node temp = l.pHead;
	while (temp != NULL)
	{
		if (temp->info.getID()==iD) str = temp->info.getFileSave();
		temp = temp->pNext;
	}
	Tour tou;
	tou.InputFromLine(str);
	tou.OutputDetail();
}
void ChangeInfomation(const char* filename, list l, string name)
{
	node t = l.pHead;
	while (t != NULL)
	{
		if (t->info.getName() == name) break;
		t = t->pNext;
	}
	Tour tou;
	tou.Input();
	t->info = tou;
	cout << "Da xong" << endl;
	fstream fileName;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename, ios::out);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	delete[] str;
}
void ChangeInfomation2(const char* filename, list l, string id)
{
	node t = l.pHead;
	while (t != NULL)
	{
		if (t->info.getID() == id) break;
		t = t->pNext;
	}
	Tour tou;
	tou.Input();
	t->info = tou;
	cout << "Da xong" << endl;
	fstream fileName;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename, ios::out);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	delete[] str;
}

void removeNode(list l, int pos)
{
	node temp = l.pHead;
	for (int i = 0; i < pos - 2; i++)
	{
		temp = temp->pNext;
	}
	if (pos == 1) DeleteFirst(l);
	else removeAfterQ(l, temp);
}

int SearchID(List l, string id)         //Mục 5.2
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	int stt = 1;
	for (node i = l.pHead; i != NULL; i = i->pNext)
	{
		if (i->info.getID() == id)
		{
			SetConsoleTextAttribute(setColor, 180);
			cout << setfill('-') << setw(110) << '-' << endl;
			i->info.Output(stt++);
				SetConsoleTextAttribute(setColor, 15);
		}
	}
	if (stt == 1)
	{
		SetConsoleTextAttribute(setColor, 4);
		cout << "Khong tim thay." << endl;
			SetConsoleTextAttribute(setColor, 15);
		return 0;
	}
	return 1;
}
int SearchName(List l, string name)             //Mục 5.1
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	int stt = 1;
	for (node i = l.pHead; i != NULL; i = i->pNext)
	{
		if (i->info.getName() == name)
		{
			SetConsoleTextAttribute(setColor, 180);
			cout << setfill('-') << setw(110) << '-' << endl;
			i->info.Output(stt++);
				SetConsoleTextAttribute(setColor, 15);
		}
	}
	if (stt == 1)
	{
		SetConsoleTextAttribute(setColor, 4);
		cout << "Khong tim thay." << endl;
			SetConsoleTextAttribute(setColor, 15);
		return 0;
	}
	return 1;
}

void DeleteCustomer(const char* filename, const char* filenumber, list l, int pos)                //   Mục 3
{
	if (pos == 0) return;
	fstream fileName, fileNumber;
	removeNode(l, pos);
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename, ios::out);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	delete[] str;
	fileName.close();
	fileNumber.open(filenumber);
	int n;
	fileNumber >> n;
	fileNumber.close();
	ofstream fileNu;
	fileNu.open(filenumber);
	if (n >= 1)
		n--;
	cout << "So khach hang con lai trong danh sach: " << n << endl;
	fileNu << n;
	fileNu.close();
}

void HighestToLowest(const char* filename, list l)             //Mục 4
{
	for (node i = l.pHead; i->pNext != NULL; i = i->pNext)
	{
		for (node j = i->pNext; j != NULL; j = j->pNext)
		{
			if (i->info.Total() < j->info.Total())
				swap(i->info, j->info);
		}
	}
	fstream fileName;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename, ios::out);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	delete[] str;
}
void LowestToHighest(const char* filename, list l)              //Mục 4
{
	for (node i = l.pHead; i->pNext != NULL; i = i->pNext)
	{
		for (node j = i->pNext; j != NULL; j = j->pNext)
		{
			if (i->info.Total() > j->info.Total())
				swap(i->info, j->info);
		}
	}
	fstream fileName;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename, ios::out);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	delete[] str;
}
void SortID(const char* filename, list l)                //Mục 4
{
	for (node i = l.pHead; i->pNext != NULL; i = i->pNext)
	{
		for (node j = i->pNext; j != NULL; j = j->pNext)
		{
			if (i->info.getID() > j->info.getID()) 
				swap(i->info, j->info);
		}
	}

	ofstream fileName;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	fileName.close();
	delete[] str;
}
void SortIDLower(const char* filename, list l)                //Mục 4
{
	for (node i = l.pHead; i->pNext != NULL; i = i->pNext)
	{
		for (node j = i->pNext; j != NULL; j = j->pNext)
		{
			if (i->info.getID() < j->info.getID())
				swap(i->info, j->info);
		}
	}

	ofstream fileName;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	fileName.close();
	delete[] str;
}
void SortName(const char* filename, list l)            
{
	for (node i = l.pHead; i->pNext != NULL; i = i->pNext)
	{
		for (node j = i->pNext; j != NULL; j = j->pNext)
		{
			if (i->info.getName() > j->info.getName())
				swap(i->info, j->info);
		}
	}
	ofstream fileName;
	string* str = new string[100];
	node temp = l.pHead;
	int i = 0;
	while (temp != NULL)
	{
		str[i++] = temp->info.getFileSave();
		temp = temp->pNext;
	}
	fileName.open(filename);
	for (int j = 0; j < i; j++)
	{
		fileName << str[j];
	}
	fileName.close();
	delete[] str;
}

void InputAddList(const char* filename, const char* filenumber, list l)
{
	cout << "So khach muon nhap: ";
	int n;
	cin >> n;
	int newN = 0;   //Lưu lại số lượng khách hàng có sẵn trong file 
	ofstream fileInformation;
	fileInformation.open(filename, ios::app);
	ifstream fileNumber;
	fileNumber.open(filenumber);           //Mở file number để đọc số lượng khách có sẵn và thay đổi sau khi nhập thêm
	fileNumber >> newN;
	for (int i = 0; i < n; i++)
	{
		Tour temp;
		string saveInfo;
		temp.Input();
		node in = GetNode(temp);
		addTail(l, in);
		saveInfo = temp.getFileSave();
		fileInformation << saveInfo;
	}
	n += newN;
	fileNumber.close();
	ofstream addFileNumber;
	addFileNumber.open(filenumber);  //Mở file number lưu lại số lượng khác hàng mới
	addFileNumber << n;
	addFileNumber.close();
	fileInformation.close();
}
void OutputList(const char* filename, const char* filenumber)
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	Tour* tou = new Tour[100];
	ifstream fileName;
	fileName.open(filename);
	string* str = new string[100];
	SetConsoleTextAttribute(setColor, 31);
	cout << setfill(' ') << setw(40) << ' ';
	cout << "DANH SACH KHACH HANG";
	cout << setfill(' ') << setw(50) << ' ' << endl;
		SetConsoleTextAttribute(setColor, 15);
	OutputBoard();
	ifstream fileNumber;
	fileNumber.open(filenumber);
	int n;
	fileNumber >> n;
	fileNumber.close();
	for (int i = 0; i < n; i++)
	{
		getline(fileName, str[i]);    //Trích xuất từng dòng thông tin của file name lưu trữ
		tou[i].InputFromLine(str[i]);
		tou[i].Output(i + 1);
	}
	fileName.close();
	delete[] str;
	delete[] tou;
		SetConsoleTextAttribute(setColor, 15);
}
void OutputList2(const char* filename, const char* filenumber)
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	Tour* tou = new Tour[100];
	ifstream fileName;
	fileName.open(filename);
	string* str = new string[100];
	SetConsoleTextAttribute(setColor, 31);
	cout << setfill(' ') << setw(40) << ' ';
	cout << "DANH SACH KHACH HANG";
	cout << setfill(' ') << setw(50) << ' ' << endl;
		SetConsoleTextAttribute(setColor, 15);
	OutputBoard2();
	ifstream fileNumber;
	fileNumber.open(filenumber);
	int n;
	fileNumber >> n;
	fileNumber.close();
	for (int i = 0; i < n; i++)
	{
		getline(fileName, str[i]);    //Trích xuất từng dòng thông tin của file name lưu trữ
		tou[i].InputFromLine(str[i]);
		tou[i].OutputTotal(i + 1);
	}
	fileName.close();
	delete[] str;
	delete[] tou;
		SetConsoleTextAttribute(setColor, 15);
}

int StartProgram(const char* filename, const char* filenumber, list l)
{
	Tour* tou = new Tour[100];
	ifstream fileName;
	fileName.open(filename);
	string* str = new string[100];
	string strcount;
	ifstream fileNumber;
	fileNumber.open(filenumber);
	int n = 0;
	fileNumber >> n;
	fileNumber.close();
	int count = 0;
	while (getline(fileName, strcount))
	{
		count++;
	}
	fileName.close();
	fileName.open(filename);
	int choose;
	if (count != n) {
		cout << "File bi loi khong the chay duoc. Co 3 cach giai quyet " << endl;
		cout << setfill('-') << setw(38) << '-' << endl;
		cout << "| 1. Xy ly file thu cong             |" << endl;
		cout << "| 2. xy ly file tu dong              |" << endl;
		cout << "| 3. Xoa toan bo file cu             |" << endl;
		cout << setfill('-') << setw(38) << '-' << endl;	
		cout << "Lua chon: ";
		do
		{
			cin >> choose;
			if (choose != 2 && choose != 1 && choose !=3) cout << "Nhap lai: ";
		} while (choose != 2 && choose != 1 && choose != 3);
		switch (choose)
		{
		case 1:
		{
			return 0;
		}
		case 3:
		{
			DeleteList(filename, filenumber);
			cout << "Da thuc hien.";
			break;
		}
		case 2:
		{
			ofstream fileNumber;
			fileNumber.open(filenumber);
			fileNumber << count;
			fileNumber.close();
			return StartProgram(filename, filenumber, l);
			break;
		}
		}
	}
	else
		for (int i = 0; i < n; i++)
		{
			getline(fileName, str[i]);    //Trích xuất từng dòng thông tin của file name lưu trữ
			tou[i].InputFromLine(str[i]);
			node in = GetNode(tou[i]);
			addTail(l, in);
		}
	fileName.close();
	delete[] str;
	delete[] tou;
	return 1;
}

void creatFileCSV(const char* csv)
{
	ofstream filecsv;
	filecsv.open(csv);
	filecsv << "  Ten  ,  Gioi tinh  ,  Tuoi,  Ma dinh danh  ,  Dia chi  ,  Loai khac hang  ,  Dia diem du lich  ,  Phuong tien  , Loai ve  \n";
	filecsv.close();
}
void FileCSV(const char* csv, const char* filename)
{
	creatFileCSV(csv);
	ofstream filecsv;
	filecsv.open(csv , ios :: app);
	ifstream fileName;
	fileName.open(filename);

	string str;
	while(getline(fileName, str))
	{
		filecsv << str;
		filecsv << '\n';
	}
	fileName.close();
	filecsv.close();
}
void FileName(const char* csv, const char* filename)    //Cập nhật lại file name nếu có chỉnh sửa trong file csv
{
	ifstream filecsv;
	filecsv.open(csv);
	ofstream fileName;
	fileName.open(filename);

	string str;
	int i = 0;
	while (getline(filecsv, str))
	{
		if (i != 0) {
			fileName << str;
			fileName << '\n';
		}
		i++;
	}
	fileName.close();
	filecsv.close();
}

void Action(const char* csv,const char* filename,const char* filenumber, list l, char conti)
{
	HANDLE setColor;
	setColor = GetStdHandle(STD_OUTPUT_HANDLE);
	int choose;
	do {
		cout << '\n';
		SelectionBoard();
		cout << '\n';
		do
		{
			cout << "Lua chon cua ban: ";
			cin >> choose;
			if (choose < 1 || choose>11) cout << "Khong co thao tac thoa man, vui long nhap lai: ";
		} while (choose < 1 || choose >11);
		system("cls");
		switch (choose)
		{
		case 1:
		{
			cout << "Bam '1' de xac nhan xoa: ";
			int ch;
			cin >> ch;
			if (ch !=1) break;
			else {
				DeleteList(filename, filenumber);
				cout << "Da xoa danh sach truoc do." << endl;
				break;
			}
		}
		case 2:
		{
			InputAddList(filename, filenumber, l);
			OutputList(filename, filenumber);
			break;
		}
		case 3:
		{
			OutputList(filename, filenumber);
			cout << '\n';
			int c = 0;
			do
			{
				cout << "Chon STT muon xoa (Bam '0' de huy thao tac nay) : ";
				int pos;
				do
				{
					cin >> pos;
					if (pos< 0 || pos>countNode(l)) cout << "STT khong ton tai, ui long nhap lai: " << endl;
				} while (pos < 0 || pos > countNode(l));
				if (pos != 0)
				{
					SetConsoleTextAttribute(setColor, 224);
					cout << "Ban da chac chan muon xoa (Y/N): ";
						SetConsoleTextAttribute(setColor, 15);
					cout << "  ";
					char ans;
					cin >> ans;
					if (!(ans != 'Y' && ans != 'y'))
					{
						DeleteCustomer(filename, filenumber, l, pos);
						cout << "Da xoa." << endl;
						OutputList(filename, filenumber);
					}
				}
				else
				{
					c = 1;
				}
			} while (c == 0);
			break;
		}
		case 4:
		{
			OutputList(filename, filenumber);
			cout << '\n';
			int c3 = 0;
			do
			{
				cout << setfill('-') << setw(40) << '-' << endl;
				cout << "|| 1. Sap xep tang theo tong gia ve   ||" << endl;
				cout << "|| 2. Sap xep giam theo tong gia ve   ||" << endl;
				cout << "|| 3. Sap xep tang theo ma dinh danh  ||" << endl;
				cout << "|| 4. Sap xep giam theo ma dinh danh  ||" << endl;
				cout << "|| 5. Sap xep theo ten                ||" << endl;
				cout << "|| 6. quay lai                        ||" << endl;
				cout << setfill('-') << setw(40) << '-' << endl;
				cout << "Lua chon: ";
				int c;
				do
				{
					cin >> c;
					if (c < 1 || c>6) cout << "Chua co sap xep nay, vui long nhap lai: ";
				} while (c < 1 || c>6);
				if (countNode(l) <= 1) {
					cout << "Da xong." << endl;
					break;
				}
				int out = 0;
				switch (c)
				{
				case 1:
				{
					LowestToHighest(filename, l);
					cout << "Da sap xep." << endl;
					break;
				}
				case 2:
				{
					HighestToLowest(filename, l);
					cout << "Da sap xep." << endl;
					break;
				}
				case 3:
				{
					SortID(filename, l);
					cout << "Da sap xep." << endl;
					break;
				}
				case 4:
				{
					SortIDLower(filename, l);
					cout << "Da sap xep." << endl;
					break;
				}
				case 5: 
					{
					SortName(filename, l);
					cout << "Da sap xep." << endl;
					break; 
					}
				}
				if (c != 6)
				{
					int c1;
					cout << setfill('-') << setw(40) << '-' << endl;
					cout << "|| 1. Xuat danh sach sau khi sap xep  ||" << endl;
					cout << "|| 2. Quay lai                        ||" << endl;
					cout << setfill('-') << setw(40) << '-' << endl;
					cout << "Lua chon: ";
					do
					{
						cin >> c1;
						if (c1 != 1 && c1 != 2) cout << "Khong co, vui long nhap lai: ";
					} while (c1 != 1 && c1 != 2);
					switch (c1)
					{
					case 1:	OutputList2(filename, filenumber); break;
					case 2: c3 = 1;   break;
					}
				}
				else c3 = 1;
			} while (c3 != 1);
			break;
		}
		case 5:
		{
			int c;
			do
			{
			cout << setfill('-') << setw(29) << '-' << endl;
			cout << "|| 1. Tim kiem theo ten    ||" << endl;
			cout << "|| 2. Tim kiem ID          ||" << endl;
			cout << "|| 3. Quay lai             ||" << endl;
			cout << setfill('-') << setw(29) << '-' << endl;
				do
				{
					cout << "Lua chon cua ban: ";
					cin >> c;
					if (c < 1 || c>3) cout << "Chua co phuong thuc tim kiem nay, vui long nhap lai: ";
				} while (c < 1 || c>3);
				switch (c)
				{
				case 1:
				{
					cout << "Ten can tim: ";
					int ch = 0;
					string name;
					cin.ignore();
					getline(cin, name);
					if (SearchName(l, name))
					{
						int c1 = 4;
						cout << endl;
						char c2('n');
						do
						{
							if (ch == 0)
							{
								cout << setfill('-') << setw(29) << '-' << endl;
								cout << "|| 1. Xoa doi tuong nay    ||" << endl;
								cout << "|| 2. Xem chi tiet ve      ||" << endl;
								cout << "|| 3. Sua doi thong tin    ||" << endl;
								cout << "|| 4. Quay lai             ||" << endl;
								cout << setfill('-') << setw(29) << '-' << endl;
							}
							else
							{
								cout << setfill('-') << setw(29) << '-' << endl;
								cout << "||"; 
								SetConsoleTextAttribute(setColor, 4); 
								cout << " 1. Xoa doi tuong nay   ";
									SetConsoleTextAttribute(setColor, 15);
								cout<<" || " << endl;
								cout << "||"; 		
								SetConsoleTextAttribute(setColor, 4); 
								cout << " 2. Xem chi tiet ve     ";
									SetConsoleTextAttribute(setColor, 15);
								cout<<" || " << endl;
								cout << "||"; 
								SetConsoleTextAttribute(setColor, 4);
								cout << " 3. Sua doi thong tin   "; 
									SetConsoleTextAttribute(setColor, 15);
								cout<<" || " << endl;
								cout << "|| 4. Quay lai             ||" << endl;
								cout << setfill('-') << setw(29) << '-' << endl;
							}
							cout << "Lua chon cua ban: ";
	
							do
							{
								if (c1 == 1 || c1 == 3) ch = 1;
								cin >> c1;
								if (c1 < 1 || c1>4) cout << "Chua co phuong thuc tim kiem nay, vui long nhap lai: ";
							} while (c1 < 1 || c1>4);
							switch (c1)
							{
							case 1:
							{
								if (ch == 0)
									DeleteFromName(filename, filenumber, l, name);
								else {
									SetConsoleTextAttribute(setColor, 4);
									cout << "Doi tuong nay da bi xoa hoac da bi thay doi" << endl;
									SetConsoleTextAttribute(setColor, 15);
								}
								break;
							}
							case 2:
							{
								if (ch == 0)
								{
									DetailInSearchName(l, name);
									SetConsoleTextAttribute(setColor, 15);
								}
								else {
									SetConsoleTextAttribute(setColor, 4);
									cout << "Doi tuong nay da bi xoa hoac da bi thay doi" << endl;
									SetConsoleTextAttribute(setColor, 15);
								}
								break;
							}
							case 3: 
							{
								if (ch == 0) {
									ChangeInfomation(filename, l, name);
								}
								else {
									SetConsoleTextAttribute(setColor, 4);
									cout << "Doi tuong nay da bi xoa hoac da bi thay doi" << endl;
									SetConsoleTextAttribute(setColor, 15);
								}
								break;
							}
							case 4: c2 = 'y';   break;
							}
							if (c2 != 'n') cout << endl;
						} while (c2 == 'n');
					}
					break;
				}
				case 2:
				{
					cout << "ID can tim: ";
					int ch = 0;
					string iD;
					cin.ignore();
					getline(cin, iD);
					if (SearchID(l, iD))
					{
						int c1 = 4;
						cout << endl;
						char c2('n');
						do
						{
							if (ch == 0)
							{
								cout << setfill('-') << setw(29) << '-' << endl;
								cout << "|| 1. Xoa doi tuong nay    ||" << endl;
								cout << "|| 2. Xem chi tiet ve      ||" << endl;
								cout << "|| 3. Sua doi thong tin    ||" << endl;
								cout << "|| 4. Quay lai             ||" << endl;
								cout << setfill('-') << setw(29) << '-' << endl;
							}
							else
							{
								cout << setfill('-') << setw(29) << '-' << endl;
								cout << "||";
								SetConsoleTextAttribute(setColor, 4);
								cout << " 1. Xoa doi tuong nay   ";
									SetConsoleTextAttribute(setColor, 15);
								cout << " || " << endl;
								cout << "||";
								SetConsoleTextAttribute(setColor, 4);
								cout << " 2. Xem chi tiet ve     ";
									SetConsoleTextAttribute(setColor, 15);
								cout << " || " << endl;
								cout << "||";
								SetConsoleTextAttribute(setColor, 4);
								cout << " 3. Sua doi thong tin   ";
									SetConsoleTextAttribute(setColor, 15);
								cout << " || " << endl;
								cout << "|| 4. Quay lai             ||" << endl;
								cout << setfill('-') << setw(29) << '-' << endl;
							}
							cout << "Lua chon cua ban: ";
							do
							{
								if (c1 == 1 || c1 == 3) ch = 1;
								cin >> c1;
								if (c1 < 1 || c1>4) cout << "Chua co phuong thuc tim kiem nay, vui long nhap lai: ";
							} while (c1 < 1 || c1>4);
							switch (c1)
							{
							case 1:
							{
								if (ch == 0)
									DeleteFromName(filename, filenumber, l, iD);
								else {
									SetConsoleTextAttribute(setColor, 4);
									cout << "Doi tuong nay da bi xoa hoac da bi thay doi" << endl;
									SetConsoleTextAttribute(setColor, 15);
								}
								break;
							}
							case 2:
							{
								if (ch == 0)
								{
									DetailInSearchID(l, iD);
									SetConsoleTextAttribute(setColor, 15);
								}
								else {
									SetConsoleTextAttribute(setColor, 4);
									cout << "Doi tuong nay da bi xoa hoac da bi thay doi" << endl;
									SetConsoleTextAttribute(setColor, 15);
								}
								break;
							}
							case 3:
							{
								if (ch == 0) {
									ChangeInfomation2(filename, l, iD);
								}
								else {
									SetConsoleTextAttribute(setColor, 4);
									cout << "Doi tuong nay da bi xoa hoac da bi thay doi" << endl;
									SetConsoleTextAttribute(setColor, 15);
								}
								break;
							}
							case 4: c2 = 'y';   break;
							}
							if (c2 != 'n') cout << endl;
						} while (c2 == 'n');
					}
					break;
				}
				case 3: 
				{
					break;
				}
				} 
			} while (c != 3);
			break;
		}
		case 6:
		{
			OutputList(filename, filenumber);
			int chooseBoard = 0;
			do
			{
				cout << setfill('-') << setw(49) << '-' << endl;
				cout << "|| 1. Nhap STT khach hang muon xem chi tiet    ||" << endl;
				cout << "|| 2. Quay lai                                 ||" << endl;
				cout << setfill('-') << setw(49) << '-' << endl;
				cout << "Lua chon: ";
				cin >> chooseBoard;
				switch (chooseBoard)
				{
					case 1:
					{
						int stt;
						char c('n');
						do
						{
							cout << "Nhap STT: ";
							cin >> stt;
							if (stt <= 0 || stt > countNode(l))
							{
								cout << "STT khong ton tai." << endl;
								cout << "Bam 'E' de ket thuc thao tac nay: ";
								cin >> c;
								if (c == 'e' || c == 'E') break;
								else cout << "Nhap lai STT: ";
							}
						} while (stt <= 0 || stt > countNode(l));
						if (c != 'e' && c != 'E')
						{
							DetailInformation(filename, l, stt);
								SetConsoleTextAttribute(setColor, 15);
						}
						break;
					}
					case 2:
					{
						break;
					}
				}
			} while (chooseBoard!=2);
			break;
		}
		case 7:
		{
			OutputList2(filename, filenumber);
			break;
		}
		case 8:
		{
			DetailCost();
			break;
		}
		case 9:
		{
			FileCSV(csv, filename);
			cout << "Hoan thanh, file da duoc tao trong thu muc chi dinh." << endl;
			break;
		}
		case 10:
		{
			string strcount;
			ifstream CSV;
			int count = 0;
			CSV.open(csv);
			while (getline(CSV, strcount))
			{
				count++;
			}
			--count;
			CSV.close();
			ofstream fileNumber;
			fileNumber.open(filenumber);
			fileNumber << count;
			fileNumber.close();
			FileName(csv, filename);
			Tour* tou = new Tour[100];
			string* str = new string[100];
			ifstream fileName;
			fileName.open(filename);
			List lnew;
			createList(l);
			createList(lnew);
			l = lnew;
			for (int i = 0; i < count; i++)
			{
				getline(fileName, str[i]);    //Trích xuất từng dòng thông tin của file name lưu trữ
				tou[i].InputFromLine(str[i]);
				node in = GetNode(tou[i]);
				addTail(l, in);
			}
			cout << "Cap nhat tu file Excel thanh cong" << endl;
			delete[]str;
			delete[] tou;
			break;
		}
		case 11:
		{
			cout << "Xac nhan muon THOAT (Y/N): ";
			cin >> conti;
			break;
		}
		}
	} while (conti != 'y' && conti != 'Y');
	return;
}
void load() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t    QUAN LI TOUR DU LICH\n\n";
	cout << "\t\t\t           Loading..";
	char a = 219;
	for (int i = 0; i < 20; i++) {
		cout << a;
		if (i < 10) Sleep(70);
		if (i >= 10 && i < 15) Sleep(80);
		if (i >= 17) Sleep(180);
		if (i > 19) Sleep(120);
	}
	system("cls");
}
void Loading()
{
	system("color 5f");
	load();
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	system("cls");
}
void Ending()
{
	system("color 3f");
	load();
	cout << endl << endl << endl << endl << endl << endl << endl;
	system("cls");
}