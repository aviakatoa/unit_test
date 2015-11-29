/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a Comparator

****************************************/


#include "Comparator.h"

/************
 * Comparator- constructor
 */
Comparator::Comparator() {

}

/*********
* Comparator- destructor
*/
Comparator::~Comparator() {
}

/*********
* compare
*
* the method compares between two experts
***/
int Comparator::compare(Expert* first, Expert* second){
	return (first->getID() > second->getID());
}

