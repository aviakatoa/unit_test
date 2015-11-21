/*
 * Movie.cpp
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

#include "../include/Movie.h"
#include<iostream>

Movie::Movie() {
	std::cout<<"Movie Dflt Ctor"<<std::endl;

}


Movie::Movie(string code, string name, double length, int year, int rate, string b){
	// TODO Auto-generated constructor stub

	std::cout<<"Movie Ctor "<<std::endl;

	this->brief= b;
	this->code=code;
	this->length=length;
	this->name= name;
	this->rate=rate;
	this->year=year;
	this->genres= new list<string>();
	this->comperator= new Comperator();
	this->Experts= new list<Expert*>();

}

Movie::~Movie() {
	std::cout<<"Movie Dtorss called"<<std::endl;
	// TODO Auto-generated destructor stub
}

void Movie::addGenre(string genre){

}

int Movie::getGenresNum(){
	return this->genres->size();
}

void Movie::addExpert(const Expert* newPro){

}
void Movie::setSort(Comperator* comperator){
	this->comperator=comperator;
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

list<Expert*>* Movie::getPros(){
	return this->Experts;
}
