/*
 * CompareByMovies.h
 *
 *  Created on: Nov 13, 2015
 *      Author: avia
 */

#ifndef COMPAREBYMOVIES_H_
#define COMPAREBYMOVIES_H_

#include<list>
#include "Comparator.h"

class CompareByMovies: public Comparator {
public:
	CompareByMovies();
	virtual ~CompareByMovies();
	int compare(const Expert* first, const Expert* second);
};

#endif /* COMPAREBYMOVIES_H_ */
