/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a movie

****************************************/

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
		Movie();
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
		void addExpert(Expert* newPro);

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
		* operator+
		*
		* the method defines combining the movie
		* with another given movie, and returns a new movie
		**************/
		Movie operator+(Movie& anotherMovie);

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

		/*********
		 * printMe
		 *
		 * the method prints the movie's details
		 */
		string printMe();

		/**********
		 * getCode
		 *
		 * the method returns the code of the movie
		 */
		string getCode();
};

#endif /* MOVIE_H_ */
