/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a comparator

****************************************/


#ifndef COMPERATOR_H_
#define COMPERATOR_H_
using namespace std;
#include "Expert.h"
#include<list>

class Comparator {
public:
	/************
	 * Comparator- constructor
	 */
	Comparator();

	/*********
	* Comparator- destructor
	*/
	virtual ~Comparator();

	/*********
	* compare
	*
	* the method compares between two experts
	***/
	virtual int compare(Expert* first, Expert* second);
};

#endif /* COMPERATOR_H_ */
