/*
 * ManagerTesting.cpp
 *
 *  Created on: Nov 18, 2015
 *      Author: avia
 */

#ifndef TEST_MANAGERTESTING_CPP_
#define TEST_MANAGERTESTING_CPP_
# include "gtest/gtest.h"
#include "Manager.h"
#include "Expert.h"
#include "Actor.h"
using namespace std;

class ManagerTesting:public::testing::Test{
protected:
	Manager manager;
	Expert* expert;

	virtual void SetUp(){

	}
	virtual void TearDown(){
		delete(expert);
	}

public:
	ManagerTesting(){
		this->expert = new Actor("Danny", 24, "main actor", 11223344, female);
	}
};

TEST_F(ManagerTesting, CreatingExpert){
	int prevNum= this->manager.getExperts().size();
	this->manager.createExpert();
	int currentNum= this->manager.getExperts().size();
	ASSERT_EQ(prevNum+1, currentNum);
}

TEST_F(ManagerTesting, CreatingMovie){
	int prevNum= this->manager.getMovies().size();
	this->manager.createMovie();
	int currentNum= this->manager.getMovies().size();
	ASSERT_EQ(prevNum+1, currentNum);
}

TEST_F(ManagerTesting, RemovingPro){
	int numOfPros= this->manager.getExperts().size();
	this->manager.removePro();
	EXPECT_NE(numOfPros, manager.getExperts().size());
}




#endif /* TEST_MANAGERTESTING_CPP_ */
