/*
 * ManagerTesting.cpp
 *
 *  Created on: Nov 18, 2015
 *      Author: avia
 */

#ifndef TEST_MANAGERTESTING_CPP_
#define TEST_MANAGERTESTING_CPP_
# include "gtest/gtest.h"
using namespace std;

class ManagerTesting:public::testing::Test{
protected:
	Manager manager;
	Expert expert1;

	virtual void SetUp(){

	}
	virtual void TearDown(){

	}

public:
	ManagerTesting(){
		this->manager= Manager();
		this->expert1= Actor("Danny", 24, "main actor", 11223344, female);
	}
};

TEST_F(ManagerTesting, CreatingExpert){
	int prevNum= this->manager.experts->size();
	this->manager.createExpert();
	int currentNum= this->manager.experts->size();
	ASSERT_EQ(prevNum+1, currentNum);
}

TEST_F(ManagerTesting, CreatingMovie){
	int prevNum= this->manager.movies->size();
	this->manager.createMovie();
	int currentNum= this->manager.movies->size();
	ASSERT_EQ(prevNum+1, currentNum);
}




#endif /* TEST_MANAGERTESTING_CPP_ */
