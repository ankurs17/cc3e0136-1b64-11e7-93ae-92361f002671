//
//  Aircraft.hpp
//  cc3e0136-1b64-11e7-93ae-92361f002671
//
//  Created by Saxena, Ankur on 4/7/17.
//  Copyright © 2017 Saxena, Ankur. All rights reserved.
//

#ifndef Aircraft_hpp
#define Aircraft_hpp

#include "Location.hpp"

typedef enum _aircraftDirection
{
   AircraftDirection_None,
   AircraftDirection_LToR, // Left to right direction
   AircraftDirection_RToL, // Right to left direction
}AircraftDirection;

class Aircraft
{
private:
   bool isOnScreen;
   AircraftDirection direction;
   unsigned int speed;
   Location location; // Need to see if we need this
};

#endif /* Aircraft_hpp */
