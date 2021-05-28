#include <cmath>
#include <string>
#include<iostream>
using namespace std;

class Package {

private:
  static int idGenerator;
  int id;
	int startCoord;
	int currentCoord;
	int currentTime;
	int finishCoord;
	int direction;
	int startTime;
	int delieveryTime;
	string recipientName;
	string senderName;

public:

	Package(int tmp_startCoord, int tmp_finishCoord, int tmp_startTime, int tmp_delieveryTime, string tmp_recipientName, string tmp_senderName) {
		startCoord = tmp_startCoord;
		currentCoord = tmp_startCoord;
		finishCoord = tmp_finishCoord;
		startTime = tmp_startTime;
		delieveryTime = tmp_delieveryTime;
		direction = (finishCoord - startCoord) / abs((finishCoord - startCoord));
		recipientName = tmp_recipientName;
		senderName = tmp_senderName;
    id = s_idGenerator++;
	};

	void setCurrentCoord(int coord);

	void calculateCurrentCoord(int t);

	bool isPackageDelivered();

	int getCurrentTime();
	int getStartCoord();
	int getCurrentCoord();
	int getFinishCoord();
	int getDirection();
	string getRecipientName();
	string getSenderName();
	void Print();
};