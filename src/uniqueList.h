/*
 * uniqueList.h
 *
 *  Created on: Nov 29, 2015
 *      Author: avia
 */

#ifndef SRC_UNIQUELIST_H_
#define SRC_UNIQUELIST_H_

using namespace std;
#include "list"

template<class T>

class uniqueList {
private:
	list<T> list;
public:
	uniqueList();
	virtual ~uniqueList();
};

#endif /* SRC_UNIQUELIST_H_ */
