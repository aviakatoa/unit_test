/*
 * Expert.cpp
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

#include "../include/Expert.h"

Expert::Expert(string name, int age, string jobDesc, int ID, Gender gender) {
	this->ID= ID;
	this->age= age;
	this->gender= gender;
	this->jobDesc= jobDesc;
	this->name= name;
	this->numOfMovies= 0;
	this->moviesRelated= new list<Movie*>();
}

Expert::~Expert() {
		// TODO Auto-generated destructor stub
}


int Expert::getID(){
	return this->ID;
}

int Expert::getNumOfMovies(){
	return this->numOfMovies;
}
void Expert::removeMeFromAllMovies(){

}
void Expert::fired(string movieCode){

}
void Expert::hired(Movie* movie){

}
list<Movie*> Expert::getMoviesList(){
	return this->moviesRelated;
}

