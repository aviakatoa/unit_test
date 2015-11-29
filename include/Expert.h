/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a expert

****************************************/

#ifndef EXPERT_H_
#define EXPERT_H_
#include<string>
#include "list"
using namespace std;
class Movie;


enum Gender{female, male};

class Expert {
	private:
		int ID;
		Gender gender;
		int numOfMovies;
		list<Movie*> moviesRelated;
	protected:
		string name;
		int age;
		string jobDesc;
	public:
		/**********
		*Expert- destructor
		*/
		Expert(string name, int age, string jobDesc, int ID, Gender gender);

		/**********
		* Expert- destructor
		*/
		virtual ~Expert();

		/**********
		*toString
		*
		* the method returns a string of the expert's details- pure virtual
		*/
		virtual string toString()=0;

		/*********
		* getID
		*
		* the method returns the ID of the expert
		*/
		int getID();

		/**********
		* getNumOfMovies
		*
		* the method returns the number of movies the expert
		* is in
		*/
		int getNumOfMovies();

		/************
		* removeMeFromAllMovies
		*
		* the method removes the expert from all its' movies
		*/
		void removeMeFromAllMovies();

		/*************
		* fired
		*
		* the method gets a movie code and deletes the expert from it
		*/
		void fired(string movieCode);

		/************
		* hired
		*
		* the method gets a movie and adds it to its' list
		*/
		void hired(Movie* movie);

		/************
		* getMoviesList
		*
		* the method returns the list of movies
		*/
		list<Movie*> getMoviesList();

		/*************
		 * getAge
		 *
		 * the method returns the age
		 */
		int getAge();
};

#endif /* EXPERT_H_ */
