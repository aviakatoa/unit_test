/*
 * ComparationTests.cpp

 *
 *  Created on: Nov 22, 2015
 *      Author: avia
 */

#include "Comparator.h"
#include "Expert.h"
# include "gtest/gtest.h"
#include "CompareByAge.h"
#include "CompareByMovies.h"
#include "Actor.h"
#include "Producer.h"
#include "Movie.h"

class ComparationTests: public::testing::Test{
protected:
	CompareByAge cmpAge;
	CompareByMovies cmpMovie;
	Comparator cmpId;
	Expert* e1;
	Expert* e2;

	virtual void SetUp(){

	}
	virtual void TearDown(){
		delete(e1);
		delete(e2);
	}
public:
	ComparationTests(){

	}
};

TEST_F(ComparationTests, compareByAge){
	e1 = new Actor("name", 45, "desc", 123456, male);
	e2 = new Producer("name2", 25, "hello", 4567, female);
	int result= this->cmpAge.compare(e1, e2);
	EXPECT_EQ(1, result);
}

TEST_F(ComparationTests, compareByMovie){
	e1 = new Actor("name", 45, "desc", 123456, male);
	e2 = new Producer("name2", 25, "hello", 4567, female);
	Movie m = Movie("code", "movie", 70.5, 2015, 4, "nice movie");
	e2->hired(&m);
	int result= this->cmpMovie.compare(e1, e2);
	EXPECT_EQ(result, 0);
}

TEST_F(ComparationTests, compareByID){
	e1 = new Actor("name", 45, "desc", 123456, male);
	e2 = new Producer("name2", 25, "hello", 4567, female);
	int result= this->cmpId.compare(e1, e2);
	EXPECT_EQ(result, 0);
}

