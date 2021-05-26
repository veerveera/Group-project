#include <cmath>
#include <string>

using namespace std;

class Package{

  private:
    int currentCoord;
    int finishCoord;
    int direction;
    string recipientName;
    string senderName;

  public:

    Package(int tmp_currentCoord, int tmp_finishCoord, string tmp_recipientName, string tmp_senderName){
      currentCoord = tmp_currentCoord;
      finishCoord = tmp_finishCoord;
      direction = (finishCoord-currentCoord)/abs((finishCoord-currentCoord));
      recipientName = tmp_recipientName;
      senderName = tmp_senderName;
      };
    
    void setCurrentCoord(int coord){
      currentCoord = coord;
    };

    int getCurrentCoord(){return currentCoord;};
    int getFinishCoord(){return finishCoord;};
    int getDirection(){return direction;};
    string getRecipientName(){return recipientName;};
    string getSenderName(){return senderName;};
  };
 
class Office{

private:
        int num; //номер отделения
        int Coord; //координата отделения
        int *pack; //массив из номеров посылок, которые есть в этом отделении
public:

	office(){
		Coord = 0;
		num = 0;
	}
	office(int tmp_num, int tmp_Coord, Package* P, int n){
		num = tmp_num;
		Coord = tmp_Coord;
		pack = new int[n];
		for(int i=0; i<n; i++){
			if P[i].getCurrentCoord() == Coord{
                                pack[i] = i+1;
                        }
                        else{
                                pack[i] = 0;
                        }

		}
	}
	~office(){}

	int getCoord(){return Coord;}
	int* getPack(){return pack;}
	int getNum(){return num;}

	void SetPack(Package* P, int n){
		pack = new int[n];
        	for(int i=0; i<n; i++){
			if P[i].getCurrentCoord() == Coord{
				pack[i] = i+1;
			}
			else{
				pack[i] = 0;
			}
        	}
	}
	void SetNum(int tmp_num){
		num = tmp_num;
	}
	void SetCoord(int tmp_Coord){
		Coord = tmp_Coord;
	}

	void Print(int n, Package*P){
 	       cout << "Номер почтового отделения:" << num << endl;
        	for(int i=0; i<n; i++){
                	if(pack[i] != 0){
                        	cout << "Посылка №" << i+1 << endl;
  //                      	cout <<  "Откуда: " << << "  От кого: " << P[i].getSenderName() << endl;
                        	cout <<  "Куда: " << P[i].getFinishCoord() << "  Кому: " << P[i].getRecipientName() << endl;
                	}
        	}
	}
};

class Menu{

	void Find1(Package* P, int n){
		int s == 0;
		string tmp_recipientName;
		cout << "Введите ФИО получателя для поиска" << endl;
		cin >> tmp_recipientName;
		for(int i=0; i<n; i++){
			if(tmp_recipientName == P[i].getRecipientName()){
				cout << "Посылка №" << i+1 << endl;
                      //  	cout <<  "Откуда: " << << "  От кого: " << P[i].getSenderName() << endl;
                        	cout <<  "Куда: " << P[i].getFinishCoord() << "  Кому: " << P[i].getRecipientName << endl;
				s++;
			}
		}
		if(s == 0){
                	cout << "Посылка не найдена" << endl;
        	}
	}

	void Find2(Package* P, int n){
		int s = 0;
        	string tmp_senderName;
        	cout << "Введите ФИО отправителя для поиска" << endl;
        	cin >> tmp_senderName;
        	for(int i=0; i<n; i++){
        	        if(tmp_senderName == P[i].getSenderName()){
                	        cout << "Посылка №" << i+1 << endl;
                      //  	cout <<  "Откуда: " << << "  От кого: " << P[i].getSenderName() << endl;
                        	cout <<  "Куда: " << P[i].getFinishCoord() << "  Кому: " << P[i].getRecipientName << endl;
				s++;
                	}
        	}
		if(s == 0){
                	cout << "Посылка не найдена" << endl;
        	}
	}

	void Find3(Package* P, int n){
		int s = 0;
        	int tmp_finishCoord;
        	cout << "Введите конечную координату для поиска" << endl;
        	cin >> tmp_finishCoord;
        	for(int i=0; i<n; i++){
        	        if(tmp_finishCoord == P[i].getFinishCoord()){
        	                cout << "Посылка №" << i+1 << endl;
                      //  	cout <<  "Откуда: " << << "  От кого: " << P[i].getSenderName() << endl;
                        	cout <<  "Куда: " << P[i].getFinishCoord() << "  Кому: " << P[i].getRecipientName << endl;
				s++;
                	}
        	}
		if(s == 0){
        	        cout << "Посылка не найдена" << endl;
        	}
	}

	void Find4(Office* F, int k, int n){
		int s = 0;
		int tmp_Coord;
		cout << "Введите координату отделения для поиска" << endl;
		cin >> tmp_Coord;
		for(int i=0; i<k; i++){
			if(tmp_Coord == F[i].getCoord()){
				F[i].Print(n);
				s++;
				break;
			}
		}
		if(s == 0){
			cout << "Отделение не найдено" << endl;
		}
	}
};
