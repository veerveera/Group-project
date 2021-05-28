
#include"class_Menu.h"
#include<iostream>
#include<vector>
using namespace std;


int main() {
	Menu mainMenu;
	vector<Package>allPackages;
	Package A(0, 66, 0, 20, "to Julia", "Vera");
	//cout << (A.isPackageDelivered() ? "delivered" : "not delivered") << endl;
	allPackages.push_back(A);
	allPackages.push_back(Package(0, 100, 0, 30, "to Julia", "Vera"));
	vector<Office>allOffices;
	allOffices.push_back(Office(1, 0, allPackages));
	//allOffices[0].Print();



	int tm = 0; //global time from program start
	int choose = -1;
	while (choose!=0) {
		cout << "Enter number:" << endl;
		cout << "1. Skip time" << endl;
		cout << "0. Exit" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			int z = 0;
			cout << "How many time u wanna skip?" << endl;
			cin >> z;
			mainMenu.SkipTime(tm, z);
			cout << "Current time " << tm << endl;
			break;
		}
		case 0:
			break;
		default:
			break;
		}

		

	}
	return 0;

}
