/*
 * Producer.h
 *
 *  Created on: Nov 12, 2015
 *      Author: avia
 */

#ifndef PRODUCER_H_
#define PRODUCER_H_

#include "Expert.h"
#include<list>

class Producer: public Expert {
public:
	Producer(string name, int age, string jobDesc, int ID, Gender gender);
	virtual ~Producer();
	string toString();
};

#endif /* PRODUCER_H_ */
