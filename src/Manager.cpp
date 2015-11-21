/*
 * Manager.cpp
 *
 *  Created on: Nov 11, 2015
 *      Author: avia
 */

#include "../include/Manager.h"


		Manager::Manager() {

		}

		Manager::~Manager() {
			// TODO Auto-generated destructor stub
		}

		void Manager::start(){

		}
		void Manager::createExpert(){

		}
		void Manager::createMovie(){

		}
		void Manager::addExpert(){

		}
		void Manager::addGenre(){

		}
		void Manager::setSort(){

		}
		void Manager::printAllMovies(){

		}
		void Manager::printAllPros(){

		}
		void Manager::printMovie(){

		}
		void Manager::combineMovies(){

		}
		void Manager::printMoviesOfPro(){

		}
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
