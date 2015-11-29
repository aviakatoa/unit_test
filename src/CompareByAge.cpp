/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a comparator by age

****************************************/

#include "CompareByAge.h"

/***********
 * CompareByAge- constructor
 *
 */
CompareByAge::CompareByAge() {
}

/***********
 * CompareByAge- destructor
 */
CompareByAge::~CompareByAge() {
}

/**********
 * compare
 *
 * the method compares by age and returns 1 if the first expert is
 * bigger than the second, and 0 otherwise
 */
int CompareByAge::compare(Expert* first, Expert* second){
	return (first->getAge() > second->getAge());
}

