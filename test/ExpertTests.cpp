/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  checks the expert class

****************************************/
# include "gtest.h"
#include "Movie.h"
#include "Expert.h"
#include "Actor.h"
#include "Producer.h"
#include<algorithm>

using namespace std;

class ExpertTests: public ::testing::Test {

protected:
	Expert* e1;
	Expert* e2;
	Movie m1;
	Movie m2;

	virtual void SetUp() {

		this->e1 = new Actor("Yossi", 40, "good actor", 456123, male);
		this->e2 = new Producer("Yael", 24, "main producer", 123456, female);
	}
	virtual void TearDown() {
		delete (this->e1);
		delete (this->e2);
	}
public:
	ExpertTests() :
			m1("code", "Heroes", 65.5, 1995, 2, "long movie"), m2("code2",
					"Hello", 140, 2000, 4, "nothing to see") {
		this->e1 = new Actor("Yossi", 40, "good actor", 456123, male);
		this->e2 = new Producer("Yael", 24, "main producer", 123456, female);
	}
};

// adding a movie to an expert
TEST_F(ExpertTests, AddingMovie) {
	int prevNum = this->e1->getNumOfMovies();
	this->e1->hired(&m2);
	EXPECT_EQ(this->e1->getNumOfMovies(), prevNum + 1);
}

// deleting the expert from a movie
TEST_F(ExpertTests, DeletingMyself) {
	int numOfMovies = this->e2->getNumOfMovies();
	this->e2->hired(&m1);
	// check if the movie was indeed added
	ASSERT_EQ(this->e2->getNumOfMovies(), numOfMovies + 1);
	this->e2->removeMeFromAllMovies();
	// checking if i was deleted from all movies
	EXPECT_EQ(this->e2->getNumOfMovies(), 0);

}

// deleting a movie from an experts
TEST_F(ExpertTests, DeletingMovie) {
	this->e1->hired(&m1);
	int num = this->e1->getNumOfMovies();
	int numOfExperts = this->m1.getPros().size();
	this->e1->fired("code");
	int newNum = this->e1->getNumOfMovies();
	int newNumOfExperts = this->m1.getPros().size();
	EXPECT_EQ(numOfExperts + 1, newNumOfExperts);
	EXPECT_NE(num, newNum);
}

