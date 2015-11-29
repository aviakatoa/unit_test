/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a producer

****************************************/

#ifndef PRODUCER_H_
#define PRODUCER_H_

#include "Expert.h"
#include<list>

class Producer: public Expert {
public:

	/***********
	* Producer- constructor
	*/
	Producer(string name, int age, string jobDesc, int ID, Gender gender);

	/**********
	* Producer- destructor
	*/
	virtual ~Producer();

	/**********
	* toString
	*
	* the method returns aa string with the producer's details
	*/
	string toString();
};

#endif /* PRODUCER_H_ */
