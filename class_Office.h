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
	Office(int tmp_num, int tmp_Coord) {
		num = tmp_num;
		Coord = tmp_Coord;
	}
	~Office() {}

	int getCoord();
	int getNum();
	vector<Package> getPack();

	void SetPack(vector<Package> P);
	void SetNum(int tmp_num);
	void SetCoord(int tmp_Coord);

	void Print();

};


