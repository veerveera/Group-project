#include"class_Office.h"




int Office::getCoord() { return Coord; }

int Office::getNum() { return num; }
/*
void Office::SetPack(vector<Package> P) {
		pack.clear();
		for (int i = 0; i < P.size(); i++) {
			if (P[i].getCurrentCoord() == Coord) {
				pack.push_back(P[i]);
			}
		}
}*/

void Office::SetNum(int tmp_num) {
		num = tmp_num;}

void Office::SetCoord(int tmp_Coord) {
		Coord = tmp_Coord;}

void Office::Print() {
		cout << "Post office number:" << num << endl;

		cout << "Post office coordinate:" << Coord << endl;
		/*for (int i = 0; i < pack.size(); i++) {
			cout << "Package number " << i + 1 << endl;
			cout << "From: " << pack[i].getStartCoord() << "  Sender: " << pack[i].getSenderName() << endl;
			cout << "To: " << pack[i].getFinishCoord() << "  Reciever: " << pack[i].getRecipientName() << endl;
		}*/
}

