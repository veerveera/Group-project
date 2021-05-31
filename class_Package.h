#include <cmath>
#include <string>
#include<iostream>
using namespace std;

	static int idGenerator;
//! Класс содержит информацию о посылке: ID; начальную, текущую, конечную координаты;
//! направление движения посылки; начальное и теущее время; время на доставку;
//! имена отправителя и получателя
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

	//! Конструктор с параметрами
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

	//! Задает значение текущей координаты
	void setCurrentCoord(int coord);
	//! Обновляет текущую координату в зависимости от прошедшего времени
	void calculateCurrentCoord(int t);
	//! Возвращает ID посылки
	int getId();
	//! Проверка: доставлена ли посылка
	bool isPackageDelivered();
	//! Возвращает начальное время
	int getStartTime();
	//! Возвращает время, выделенное на доставку
	int getDeliveryTime();
	//! Возвращает текущее время
	int getCurrentTime();
	//! Возвращает значение начальной координаты
	int getStartCoord();
	//! Возвращает значение текущей координаты
	int getCurrentCoord();
	//! Возвращает значение конечной координаты
	int getFinishCoord();
	//! Возвращает направление движения посылки
	int getDirection();
	//! Возвращает имя получателя
	string getRecipientName();
	//! Возвращает имя отправителя
	string getSenderName();
	//! Выводит на экран информацию о посылке
	void Print();
<<<<<<< HEAD
};
=======
	/*bool operator ==(const Package &pack1, const Package &pack2);*/
};
>>>>>>> e52d802628902074514eab8429c6027207256055
