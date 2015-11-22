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

class Comparator {
public:
	Comparator();
	virtual ~Comparator();
	virtual int compare( const Expert* first, const Expert* second);
};

#endif /* COMPERATOR_H_ */
