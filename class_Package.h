#include <cmath>
#include <string>

using namespace std;

class Package{

  private:
    int startCoord;
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
