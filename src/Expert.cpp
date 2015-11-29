/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a expert

****************************************/

#include "Expert.h"

/************
* Expert- constructor
*/
Expert::Expert(string name, int age, string jobDesc, int ID, Gender gender) {
	this->ID= ID;
	this->age= age;
	this->gender= gender;
	this->jobDesc= jobDesc;
	this->name= name;
	this->numOfMovies= 0;
	this->moviesRelated= list<Movie*>();
}

/**********
*Expert- destructor
*/
Expert::~Expert() {
}

/**********
* getID
*
* the method returns the ID
*/
int Expert::getID(){
	return this->ID;
}

/***********
* getNumOfMovies
*
* the method returns the number of movies
*/
int Expert::getNumOfMovies(){
	return this->numOfMovies;
}

/***********
* removeMeFromAllMovies
*
* the method removes the expert from all his movies
*/
void Expert::removeMeFromAllMovies(){
	list<Movie*>& movies= this->moviesRelated;
	list<Movie*> ::iterator iter;

	for(iter= movies.begin(); iter != movies.end(); ++iter){
		(*iter)->removePro(this->ID);
	}
	this->numOfMovies=0;
}

/**********
* fired
*
* the method gets a movie code and deletes 
* this movie from the list
*/
void Expert::fired(string movieCode){
	list<Movie*>& movies= this->moviesRelated;
	list<Movie*> ::iterator iter;

	for(iter= movies.begin(); iter != movies.end(); ++iter){
		if((*iter)->getCode()== movieCode){
			movies.remove(*iter);
			return;
		}
	}
}

/***********
 * hired
 *
 * the method adds the movie to the movies' list
 */
void Expert::hired(Movie* movie){
	this->moviesRelated.push_front(movie);
	this->numOfMovies+=1;
}

/************
 * getMoviesList
 *
 * the method returns the movies list
 */
list<Movie*> Expert::getMoviesList(){
	return this->moviesRelated;
}

/*************
 * getAge
 *
 * the method returns the age
 */
int Expert::getAge(){
	return this->age;
}
