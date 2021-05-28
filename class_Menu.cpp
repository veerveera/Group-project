#include"class_Menu.h"

void Menu::SkipTime(int& tm, int t) {
	tm += t;
}

void Menu::updateAllPackage(std::vector<Package> allPackages, int tm) {
	for (int i = 0; i < allPackages.size(); i++) {
		allPackages[i].calculateCurrentCoord(tm);
	}
}

void Menu::Find1(std::vector<Package> P) {
	int s = 0;
	string tmp_recieverName;
	cout << "Enter reciever name to search" << endl;
	cin >> tmp_recieverName;
	for (int i = 0; i < P.size(); i++) {
		if (tmp_recieverName == P[i].getRecipientName()) {
			P[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}


void Menu::Find2(std::vector<Package> P) {
	int s = 0;
	string tmp_senderName;
	cout << "Enter sender name to search" << endl;
	cin >> tmp_senderName;
	for (int i = 0; i < P.size(); i++) {
		if (tmp_senderName == P[i].getSenderName()) {
			P[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}


void Menu::Find3(std::vector<Package> P) {
	int s = 0;
	int tmp_startCoord;
	cout << "Enter start coord to search" << endl;
	cin >> tmp_startCoord;
	for (int i = 0; i < P.size(); i++) {
		if (tmp_startCoord == P[i].getStartCoord()) {
			P[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}
void Menu::Find4(std::vector<Package> P) {
	int s = 0;
	int tmp_finishCoord;
	cout << "Enter finish coord to search" << endl;
	cin >> tmp_finishCoord;
	for (int i = 0; i < P.size(); i++) {
		if (tmp_finishCoord == P[i].getFinishCoord()) {
			P[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}
void Menu::Find5(std::vector<Office> F) {
	int s = 0;
	int tmp_Coord;
	cout << "Enter Office coord to search" << endl;
	cin >> tmp_Coord;
	for (int i = 0; i < F.size(); i++) {
		if (tmp_Coord == F[i].getCoord()) {
			F[i].Print();
			s++;
			break;
		}
	}
	if (s == 0) {
		cout << "Cant find office" << endl;
	}
}