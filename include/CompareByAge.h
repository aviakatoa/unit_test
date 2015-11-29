/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a comparator by age

****************************************/

#ifndef COMPAREBYAGE_H_
#define COMPAREBYAGE_H_

#include<list>
#include "Comparator.h"

class CompareByAge: public Comparator {
public:

	/***********
	 * CompareByAge- constructor
	 *
	 */
	CompareByAge();

	/***********
	 * CompareByAge- destructor
	 */
	virtual ~CompareByAge();

	/**********
	 * compare
	 *
	 * the method compares by age and returns 1 if the first expert is
	 * bigger than the second, and 0 otherwise
	 */
	int compare(Expert* first, Expert* second);
};

#endif /* COMPAREBYAGE_H_ */
