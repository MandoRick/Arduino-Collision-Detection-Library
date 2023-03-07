#include "CollisionCheck.h"

//collisionDetection(obj1X, obj1Y, obj1W, obj1H, obj2X, obj2Y, obj2W, obj2H);
bool CollisionCheck::collisionCheckSquareToSquare(int obj1X, int obj1Y, int obj1W, int obj1H, int obj2X, int obj2Y, int obj2W, int obj2H) {
  if ((obj1X + obj1W > obj2X && obj1X < obj2X + obj2W && obj1Y + obj1H > obj2Y && obj1Y < obj2Y + obj2H)
      && (obj1X + obj1W > obj2X && obj1X < obj2X + obj2W && obj1Y + obj1H > obj2Y && obj1Y < obj2Y + obj2H)) {
    return true;
  } else {
    return false;
  }
}

//collisionDetection(obj1X, obj1Y, obj1R, obj2X, obj2Y, obj2R);
bool CollisionCheck::collisionCheckRoundToRound(int obj1X, int obj1Y, int obj1R, int obj2X, int obj2Y, int obj2R) {
  if (((obj2X - obj1X) * (obj2X - obj1X)) + ((obj2Y - obj1Y) * (obj2Y - obj1Y)) < ((obj1R + obj2R) * (obj1R + obj2R))) {
    return true;
  } else {
    return false;
  }
}
