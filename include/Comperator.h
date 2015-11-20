/*
 * Comperator.h
 *
 *  Created on: Nov 13, 2015
 *      Author: avia
 */

#ifndef COMPERATOR_H_
#define COMPERATOR_H_
using namespace std;
#include "Expert.h"
#include<list>

class Comperator {
public:
	Comperator();
	virtual ~Comperator();
	virtual int compare( Expert& first, Expert& second);
};

#endif /* COMPERATOR_H_ */
