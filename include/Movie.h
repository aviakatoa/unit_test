/*
 * Movie.h
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

#ifndef MOVIE_H_
#define MOVIE_H_

class Expert;
#include<string>
#include<list>
#include "Comparator.h"
class Comperator;
using namespace std;

class Movie {
	private:
		string code;
		string name;
		double length;
		int year;
		int rate;
		string brief;
		list<string> genres;
		list<Expert*> Experts;
		Comparator* comparator;


	public:

		/***********
		 * Ctor
		 */
		Movie():Movie("undefined", "undefined", 0, 0, 0, "undefined"){}
		/*************
		 * Movie- constructor
		 */
		Movie(string code, string name, double length, int year, int rate, string brief);

		/*************
		 * Movie- destructor
		 */
		~Movie();

		/**************
		* addGenre
		*
		* the method gets a genre and
		* adds it to the list of genres
		**************/
		void addGenre(string genre);

		/*************
		* addExpert
		*
		* the method gets a reference to an expert and adds him
		* to the movie's experts list
		**************/
		void addExpert(const Expert* newPro);

		/*************
		* setSort
		*
		* the method gets a comparator, and sort the pros
		* list with the wanted method
		**************/
		void setSort(Comparator* comparator);

		/*************
		* printPros
		*
		* the method runs over the pros' list and prints
		* each of them
		**************/
		void printPros();

		/*************
		* printMe
		*
		* the method prints all the movie
		* details
		**************/
		void printMe();

		/*************
		* operator+
		*
		* the method defines combining the movie
		* with another given movie, and returns a new movie
		**************/
		Movie operator+(const Movie& anotherMovie);

		/*************
		* removePro
		*
		* the method gets a pro's id and removes it from the list
		**************/
		void removePro(int ID);

		/**************
		* getLength
		*
		* the method returns the movie's length
		**************/
		double getLength();

		/**************
		 * getGenresNum
		 *
		 * returns the num of genrees of the movie
		 */
		int getGenresNum();

		/**************
		 * getPros
		 *
		 * the function returns the pros list
		 */
		list<Expert*> getPros();

		/*************
		 * getGenres
		 *
		 * the method returns the genres list
		 */
		list<string> getGenres();

		/***********
		 * getBrief
		 *
		 * the method returns the brief of the movie
		 */
		string getBrief();

		/**********
		 * getName
		 *
		 * the method return the name of the movie
		 */
		string getName();

		/***********
		 * getYear
		 *
		 * the method returns the year
		 */
		int getYear();

		/**********
		 * getRate
		 *
		 * the method returns the rate of the movie
		 */
		int getRate();
};

#endif /* MOVIE_H_ */
