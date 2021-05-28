#include"class_Package.h"


void Package::setCurrentCoord(int coord){
      currentCoord = coord;
    };

void Package::calculateCurrentCoord(int t) {
		currentTime = t;
		float k = float(t-startTime) / float(delieveryTime);

		if (k >= 1) {currentCoord = finishCoord;}

		else {currentCoord = (finishCoord - startCoord) * direction * k;}}

bool Package::isPackageDelivered() {
return currentCoord == finishCoord;
	}


int Package::getCurrentTime() { return currentTime; };

int Package::getStartCoord() { return startCoord; };

int Package::getCurrentCoord(){return currentCoord;};

int Package::getFinishCoord(){return finishCoord;};

int Package::getDirection(){return direction;};

string Package::getRecipientName(){return recipientName;};

string Package::getSenderName(){return senderName;};

int Package::getId(){return id;};

void Package::Print() {
		cout << "Package number " << id << endl;
		cout << "From: " << this->getStartCoord() << "  Sender: " << this->getSenderName() << endl;
		cout << "To: " << this->getFinishCoord() << "  Reciever: " << this->getRecipientName() << endl;
	};

