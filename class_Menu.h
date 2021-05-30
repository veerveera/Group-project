#pragma once
#include"class_Office.h"
class Menu {
private:
	int tm; //worldtime
public:
	Menu() {
		tm = 0;
	}
	std::vector<Package>allPackages;
	std::vector<Office>allOffices;

	void setDatabases(ifstream& packages, ifstream& offices);

  void updateDatabases(ofstream& packages, ofstream& offices);

	void SkipTime(int t);
	int getTime();
	//update current coord of all packages
	void updateAllPackage();

	//cout info about offices 
	void checkDeliveryStatus();

	//Find on reciver
	void Find1(); 

	//Find on sender
	void Find2();

	//Find on start coord
	void Find3();

	//Find on finish coord
	void Find4();

	//Find office on coord
	void Find5();

  void addPackage();

  void delPackage(int id);

  void addOffice();

  void delOffice(int num);

  void ViewPackages();

  void ViewOffices();

  void deleteDeliveredPackages();
};
