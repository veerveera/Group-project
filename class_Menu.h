#pragma once
#include"class_Office.h"

//! Класс для работы с базами данных посылок и почтовых отделений
class Menu {
private:
	int tm; //worldtime
public:
	Menu() {
		tm = 0;
	}	//!< Конструктор
	std::vector<Package>allPackages;	//!< Все посылки
	std::vector<Office>allOffices;		//!< Все почтовые отделения

	void setDatabases(ifstream& packages, ifstream& offices);	//!< Получает базы данных посылок и отделений из файлов

        void updateDatabases(ofstream& packages, ofstream& offices);	//!< Записывает измененные базы данных в файл

	void SkipTime(int t);		//!< Прокручивает время
	int getTime();			//!< Возвращает значение текущего времени

	void updateAllPackage();	//!< Обновляет все параметры посылок в зависимости от прошедшего времени

	/*!
		\brief Проверяет статус посылки

		Возвращает статус посылки (координату и номер почтового отделения, 
		если посылка доставлена, и текущую координату, если посылка не
		доставлена)
	 */
	void checkDeliveryStatus();

	void Find1();		//!< Поиск посылки по имени получателя

	void Find2();		//!< Поиск посылки по имени отправителя

	void Find3();		//!< Поиск посылки по начальной координате

	void Find4();		//!< Поиск посылки по конечной координате

	void Find5();		//!< Поиск почтового отделения по его координате

  void addPackage();		//!< Добавление посылки в БД

  void delPackage(int id);	//!< Удаление посылки из БД

  void addOffice();		//!< Добавление почтового отделения в БД

  void delOffice(int num);	//!< Удаление почтового отделения из БД

  void ViewPackages();		//!< Выводит на экран список всех посылок

  void ViewOffices();		//!< Выводит на экран список всех почтовых отделений

  void deleteDeliveredPackages();	//!< Удаление из БД доставленных посылок
};
