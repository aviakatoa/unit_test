/*
 * Movie.cpp
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

#include "../include/Movie.h"
#include<iostream>


Movie::Movie(string code, string name, double length, int year, int rate, string b){
	// TODO Auto-generated constructor stub

	std::cout<<"Movie Ctor "<<std::endl;

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

Movie::~Movie() {
	std::cout<<"Movie Dtorss called"<<std::endl;
	// TODO Auto-generated destructor stub
}

void Movie::addGenre(string genre){

}

int Movie::getGenresNum(){
	return this->genres.size();
}

void Movie::addExpert(const Expert* newPro){

}
void Movie::setSort(Comparator* comparator){
	this->comparator=comparator;
}
void Movie::printPros(){

}
void Movie::printMe(){

}
Movie Movie::operator+(const Movie& another){
	return Movie("code", "movie", 65, 2015, 5, "brief");
}
void Movie::removePro(int ID){

}

double Movie::getLength(){
	return this->length;
}

list<Expert*> Movie::getPros(){
	return this->Experts;
}

list<string> Movie::getGenres(){
	return this->genres;
}

string Movie::getBrief(){
	return this->brief;
}

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
int Movie::getRate(){
	return this->rate;
}
