#ifndef MAP_H
#define MAP_H

#include <vector>

class Map {
  /*The class is responsible for everything
   connected with creating and displaying map*/
  private:
    //Variables
    int xSize, ySize;
    std::vector<std::vector<const char*>> map;

    //Methods
    void create();

    void display3() const;
    void display2() const;
    void display1() const;

    void waitSec(const unsigned int time = 1) const;

  public:
    //Constructor and destuctor
    Map(const unsigned int xSize,
        const unsigned int ySize);
    ~Map() = default;

    //Methods
    void display() const;
    void setPlatform(const std::vector<const char*> platformVec,
                     const int positionX,
                     const int positionY);

    void removePlatform(const std::vector<const char*> platformVec,
                        const int positionX,
                        const int positionY);

    const int& getXSize() { return xSize; }

    void startTimer() const;
};

#endif /*MAP_H*/
