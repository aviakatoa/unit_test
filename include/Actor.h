/*
 * Actor.h
 *
 *  Created on: Nov 12, 2015
 *      Author: avia
 */

#ifndef ACTOR_H_
#define ACTOR_H_

#include "Expert.h"
using namespace std;
#include<list>

class Actor: public Expert {
public:
	Actor(string name, int age, string jobDesc, int ID, Gender gender);
	virtual ~Actor();
	void toString();
};

#endif /* ACTOR_H_ */
