/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a producer

****************************************/

#include "Producer.h"

/***********
* Producer- constructor
*/
Producer::Producer(string name, int age, string jobDesc, int ID, Gender gender):
	Expert(name, age, jobDesc, ID, gender){
}

/**********
* Producer- destructor
*/
Producer::~Producer() {
	// TODO Auto-generated destructor stub
}

/**********
* toString
*
* the method returns aa string with the producer's details
*/
string Producer::toString(){
	return "";
}

