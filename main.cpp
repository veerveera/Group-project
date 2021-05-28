
#include"class_Menu.h"
#include<iostream>
#include<vector>
using namespace std;

int Package::s_idGenerator = 1;

int main() {
	Menu mainMenu;

	Package A(0, 66, 0, 20, "to Julia", "Vera");
	//cout << (A.isPackageDelivered() ? "delivered" : "not delivered") << endl;
	mainMenu.allPackages.push_back(A);
	mainMenu.allPackages.push_back(Package(0, 100, 0, 25, "to Julia", "Vera"));

	mainMenu.allOffices.push_back(Office(1, 0, mainMenu.allPackages));
	mainMenu.allOffices.push_back(Office(2, 66, mainMenu.allPackages));
	mainMenu.allOffices.push_back(Office(3, 100, mainMenu.allPackages));

	//allOffices[0].Print();



	int tm = 0; //global time from program start
	int choose = -1;
	while (choose!=0) {
		cout <<"----------Post Office----------"<< endl;
		cout << "Enter number:" << endl;
		cout << "1. Skip time" << endl;
		cout << "2. Check delivery status" << endl;
		cout << "3. Add post office" << endl;
		cout << "4. Add package" << endl;
		cout << "5. Find package on reciver" << endl;
		cout << "6. Find package on sender" << endl;
		cout << "7. Find package on start coord" << endl;
		cout << "8. Find package on finish coord" << endl;
		cout << "9. Find office on coord" << endl;
		cout << "10. View office list" << endl;
		cout << "11. View package list" << endl;
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
		case 2:
		{
			mainMenu.updateAllPackage(tm);
			mainMenu.checkDeliveryStatus();
		}
		case 3:
		case 4:
		case 5:{
			mainMenu.Find1();
			}
		case 6:{
			mainMenu.Find2();
			}
		case 7:{
			mainMenu.Find3();
			}
		case 8:{
			mainMenu.Find4();
			}
		case 9:{
			mainMenu.Find5();
			}
		case 10:
		case 11:
		case 0:
			break;
		default:
			break;
		}


	}
	return 0;

}
