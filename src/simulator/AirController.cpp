/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
  std::list<Flight*> flights = Airport::getInstance()->getFlights();
  std::list<Flight*>::iterator it;
//PUNTOS---------------------------------------------------------
  Position pos0a(10000.0,0.0,100.0);
  Position pos0(3500.0, 0.0, 100.0);
  Position pos1(1500.0, 0.0, 50.0);
  Position pos2(200.0, 0.0, 25.0);
  Position pos3(-750.0, 0.0, 25.0);

  //P1-H1
  Position pos_1_1(10000.0,8000.0,4500.0);
  Position pos_1_2(10000.0,16000.0,4500.0);
  Position pos_1_3(18000.0,16000.0,4500.0);
  Position pos_1_4(18000.0,8000.0,4500.0);
  //P2-H2
  Position pos_2_1(10000.0,8000.0,1500.0);
  Position pos_2_2(10000.0,16000.0,1500.0);
  Position pos_2_3(10000.0,16000.0,1500.0);
  Position pos_2_4(18000.0,8000.0,1500.0);
//P3-H1
  Position pos_3_1(10000.0,-8000.0,4500.0);
  Position pos_3_2(10000.0,-16000.0,4500.0);
  Position pos_3_3(18000.0,-16000.0,4500.0);
  Position pos_3_4(18000.0,-8000.0,4500.0);
//P4-H2
  Position pos_4_1(10000.0,-8000.0,1500.0);
  Position pos_4_2(10000.0,-16000.0,1500.0);
  Position pos_4_3(18000.0,-16000.0,1500.0);
  Position pos_4_4(18000.0,-8000.0,1500.0);

//P5-H1
  Position pos_5_1(-10000.0,8000.0,4500.0);
  Position pos_5_2(-18000.0,8000.0,4500.0);
  Position pos_5_3(-18000.0,16000.0,4500.0);
  Position pos_5_4(-10000.0,16000.0,4500.0);
//P6-H1
  Position pos_6_1(-10000.0,8000.0,1500.0);
  Position pos_6_2(-18000.0,8000.0, 1500.0);
  Position pos_6_3(-18000.0,16000.0,1500.0);
  Position pos_6_4(-10000.0,16000.0,1500.0);
//P7-H1
  Position pos_7_1(-10000.0,-8000.0,4500.0);
  Position pos_7_2(-18000.0,-8000.0,4500.0);
  Position pos_7_3(-18000.0,-16000.0,4500.0);
  Position pos_7_4(-10000.0,-16000.0,4500.0);
//P8-H2
  Position pos_8_1(-10000.0,-8000.0,1500.0);
  Position pos_8_2(-18000.0,-8000.0,1500.0);
  Position pos_8_3(-18000.0,-16000.0,1500.0);
  Position pos_8_4(-10000.0,-16000.0,1500.0);



//RUTAS----------------------------------------------------------
Route r0a, r1a, r2a, r3a, r4a;

r0a.pos = pos0a;
r0a.speed=200.0;
r1a.pos = pos0;
r1a.speed = 100.0;
r2a.pos = pos1;
r2a.speed = 70.0;
r3a.pos = pos2;
r3a.speed = 70.0;
r4a.pos = pos3;
r4a.speed = 10.0;


Route r0, r1, r2, r3;

  r0.pos = pos0;
  r0.speed = 100.0;
  r1.pos = pos1;
  r1.speed = 70.0;
  r2.pos = pos2;
  r2.speed = 70.0;
  r3.pos = pos3;
  r3.speed = 10.0;
//P1-H1
Route r1_1,r1_2,r1_3,r1_4;
  r1_1.pos = pos_1_1;
  r1_1.speed = 150.0;
  r1_2.pos = pos_1_2;
  r1_2.speed = 150.0;
  r1_3.pos = pos_1_3;
  r1_3.speed = 150.0;
  r1_4.pos = pos_1_4;
  r1_4.speed = 150.0;
//P2-H2
Route r2_1,r2_2,r2_3,r2_4;
    r2_1.pos = pos_2_1;
    r2_1.speed = 150.0;
    r2_2.pos = pos_2_2;
    r2_2.speed = 150.0;
    r2_3.pos = pos_2_3;
    r2_3.speed = 150.0;
    r2_4.pos = pos_2_4;
    r2_4.speed = 150.0;
//P3-H1
Route r3_1,r3_2,r3_3,r3_4;
  r3_1.pos = pos_3_1;
  r3_1.speed = 150.0;
  r3_2.pos = pos_3_2;
  r3_2.speed = 150.0;
  r3_3.pos = pos_3_3;
  r3_3.speed = 150.0;
  r3_4.pos = pos_3_4;
  r3_4.speed = 150.0;
//P4-H2
Route r4_1,r4_2,r4_3,r4_4;
  r4_1.pos = pos_4_1;
  r4_1.speed = 150.0;
  r4_2.pos = pos_4_2;
  r4_2.speed = 150.0;
  r4_3.pos = pos_4_3;
  r4_3.speed = 150.0;
  r4_4.pos = pos_4_4;
  r4_4.speed = 150.0;
//P5-H1
Route r5_1,r5_2,r5_3,r5_4;
  r5_1.pos = pos_5_1;
  r5_1.speed = 150.0;
  r5_2.pos = pos_5_2;
  r5_2.speed = 150.0;
  r5_3.pos = pos_5_3;
  r5_3.speed = 150.0;
  r5_4.pos = pos_5_4;
  r5_4.speed = 150.0;
//P6-H2
  Route r6_1,r6_2,r6_3,r6_4;
    r6_1.pos = pos_6_1;
    r6_1.speed = 150.0;
    r6_2.pos = pos_6_2;
    r6_2.speed = 150.0;
    r6_3.pos = pos_6_3;
    r6_3.speed = 150.0;
    r6_4.pos = pos_6_4;
    r6_4.speed = 150.0;
//P7-H1
  Route r7_1,r7_2,r7_3,r7_4;
    r7_1.pos = pos_7_1;
    r7_1.speed = 150.0;
    r7_2.pos = pos_7_2;
    r7_2.speed = 150.0;
    r7_3.pos = pos_7_3;
    r7_3.speed = 150.0;
    r7_4.pos = pos_7_4;
    r7_4.speed = 150.0;
//P7-H1
  Route r8_1,r8_2,r8_3,r8_4;
    r8_1.pos = pos_8_1;
    r8_1.speed = 150.0;
    r8_2.pos = pos_8_2;
    r8_2.speed = 150.0;
    r8_3.pos = pos_8_3;
    r8_3.speed = 150.0;
    r8_4.pos = pos_8_4;
    r8_4.speed = 150.0;


  if (flights.size() < 6) {
    for(it = flights.begin(); it!=flights.end(); ++it)
    {
      if (!(Airport::getInstance()->is_booked_landing())){
        (*it)->getRoute()->clear();
        (*it)->getRoute()->push_back(r4a);
        (*it)->getRoute()->push_front(r3a);
        (*it)->getRoute()->push_front(r2a);
        (*it)->getRoute()->push_front(r1a);
        (*it)->getRoute()->push_front(r0a);
        Airport::getInstance()->book_landing();

      }
      if((*it)->getRoute()->empty())
      {
        (*it)->getRoute()->push_back(r4a);
        (*it)->getRoute()->push_front(r3a);
        (*it)->getRoute()->push_front(r2a);
        (*it)->getRoute()->push_front(r1a);
        (*it)->getRoute()->push_front(r0a);
      }
    }

  } else {
    for(it = flights.begin(); it!=flights.end(); ++it)
    {
      if (!(Airport::getInstance()->is_booked_landing())){
        (*it)->getRoute()->clear();
        (*it)->getRoute()->push_back(r3);
        (*it)->getRoute()->push_front(r2);
        (*it)->getRoute()->push_front(r1);
        (*it)->getRoute()->push_front(r0);
        Airport::getInstance()->book_landing();
        (*it)->setIs_Landing(true);
      }
      if((*it)->getRoute()->empty())
      {
        if(((*it)->getInitY()>=0.0)&&((*it)->getInitX()>=10000.0)&&((*it)->getInitZ()>=3000.0))
        {
          (*it)->getRoute()->push_back(r1_1);
          (*it)->getRoute()->push_front(r1_2);
          (*it)->getRoute()->push_front(r1_3);
          (*it)->getRoute()->push_front(r1_4);
        }
        if(((*it)->getInitY()>=0.0)&&((*it)->getInitX()>=10000.0)&&((*it)->getInitZ()<=3000.0))
        {
          (*it)->getRoute()->push_back(r2_1);
          (*it)->getRoute()->push_front(r2_2);
          (*it)->getRoute()->push_front(r2_3);
          (*it)->getRoute()->push_front(r2_4);
        }
        if(((*it)->getInitY()<=0.0)&&((*it)->getInitX()>=10000.0)&&((*it)->getInitZ()>=3000.0))
        {
          (*it)->getRoute()->push_back(r3_1);
          (*it)->getRoute()->push_front(r3_2);
          (*it)->getRoute()->push_front(r3_3);
          (*it)->getRoute()->push_front(r3_4);
        }
        if(((*it)->getInitY()<=0.0)&&((*it)->getInitX()>=10000.0)&&((*it)->getInitZ()<=3000.0))
        {
          (*it)->getRoute()->push_back(r4_1);
          (*it)->getRoute()->push_front(r4_2);
          (*it)->getRoute()->push_front(r4_3);
          (*it)->getRoute()->push_front(r4_4);
        }
        //RUTAS ESPEJO
        if(((*it)->getInitY()>=0.0)&&((*it)->getInitX()<=10000.0)&&((*it)->getInitZ()>=3000.0))
        {
          (*it)->getRoute()->push_back(r5_1);
          (*it)->getRoute()->push_front(r5_2);
          (*it)->getRoute()->push_front(r5_3);
          (*it)->getRoute()->push_front(r5_4);
        }
        if(((*it)->getInitY()>=0.0)&&((*it)->getInitX()<=10000.0)&&((*it)->getInitZ()<=3000.0))
        {
          (*it)->getRoute()->push_back(r6_1);
          (*it)->getRoute()->push_front(r6_2);
          (*it)->getRoute()->push_front(r6_3);
          (*it)->getRoute()->push_front(r6_4);
        }
        if(((*it)->getInitY()<=0.0)&&((*it)->getInitX()<=10000.0)&&((*it)->getInitZ()>=3000.0))
        {
          (*it)->getRoute()->push_back(r7_1);
          (*it)->getRoute()->push_front(r7_2);
          (*it)->getRoute()->push_front(r7_3);
          (*it)->getRoute()->push_front(r7_4);
        }
        if(((*it)->getInitY()<=0.0)&&((*it)->getInitX()<=10000.0)&&((*it)->getInitZ()<=3000.0))
        {
          (*it)->getRoute()->push_back(r8_1);
          (*it)->getRoute()->push_front(r8_2);
          (*it)->getRoute()->push_front(r8_3);
          (*it)->getRoute()->push_front(r8_4);
        }
  		}
  	}
  }

}

}  // namespace atcsim
