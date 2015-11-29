/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a comparator by movies

****************************************/

#ifndef COMPAREBYMOVIES_H_
#define COMPAREBYMOVIES_H_

#include<list>
#include "Comparator.h"

class CompareByMovies: public Comparator {
public:

	/***********
	 * CompareByMovies- constructor
	 */
	CompareByMovies();

	/**********
	 * CompareByMovies- destructor
	 */
	virtual ~CompareByMovies();

	/**********
	 * compare
	 *
	 * the method compares by num of movies and returns 1 if the first expert is
	 * bigger than the second, and 0 otherwise
	 */
	int compare(Expert* first, Expert* second);
};

#endif /* COMPAREBYMOVIES_H_ */
