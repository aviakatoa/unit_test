/*
 * CompareByAge.h
 *
 *  Created on: Nov 13, 2015
 *      Author: avia
 */

#ifndef COMPAREBYAGE_H_
#define COMPAREBYAGE_H_

#include<list>
#include "Comparator.h"

class CompareByAge: public Comparator {
public:
	CompareByAge();
	virtual ~CompareByAge();
	int compare(const Expert* first, const Expert* second);
};

#endif /* COMPAREBYAGE_H_ */
