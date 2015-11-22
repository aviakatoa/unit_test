/*
 * Expert.h
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

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
		Expert(string name, int age, string jobDesc, int ID, Gender gender);
		virtual ~Expert();
		virtual string toString()=0;
		int getID();
		int getNumOfMovies();
		void removeMeFromAllMovies();
		void fired(string movieCode);
		void hired(Movie* movie);
		list<Movie*> getMoviesList();
};

#endif /* EXPERT_H_ */
