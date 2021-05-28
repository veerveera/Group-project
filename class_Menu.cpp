#include"class_Menu.h"

void Menu::SkipTime(int& tm, int t) {
	tm += t;
}

void Menu::updateAllPackage(int tm) {
	for (int i = 0; i < this->allPackages.size(); i++) {
		this->allPackages[i].calculateCurrentCoord(tm);
	}
}
void Menu::checkDeliveryStatus() {
	for (int i = 0; i < this->allPackages.size(); i++) {
		bool t = false;
		for (int j = 0; j < this->allOffices.size(); j++) {
			
			if (this->allPackages[i].getCurrentCoord() == this->allOffices[j].getCoord()) {
				cout << "Package " << i + 1 << " in office " << this->allOffices[j].getNum() <<" and coord"<< this->allPackages[i].getCurrentCoord()<< endl;
				t = true;
				break;
			}
		}
		if (!t) {
			cout << "Package " << i + 1 << " has no office and coord"<< this->allPackages[i].getCurrentCoord()<< endl;
		}
	}
}

void Menu::Find1() {
	int s = 0;
	string tmp_recieverName;
	cout << "Enter reciever name to search" << endl;
	cin >> tmp_recieverName;
	for (int i = 0; i < allPackages.size(); i++) {
		if (tmp_recieverName == allPackages[i].getRecipientName()) {
			allPackages[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}


void Menu::Find2() {
	int s = 0;
	string tmp_senderName;
	cout << "Enter sender name to search" << endl;
	cin >> tmp_senderName;
	for (int i = 0; i < allPackages.size(); i++) {
		if (tmp_senderName == allPackages[i].getSenderName()) {
			allPackages[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}


void Menu::Find3() {
	int s = 0;
	int tmp_startCoord;
	cout << "Enter start coord to search" << endl;
	cin >> tmp_startCoord;
	for (int i = 0; i < allPackages.size(); i++) {
		if (tmp_startCoord == allPackages[i].getStartCoord()) {
			allPackages[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}
void Menu::Find4() {
	int s = 0;
	int tmp_finishCoord;
	cout << "Enter finish coord to search" << endl;
	cin >> tmp_finishCoord;
	for (int i = 0; i < allPackages.size(); i++) {
		if (tmp_finishCoord == allPackages[i].getFinishCoord()) {
			allPackages[i].Print(i);
			s++;
		}
	}
	if (s == 0) {
		cout << "Cant find package" << endl;
	}
}
void Menu::Find5() {
	int s = 0;
	int tmp_Coord;
	cout << "Enter Office coord to search" << endl;
	cin >> tmp_Coord;
	for (int i = 0; i < allOffices.size(); i++) {
		if (tmp_Coord == allOffices[i].getCoord()) {
			allOffices[i].Print();
			s++;
			break;
		}
	}
	if (s == 0) {
		cout << "Cant find office" << endl;
	}
}
