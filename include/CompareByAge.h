/*
 * CompareByAge.h
 *
 *  Created on: Nov 13, 2015
 *      Author: avia
 */

#ifndef COMPAREBYAGE_H_
#define COMPAREBYAGE_H_

#include "Comperator.h"
#include<list>

class CompareByAge: public Comperator {
public:
	CompareByAge();
	virtual ~CompareByAge();
	int compare(const Expert* first, const Expert* second);
};

#endif /* COMPAREBYAGE_H_ */
