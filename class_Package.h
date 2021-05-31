#include <cmath>
#include <string>
#include<iostream>
using namespace std;

	static int idGenerator;

/*!
 *	This is a class containing information about the package: start and finish coordinates, names of the sender and recipient, time for delivery.
 */

class Package {

private:
  	int id;
	int startCoord;
	int currentCoord;
	int currentTime;
	int finishCoord;
	int direction;
	int startTime;
	int deliveryTime;
	string recipientName;
	string senderName;

public:

	Package(int tmp_startCoord, int tmp_finishCoord, int tmp_startTime, int tmp_deliveryTime, string tmp_recipientName, string tmp_senderName) {
		startCoord = tmp_startCoord;
		currentCoord = tmp_startCoord;
		finishCoord = tmp_finishCoord;
		startTime = tmp_startTime;
		deliveryTime = tmp_deliveryTime;
		direction = (finishCoord - startCoord) / abs((finishCoord - startCoord));
		recipientName = tmp_recipientName;
		senderName = tmp_senderName;
    id = idGenerator++;
	};

	void setCurrentCoord(int coord);

	void calculateCurrentCoord(int t);
	int getId();
	bool isPackageDelivered();
	int getStartTime();
	int getDeliveryTime();
	int getCurrentTime();
	int getStartCoord();
	int getCurrentCoord();
	int getFinishCoord();
	int getDirection();
	string getRecipientName();
	string getSenderName();
	void Print();
};
