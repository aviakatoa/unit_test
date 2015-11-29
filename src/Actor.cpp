
/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents an Actor

****************************************/


#include "Actor.h"
/************
 * Actor- constructor
 */
Actor::Actor(string name, int age, string jobDesc, int ID, Gender gender):
	Expert(name, age, jobDesc, ID, gender) {
	// TODO Auto-generated constructor stub

}

/************
 * Actor- destructor
 */
Actor::~Actor() {
	// TODO Auto-generated destructor stub
}

/************
 * toString
 *
 * the method returns the details of the actor
 */
string Actor::toString(){
	std::stringstream sstm;
	sstm<<this->name<<" "<<this->age;
	return sstm.str();
}

