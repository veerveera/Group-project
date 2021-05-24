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
}; 
