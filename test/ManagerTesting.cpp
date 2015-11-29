/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  checks the Manager class

****************************************/

#ifndef TEST_MANAGERTESTING_CPP_
#define TEST_MANAGERTESTING_CPP_
# include "gtest.h"
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

// creating a new expert
TEST_F(ManagerTesting, CreatingExpert){
	int prevNum= this->manager.getExperts().size();
	this->manager.createExpert();
	int currentNum= this->manager.getExperts().size();
	ASSERT_EQ(prevNum+1, currentNum);
}

// creating a new movie
TEST_F(ManagerTesting, CreatingMovie){
	int prevNum= this->manager.getMovies().size();
	this->manager.createMovie();
	int currentNum= this->manager.getMovies().size();
	ASSERT_EQ(prevNum+1, currentNum);
}

// removing a pro
TEST_F(ManagerTesting, RemovingPro){
	int numOfPros= this->manager.getExperts().size();
	this->manager.removePro();
	EXPECT_NE(numOfPros, manager.getExperts().size());
}

// removing a movie
TEST_F(ManagerTesting, RemovingMovie){
	int numOfMovies= this->manager.getMovies().size();
	this->manager.removeMovie();
	EXPECT_NE(numOfMovies, manager.getMovies().size());
}


#endif /* TEST_MANAGERTESTING_CPP_ */
