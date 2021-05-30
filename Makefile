all: class_Menu.o class_Office.o class_Package.o  main.o project

class_Menu.o: class_Menu.cpp
	g++ -c -o class_Menu.o class_Menu.cpp

class_Office.o: class_Office.cpp
	g++ -c -o class_Office.o class_Office.cpp

class_Package.o: class_Package.cpp
	g++ -c -o class_Package.o class_Package.cpp

main.o: main.cpp
	g++ -c -o main.o main.cpp

project: class_Menu.o class_Office.o class_Package.o main.o
	g++ class_Menu.o class_Office.o class_Package.o main.o -o project
