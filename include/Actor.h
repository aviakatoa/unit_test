/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents an Actor

****************************************/


#ifndef ACTOR_H_
#define ACTOR_H_

#include "Expert.h"
using namespace std;
#include<list>

class Actor: public Expert {
public:
	/*************
	*Actor- constructor
	**********/
	Actor(string name, int age, string jobDesc, int ID, Gender gender);
	
	/*************
	* Actor- destructor
	*******/
	virtual ~Actor();

	/************
	* toString
	*
	* the function returns a string of the actor's details
	*******/
	string toString();
};

#endif /* ACTOR_H_ */
