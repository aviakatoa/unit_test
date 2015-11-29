/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a movie

****************************************/

#include "Movie.h"
#include<iostream>
#include <set>

/**********
* Movie- default constructor
*/
Movie::Movie(){
	this->brief= "u";
	this->code="u";
	this->length=0;
	this->name= "u";
	this->rate=0;
	this->year=0;
	this->genres= list<string>();
	this->comparator= new Comparator();
	this->Experts= list<Expert*>();
}

/**********
* Movie- constructor
*/
Movie::Movie(string code, string name, double length, int year, double rate, string b){
	this->brief= b;
	this->code=code;
	this->length=length;
	this->name= name;
	this->rate=rate;
	this->year=year;
	this->genres= list<string>();
	this->comparator= new Comparator();
	this->Experts= list<Expert*>();

}

/**********
*Movie- destructor
*/
Movie::~Movie() {

}

/***********
*addGenre
*
* the method adds a given genre to the genres list
*/
void Movie::addGenre(string genre){
	this->genres.push_front(genre);
}

/**********
* getGenresNum
*
* the method returns the number of genres
*/
int Movie::getGenresNum(){
	return this->genres.size();
}

/***********
* addExpert
*
* the method gets a new Pro and adds it to the list
*/
void Movie::addExpert(Expert* newPro){
	this->Experts.push_front(newPro);
	newPro->hired(this);
}

/***********
* setSort
*
* the method gets a comparator and sets it to the movie
*/
void Movie::setSort(Comparator* comparator){
	this->comparator=comparator;
}

/************
*printPros
*
* the methos prints all pros of the movie
*/ 
void Movie::printPros(){
	list<Expert*>& pros= this->Experts;
	list<Expert*>::iterator iter = pros.iterator;

	for(iter=pros.begin(); iter!=pros.end(); ++iter){
		cout<<(*iter)->toString();
	}
}

/************
* operator+
*
* the method gets a movie and adds this movie to the other
* creating a new movie
*/
Movie Movie::operator+(Movie& another){
	Movie& bigger;
	Movie& smaller;
	if(another.getLength()<this->length){
		bigger= this;
		smaller= another;
	} else{
		bigger= another;
		smaller= this;
	}
	double length= bigger.getLength();
	string code= bigger.getCode()+ smaller.getCode();
	string name= bigger.getName();
	int year= bigger.getYear();
	double rate= bigger.getRate();
	string brief= bigger.getBrief();
	Movie newMovie= Movie(code, name, length, year,rate, brief);
	// combining the two pros lists into one
	list<Expert> pros= newMovie.getPros();

}

/***********
* removePro
*
* the method removes a pro
*/
void Movie::removePro(int ID){

}

/***********
* getLength
*
* the method returns the length of the movie
*/
double Movie::getLength(){
	return this->length;
}

/**********
* getPros
*
* the method returns the pros' list
*/
list<Expert*> Movie::getPros(){
	return this->Experts;
}

/***********
* getGenres
*
* the method returns the genres list
*/
list<string> Movie::getGenres(){
	return this->genres;
}

/***********
* getBrief
*
* the method returns the brief
*/
string Movie::getBrief(){
	return this->brief;
}

/**********
* getName
*
* the merthod returns the name of the movie
*/
string Movie::getName(){
	return this->name;
}

/***********
 * getYear
 *
 * the method returns the year
 */
int Movie::getYear(){
	return this->year;
}

/**********
 * getRate
 *
 * the method returns the rate of the movie
 */
double Movie::getRate(){
	return this->rate;
}


/********
 * printMe
 *
 * the method prints the movie's details
 */
string Movie::printMe(){
	return"";
}

/**********
 * getCode
 *
 * the method returns the code of the movie
 */
string Movie::getCode(){
	return this->code;
}
