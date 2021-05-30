#include"class_Menu.h"
#include<fstream>
void Menu::setDatabases(ifstream& packages, ifstream& offices){
  int tmp_int[4];
  string tmp_str[2];
  int n;
  packages >> n;
  while (n) {
	  n--;
	  packages >> tmp_int[0];
	  packages >> tmp_int[1];
	  packages >> tmp_int[2];
	  packages >> tmp_int[3];
	  packages >> tmp_str[0];
	  packages >> tmp_str[1];
	  allPackages.push_back(Package(tmp_int[0], tmp_int[1], tmp_int[2], tmp_int[3], tmp_str[0], tmp_str[1]));
  }
  int tmp_int2[2];
  offices >> n;
  while (n) {
	  n--;
    offices>>tmp_int2[0];
	offices>>tmp_int2[1];
	allOffices.push_back(Office(tmp_int2[0], tmp_int2[1]));
  }
}

void Menu::updateDatabases(ofstream& packages, ofstream& offices){
	packages << allPackages.size() << endl;
  for(size_t i=0; i<allPackages.size(); i++){
	  packages << allPackages[i].getStartCoord() << ' ' << allPackages[i].getFinishCoord() << ' ' << allPackages[i].getStartTime() << ' ' << allPackages[i].getDeliveryTime() << ' ' << allPackages[i].getSenderName() << ' ' << allPackages[i].getRecipientName() << endl;
  }
  offices << allOffices.size() << endl;
  for(size_t i=0; i<allOffices.size(); i++){
   offices << allOffices[i].getNum() <<' '<< allOffices[i].getCoord();
    offices << "\n";
  }
}

void Menu::SkipTime(int t) {
	tm += t;
}

int Menu::getTime() {
	return this->tm;
}
void Menu::updateAllPackage() {
	for (size_t i = 0; i < this->allPackages.size(); i++) {
		this->allPackages[i].calculateCurrentCoord(tm);
	}
}
void Menu::checkDeliveryStatus() {
	for (size_t i = 0; i < this->allPackages.size(); i++) {
		bool t = false;
		for (size_t j = 0; j < this->allOffices.size(); j++) {
			
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
	for (size_t i = 0; i < allPackages.size(); i++) {
		if (tmp_recieverName == allPackages[i].getRecipientName()) {
			allPackages[i].Print();
			cout << "------------------------------" << endl;
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
	for (size_t i = 0; i < allPackages.size(); i++) {
		if (tmp_senderName == allPackages[i].getSenderName()) {
			allPackages[i].Print();
			cout << "------------------------------" << endl;
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
	for (size_t i = 0; i < allPackages.size(); i++) {
		if (tmp_startCoord == allPackages[i].getStartCoord()) {
			allPackages[i].Print();
			cout << "------------------------------" << endl;
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
	for (size_t i = 0; i < allPackages.size(); i++) {
		if (tmp_finishCoord == allPackages[i].getFinishCoord()) {
			allPackages[i].Print();
			cout << "------------------------------" << endl;
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
	for (size_t i = 0; i < allOffices.size(); i++) {
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

void Menu::addPackage(){
  int startCoord;
  int finishCoord;
 
  int deliveryTime;
  string recipientName;
  string senderName;
  cout << "Enter start coord: " << endl;
  cin >> startCoord;

  cout << "Enter finish coord: " << endl;
  cin >> finishCoord;
  cout << "Enter delivery time: " << endl;
  cin >> deliveryTime;
  cout << "Enter recipient name: " << endl;
  cin >> recipientName;
  
  cout << "Enter sender name: " << endl;
  cin >> senderName;

  Package newPackage = Package(startCoord, finishCoord, this->tm, deliveryTime, recipientName, senderName);
  allPackages.push_back(newPackage);
  
  
}

void Menu::delPackage(int id) {

	for (size_t i = 0; i < allPackages.size(); i++) {
		if (id == allPackages[i].getId()) {
			allPackages.erase(allPackages.begin() + i);
			break;
		}
	}
}

void Menu::addOffice(){
  int num;
  int coord;
  cout<<"Enter number of office: "<<endl;
  cin >> num;

  cout << "Enter coordinate of office: " << endl;
  cin >> coord;
  Office newOffice = Office(num, coord);
  allOffices.push_back(newOffice);
}

void Menu::delOffice(int num){
	
	for (size_t i = 0; i < allOffices.size(); i++) {
    if(num == allOffices[i].getNum()){
   
      allOffices.erase(allOffices.begin()+i);
      break;
    }
  }
}

void Menu::ViewPackages(){
        for (size_t i = 0; i < allPackages.size(); i++) {
                allPackages[i].Print();
                cout << "------------------------------" << endl;

        }
}

void Menu::ViewOffices(){
        for (size_t i = 0; i < allOffices.size(); i++) {
                allOffices[i].Print();
                cout << "------------------------------" << endl;
        }
}


void Menu::deleteDeliveredPackages() {
	for (int i = 0; i < allPackages.size(); i++) {
		if (allPackages[i].getCurrentCoord() == allPackages[i].getFinishCoord()) {
			allPackages.erase(allPackages.begin() + i);
			i--;
		}
	}
}
