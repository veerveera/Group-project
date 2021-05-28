#include"class_Menu.h"

void Menu::setDatabases(fstream packages, fstream offices){
  int it = 0;
  int tmp_int[5];
  string tmp_str[2];
  while(!packages.eof()){  
    getline(packages, tmp_int[0], ' ');
    getline(packages, tmp_int[1], ' ');
    getline(packages, tmp_int[2], ' ');
    getline(packages, tmp_int[3], ' ');
    getline(packages, tmp_int[4], ' ');
    getline(packages, tmp_str[0], ' ');
    getline(packages, tmp_str[1], '\n');
    allPackages[t] = Package(tmp_int[0], tmp_int[1], tmp_int[3], tmp_int[4], tmp_str[0], tmp_str[1])
    it++;
  it = 0;  
  while(!offices.eof()){
    getline(offices, tmp_int[0], ' ');
    getline(offices, tmp_int[1], ' ');

    getline(offices, tmp_str[0], '\n');
    int * pch = strtok (str," "); 
    int idArr[] = new int;
    vector<Package>tmp_vec;
    while (pch != NULL){
      idArr.push_back(pch);
      pch = strtok (NULL, " ");
    }
    delete pch;
    for(i=0; i<=idArr.size();i++){
      for(j=0; j<=allPackages.size(); j++){
        if(idArr[i] == allPackages[j].getId()){
          tmp_vec.pushback(allPackages[j]);
        }
      }
    }

    allOffices[t] = Office(tmp_int[0], tmp_int[1], tmp.vec)
    delete idArr;
    it++;
  }
}

void Menu::updateDatabases(fstream &packages, fstream &offices){
  for(i=0; i<=allPackages.size(); i++){
    *packages << allPackages[i].getStartCoord << allPackages[i].getFinishCoord << allPackages[i].getCurrentCoord << allPackages[i].getStartTime << allPackages[i].getDelieveryTime << allPackages[i].getRecipientCoord << allPackages[i].getSenderCoord << endl;
  }
  for(i=0; i<=allOffices.size(); i++){
    *offices << allOffices[i].getNum() << allOffices[i].getCoord();
    for(j=0; j<allOffices[i].getPack().size(); j++){
      *offices << allOffices[i].getPack()[j].getId;
    }
    *offices << "/n";
  }
}

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

void Menu::addPackage(){
  int startCoord;
  int finishCoord;
  int startTime;
  int delieveryTime;
  string recipientName;
  string senderName
  int offNum;

  cin << startCoord;
  cin << FinishCoord;
  cin << startTime;
  cin << delieveryTime;
  cin << recipientName;
  cin << senderName;
  cin << offNum;

  Package newPackage = Package(startCoord, finishCoord, startTime, deieveryTime, recipientName, senderName);
  allPackages.push_back(newPackage);
  
  for(i = 0; i<=allOffices.size(); i++){
    if(offNum == allOffices[i].getNum()){
      vector<Package> tmpVec = allOffices[i].getPack;
      tmpVec.push_back(newPackage);
    }
  }
}
