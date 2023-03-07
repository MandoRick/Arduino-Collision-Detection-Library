/*-data-type------size---------description----------------------
  boolean        (8 bit)   -  [true/false]
  byte           (8 bit)   -  [0-255] unsigned number
  char           (8 bit)   -  [-128 to 127] signed number
  unsigned char  (8 bit)   -  [-128 to 127] signed number
  word           (16 bit)  -  [0-65535] unsigned number
  unsigned int   (16 bit)  -  [0-65535] unsigned number
  int            (16 bit)  -  [-32768 to 32767] signed number
  unsigned long  (32 bit)  -  [0-4,294,967,295] unsigned number usually for millis
  long           (32 bit)  -  [-2,147,483,648 to 2,147,483,647] signed number
  float          (32 bit)  -  [-3.4028235E38 to 3.4028235E38] signed number
  uint8_t        (8 bit)   -  [0-255] unsigned number
  int8_t         (8 bit)   -  [-127 - 127] signed number
  uint16_t       (16 bit)  -  [0-65,535] unsigned number
  int16_t        (16 bit)  -  [-32,768 - 32,767] signed number
  uint32_t       (32 bit)  -  [0-4,294,967,295] unsigned number
  int32_t        (32 bit)  -  [-2,147,483,648 - 2,147,483,647] signed number
  uint64_t       (64 bit)  -  [0-18,446,744,073,709,551,615] unsigned number
  int64_t        (64 bit)  -  [−9,223,372,036,854,775,808 - 9,223,372,036,854,775,807] signed number
  --------------------------------------------------------------
  camelCase                -  anything that changes
  snake_case               -  variable's that are exclusive in a function
  Snake_Case               -  CLASS/struct exclusave varables/functions
  iNVERTEDcAMELcASE        -  outside code that is being accessed [database]
  SNake_CAse               -  duplicate varables inside the case function [frequently used in library names]
  ALL_CAPS                 -  const varable names or defines
  ------------- by jediRick & RefreshMyMind --------------------
*/

/*  Collision Detection Library
    by: JediRick and RefreshMyMind
    wokwi example link: https://wokwi.com/projects/356486662567493633
*/


#include <CollisionCheck.h>

//you can collision check multiple objects for example:
//CollisionCheck colCheck1, colCheck2;
//for this demo we will do one collision check
CollisionCheck col1Check;

uint8_t object1X = 10;    //object 1 X
uint8_t object1Y = 10;    //object 1 Y
uint8_t object1R = 5;     //object 1 Radius
uint8_t object2X = 128;   //object 2 X
uint8_t object2Y = 10;    //object 2 Y
uint8_t object2R = 5;     //object 2 Radius

bool collis1Result = false;

void setup() {
  Serial.begin(115200);
}

void loop() {
  object2X = object2X - 1;
  Serial.println("object1X: " + (String)object1X);
  Serial.println("object2X: " + (String)object2X);
  //collisionDetection(obj1X, obj1Y, obj1R, obj2X, obj2Y, obj2R);
  collis1Result = col1Check.collisionCheckRoundToRound(object1X, object1Y, object1R, object2X, object2Y, object2R);
  if (collis1Result) {
    Serial.println("Collision 1 true");
  } else {
    Serial.println("Collision 1 false");
  }
  delay(1000);
}
