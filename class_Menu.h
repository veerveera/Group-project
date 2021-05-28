#pragma once
#include"class_Office.h"
#include"class_Package.h"
class Menu {

public:

	void SkipTime(int& tm, int t);

	//update current coord of all packages
	void updateAllPackage(std::vector<Package> allPackages, int tm);


	//Find on receiver 
	void Find1(std::vector<Package> P); 

	//Finf on sender
	void Find2(std::vector<Package> P);

	//Find on start coord
	void Find3(std::vector<Package> P);

	//Find on  finish coord
	void Find4(std::vector<Package> P);

	//Find office on coord
	void Find5(std::vector<Office> F);
};
