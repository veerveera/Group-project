#pragma once
#include"class_Office.h"

/*!
 *	This is a class containing functions for working with databases of packages and post offices.
 */

class Menu {
private:
	int tm; //worldtime
public:
	Menu() {
		tm = 0;
	}	//!< Constructor
	std::vector<Package>allPackages;
	std::vector<Office>allOffices;

	void setDatabases(ifstream& packages, ifstream& offices);	//!< 

        void updateDatabases(ofstream& packages, ofstream& offices);		//!< update databases

	void SkipTime(int t);		//!< Skip time.
	int getTime();

	void updateAllPackage();	//!< Update current coord of all packages.

	void checkDeliveryStatus();	//!< Cout info about offices.

	void Find1();		//!< Find on reciver.

	void Find2();		//!< Find on sender.

	void Find3();		//!< Find on start coord.

	void Find4();		//!< Find on finish coord.

	void Find5();		//!< Find office on coord.

  void addPackage();		//!< Add a package.

  void delPackage(int id);	//!< Delete a package.

  void addOffice();		//!< Add a post office.

  void delOffice(int num);	//!< Delete a post office.

  void ViewPackages();		//!< Print all packages.

  void ViewOffices();		//!< Print all offices.

  void deleteDeliveredPackages();
};
