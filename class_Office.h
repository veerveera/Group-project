#pragma once
#include<string>
#include<iostream>
#include<vector>
#include"class_Package.h"
using namespace std;
class Office {

private:
	int num; //number office
	int Coord; //coord of office
	vector<Package> pack;
	// int *pack; //massiv
public:

	Office() {
		Coord = 0;
		num = 0;
	}
	Office(int tmp_num, int tmp_Coord, vector<Package> P) {
		num = tmp_num;
		Coord = tmp_Coord;
		for (int i = 0; i < P.size(); i++) {
			if (P[i].getCurrentCoord() == Coord) {
				pack.push_back(P[i]);
			}
		}
	}
	~Office() {}

	int getCoord();
	int getNum();

	void SetPack(vector<Package> P);
	void SetNum(int tmp_num);
	void SetCoord(int tmp_Coord);

	void Print();

};


