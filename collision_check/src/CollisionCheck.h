#ifndef CollisionCheck_h
#define CollisionCheck_h

#if (ARDUINO <= 100)
#include "Arduino.h"
#endif

class CollisionCheck
{
public:
    
    //collisionDetection(obj1X, obj1Y, obj1W, obj1H, obj2X, obj2Y, obj2W, obj2H);
    bool collisionCheck(int obj1X, int obj1Y, int obj1W, int obj1H, int obj2X, int obj2Y, int obj2W, int obj2H);

private:
};

#endif
