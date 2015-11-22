/*
 * Screenwriter.h
 *
 *  Created on: Nov 12, 2015
 *      Author: avia
 */

#ifndef SCREENWRITER_H_
#define SCREENWRITER_H_

#include "Expert.h"
#include<list>

class Screenwriter: public Expert {
public:
	Screenwriter(string name, int age, string jobDesc, int ID, Gender gender);
	virtual ~Screenwriter();
	string toString();
};

#endif /* SCREENWRITER_H_ */
