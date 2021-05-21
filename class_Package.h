#ifndef CLASS_PACKAGE_H_INCLUDED
#define CLASS_PACKAGE_H_INCLUDED

#include <cmath>

class Package{

  private:
    int currentCoord;
    int finishCoord;
    int direction;

  public:

    Package(int tmp_currentCoord, int tmp_finishCoord){
      currentCoord = tmp_currentCoord
      finishCoord = tmp_finishCoord
      direction = (finishCoord-currentCoord)/abs((finishCoord-currentCoord)
      };
    
    void setCurrentCoord(int coord){
      currentCoord = coord
    };

    void getCurrentCoord(){return currentCoord};
    void getFinishCoord(){return finishCoord};
    void getDirection(){return direction};
  }

#endif