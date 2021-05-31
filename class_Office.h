#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include"class_Package.h"
using namespace std;

//! Класс содержит информацию о почтовом отделении: номер отделения, координату и номера посылок, которые в нем находятся
class Office {

private:
	int num; //number office
	int Coord; //coord of office
	vector<Package> pack;
	
public:

	//! Конструктор
	Office() 
	{
		Coord = 0;
		num = 0;
	}
	//! Конструктор с параметрами
	Office(int tmp_num, int tmp_Coord) {
		num = tmp_num;
		Coord = tmp_Coord;
	}
	//! Деструктор
	~Office() {}

	//! Возвращает значение координаты почтового отделения
	int getCoord();
	//! Возвращает номер почтового отделения
	int getNum();
	//! Задает номер почтового отделения
	void SetNum(int tmp_num);
	//! Задает координату почтового отделения
	void SetCoord(int tmp_Coord);
	//! Выводит на экран информацию о почтовом отделении
	void Print();
	//! Добавляет посылку в список посылок в этом отделении
	void addPackage(Package package);
	//! Удаляет посылку из списка посылок в этом отделении
	void removePackage(Package package);
	//! Возвращает ID посылок, которые находятся в этом отделении
	vector<Package> getPack();

	//bool hasThisPackage(Package package);
};


