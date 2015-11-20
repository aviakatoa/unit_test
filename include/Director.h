/*
 * Director.h
 *
 *  Created on: Nov 13, 2015
 *      Author: avia
 */

#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include "Expert.h"
using namespace std;
#include<list>

class Director: public Expert {
public:
	Director(string name, int age, string jobDesc, int ID, Gender gender);
	virtual ~Director();
	void toString();
};

#endif /* DIRECTOR_H_ */
