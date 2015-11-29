/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a comparator by movies

****************************************/

#include "CompareByMovies.h"

/***********
 * CompareByMovies- constructor
 */
CompareByMovies::CompareByMovies() {
}

/**********
 * CompareByMovies- destructor
 */
CompareByMovies::~CompareByMovies() {
}

/**********
 * compare
 *
 * the method compares by num of movies and returns 1 if the first expert is
 * bigger than the second, and 0 otherwise
 */
int CompareByMovies::compare(Expert* first,Expert* second){
	return (first->getNumOfMovies()> second->getNumOfMovies());
}
