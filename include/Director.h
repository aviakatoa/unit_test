/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a director

****************************************/

#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include "Expert.h"
using namespace std;
#include<list>

class Director: public Expert {
public:

	/**********
	* Director- constructor
	*/
	Director(string name, int age, string jobDesc, int ID, Gender gender);

	/*********
	* Director- destructor
	*/
	virtual ~Director();

	/********
	* toString
	*
	* the method returns the string of the director's details
	*/
	string toString();
};

#endif /* DIRECTOR_H_ */
