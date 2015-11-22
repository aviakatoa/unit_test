/*
 * Manager.cpp
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

#include "../include/Manager.h"

		/**********
		 * Manager- constructor
		 */
		Manager::Manager() {

		}

		/*********
		 * Manager- destructor
		 */
		Manager::~Manager() {
			// TODO Auto-generated destructor stub
		}

		/********
		 * start
		 *
		 * the method starts the system by running a menu
		 */
		void Manager::start(){

		}
		/********
		 * createExpert
		 *
		 * the method gets an expert details from the user
		 * and adds him to the list
		 */
		void Manager::createExpert(){

		}

		/***********
		 * createMovie
		 *
		 * the method gets a movie details from the user and adds
		 * him to the list
		 */
		void Manager::createMovie(){

		}

		/*********
		 * addExpert
		 *
		 * the method adds an expert to a movie
		 */
		void Manager::addExpert(){

		}

		/********
		 * addGenre
		 *
		 * the method adds a genre to a movie
		 */
		void Manager::addGenre(){

		}

		/**********
		 * setSort
		 *
		 * the method sets a sort method to a movie
		 */
		void Manager::setSort(){

		}

		/***********
		 * printAllMovies
		 *
		 * the method prints all the movies
		 */
		void Manager::printAllMovies(){

		}

		/***********
		 * printllPros
		 *
		 * the method prints all the pros
		 */
		void Manager::printAllPros(){

		}

		/***********
		 * printMovie
		 *
		 * the method prints a specific movie
		 */
		void Manager::printMovie(){

		}

		/***********
		 * combineMovies
		 *
		 * the method gets two movies from the user and combines
		 * them into one
		 */
		void Manager::combineMovies(){

		}

		/***********
		 * printMoviesOfPro
		 *
		 * the method prints movies of a pros
		 */
		void Manager::printMoviesOfPro(){

		}

		/***********
		 * printProsOfMovie
		 *
		 * the method prints the pros of a movie
		 */
		void Manager::printProsOfMovie(){

		}
		void Manager::removeMovie(){

		}
		void Manager::removeProFromMovie(){

		}
		void Manager::removePro(){

		}

		const list<Expert*>& Manager::getExperts() const {
			return experts;
		}

		const list<Movie*>& Manager::getMovies() const {
			return movies;
		}
