/*****************
 *
 *  Created on: Nov 18, 2015
 *      Author: avia
 */
# include "gtest/gtest.h"
#include "../include/Movie.h"
#include "../include/Expert.h"
#include "../include/Actor.h"
#include "../include/Producer.h"
#include<algorithm>

using namespace std;

class ExpertTests: public::testing::Test{

protected:
	Expert* e1;
	Expert* e2;
	Movie m1;
	Movie m2;

	virtual void SetUp(){

	}
	virtual void TearDown(){
		delete(this->e1);
		delete(this->e2);
	}
public:
	ExpertTests(): m1("code", "Heroes", 65.5, 1995, 2, "long movie"),
		m2("code2", "Hello", 140, 2000, 4, "nothing to see"){
		this->e1= new Actor("Yossi", 40, "good actor", 456123, male);
		this->e2= new Producer("Yael", 24, "main producer", 123456, female);
	}
};

TEST_F(ExpertTests, AddingMovie){
	int prevNum= this->e1->getNumOfMovies();
	this->e1->hired(&m2);
	EXPECT_EQ(this->e1->getNumOfMovies(), prevNum+1);
	bool found = (std::find(e1->getMoviesList().begin(), e1->getMoviesList().end(), m2) != e1->getMoviesList().end());
	EXPECT_EQ(found, true);
}

TEST_F(ExpertTests, DeletingMyself){
	int numOfMovies= this->e2->getNumOfMovies();
	this->e2->hired(&m1);
	// check if the movie was indeed added
	ASSERT_EQ(this->e2->getNumOfMovies(), numOfMovies+1);
	this->e2->removeMeFromAllMovies();
	// checking if i was deleted from all movies
	EXPECT_EQ(this->e2->getNumOfMovies(), 0);
	bool found = (std::find(m1.getPros().begin(), m1.getPros().end(), e2) != m1.getPros().end());
	EXPECT_EQ(found, false);
}

TEST_F(ExpertTests, DeletingMovie){
	this->e1->hired(&m1);
	int num= this->e1->getNumOfMovies();
	int numOfExperts= this->m1.getPros().size();
	this->e1->fired("code");
	int newNum= this->e1->getNumOfMovies();
	int newNumOfExperts= this->m1.getPros().size();
	EXPECT_EQ(numOfExperts+1, newNumOfExperts);
	EXPECT_NE(num, newNum);
}








