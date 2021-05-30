
#include"class_Menu.h"
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;


int main(int argc, char** argv)
{
	if (argc < 3) 
	{
		cout << "No arguments\n";
		return 1;
	}

	idGenerator = 1;
	Menu mainMenu;
	string filenameP = argv[1],filenameO = argv[2];
	ifstream inP(filenameP);
	if (!inP.is_open()) {
		cout << "Can't open packages file" << endl;
		return 2;
	}
	ifstream inO(filenameO);
	if (!inO.is_open()) {
		cout << "Can't open offices file" << endl;
		return 2;
	}
	mainMenu.setDatabases(inP, inO);
	inP.close();
	inO.close();

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
		cout << "12. Delete office" << endl;
		cout << "13. Delete package" << endl;
		cout << "14. Delete delivered packages" << endl;
		cout << "0. Exit" << endl;
		cin >> choose;
		switch (choose)
		{




		case 1:
		{
			int z = 0;
			cout << "How many time u wanna skip?" << endl;
			cin >> z;
			mainMenu.SkipTime(z);
			cout << "Current time " << mainMenu.getTime() << endl;

			mainMenu.updateAllPackage();
			break;
		}
		case 2:
		{
			mainMenu.checkDeliveryStatus();
			break;
		}
		case 3:
		{
			mainMenu.addOffice();
			break;
		}
		case 4:
		{
			mainMenu.addPackage();
			break;
		}
		case 5:{
			mainMenu.Find1();
			break;
			}
		case 6:{
			mainMenu.Find2();
			break;
			}
		case 7:{
			mainMenu.Find3();
			break;
			}
		case 8:{
			mainMenu.Find4();
			break;
			}
		case 9:{
			mainMenu.Find5();
			break;
			}
		case 10:{
			mainMenu.ViewOffices();
			break;
			}
		case 11:{
			mainMenu.ViewPackages();
			break;
			}
		case 12: {
			int j;
			cout << "Enter office number: " << endl;
			cin >> j;
			mainMenu.delOffice(j);
			break;
		}
		case 13: {
			int j;
			cout << "Enter package number: " << endl;
			cin >> j;
			mainMenu.delPackage(j);
			break;
		}
		case 14: {
			mainMenu.deleteDeliveredPackages();
			break;
		}
		case 0:
			break;
		default:
			break;
		}
		
			ofstream oP(filenameP);
			if (!oP.is_open()) {
				cout << "Can't open packages file" << endl;
				return 2;
			}
			ofstream oO(filenameO);
			if (!oO.is_open()) {
				cout << "Can't open offices file" << endl;
				return 2;
			}
			mainMenu.updateDatabases(oP, oO);
			oP.close();
			oO.close();
		

	}
	return 0;

}
