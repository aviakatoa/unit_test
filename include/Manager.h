/*
 * Manager.h
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include <string>
#include "list"
#include "Movie.h"

using namespace std;

class Manager {
	private:
		list<Movie*>* movies;
		list<Expert*>* experts;
	public:
		/***********
		 * Manager - constructor
		 */
		Manager();

		/***********
		 * Manager- destructor
		 */
		~Manager();

		/************
		* start
		*
		* the method starts the program
		* with a menu inside
		*************/
		void start();

		/************
		*createExpert
		*
		* the method gets the expert details
		* from the user and creates a new pro
		* then, adds him to the list of pros
		*************/
		void createExpert();

		/************
		* createMovie
		*
		* the method gets the movie details from
		* the user and creates a new movie.
		* then, adds it to the movies list
		*************/
		void createMovie();

		/************
		* addExpert
		*
		* the method adds a specific pro to a movie.
		* gets a movie code and an expert id and calls the
		* right method from movie to add him
		*************/
		void addExpert();

		/*************
		* addGenre
		*
		* the method gets a genre and add it to
		* a specefic movie
		*************/
		void addGenre();

		/*************
		* setSort
		*
		* the method gets a sort method for a
		* specific movie and updates it, creates the right
		* comperator, and then sends it to the movie
		**************/
		void setSort();

		/*************
		* printAllMovies
		*
		* the method runs over the movies list
		* and prints each of them
		**************/
		void printAllMovies();

		/**************
		* printAllPros
		*
		* the method runs over the experts list and
		* prints each of them
		****************/
		void printAllPros();

		/***************
		* printMovie
		*
		* the method gets a movie code, looks
		* for it on the list and then prints it
		****************/
		void printMovie();

		/***************
		* combineMovies
		*
		* the method gets a list or movie codes
		* from the user and combines them to one movie
		****************/
		void combineMovies();

		/**************
		* printMoviesOfPro
		*
		* the method gets a pro's id and prints all his
		* movies
		****************/
		void printMoviesOfPro();

		/**************
		* printProsOfMovie
		*
		* the method gets a movie code, look for the wanted
		* movie and prints all its pros
		****************/
		void printProsOfMovie();

		/***************
		* removeMovie
		*
		* the method gets a movie code and
		* removes it from the movies list
		****************/
		void removeMovie();

		/**************
		* removeProFromMovie
		*
		* the method removes a wanted pro from
		* a specific movie
		***************/
		void removeProFromMovie();

		/**************
		* removeProFromMovie
		*
		* the method removes a pro from them
		* pros list
		***************/
		void removePro();
	};

#endif /* MANAGER_H_ */
