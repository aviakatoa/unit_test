/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a screenwriter

****************************************/

#ifndef SCREENWRITER_H_
#define SCREENWRITER_H_

#include "Expert.h"
#include<list>

class Screenwriter: public Expert {
public:

	/***********
	* screenwriter- constructor
	*/
	Screenwriter(string name, int age, string jobDesc, int ID, Gender gender);

	/***********
	* screenwriter-destructor
	*/
	virtual ~Screenwriter();

	/**********
	* toString
	*
	* the method returns aa string with the screenwriter's details
	*/
	string toString();
};

#endif /* SCREENWRITER_H_ */
