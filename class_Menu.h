#pragma once
#include"class_Office.h"
class Menu {

public:
	std::vector<Package>allPackages;
	std::vector<Office>allOffices;

	void setDatabases(fstream packages, fstream offices);

  void updateDatabases(fstream &packages, fstream &offices);

	void SkipTime(int& tm, int t);

	//update current coord of all packages
	void updateAllPackage(int tm);

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
};
