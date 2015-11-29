/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a Director

****************************************/

#include "Director.h"

/**********
* Director- constructor
*/
Director::Director(string name, int age, string jobDesc, int ID, Gender gender):
	Expert(name, age, jobDesc, ID, gender){
}

/*********
* Director- destructor
*/
Director::~Director() {
}

/********
* toString
*
* the method returns the string of the director's details
*/
string Director::toString(){
	return this->name;
}

