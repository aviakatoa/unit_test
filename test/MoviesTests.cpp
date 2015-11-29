/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  checks the movie class

****************************************/

# include "gtest.h"
#include "Movie.h"
#include "Expert.h"
#include "Producer.h"
#include<algorithm>

using namespace std;

class MoviesTests :public::testing::Test{
protected:
	Movie m1;
	Movie m2;
	Expert* e;
	Expert* e2;

	virtual void SetUp(){

	}

	virtual void TearDown(){

	}
public:
	MoviesTests() : m1("code1", "first", 60.5, 1995,5,"boring"),
				   m2("code2", "second", 120, 2000, 2, "very good"){
		this->e = new Producer("someone", 40, "producer", 45678, male);
		this->e2 = new Producer("somebody", 35, "producer2", 1234, female);
	}

	~MoviesTests(){
		delete(e);
		delete(e2);
	}
};

// adding a genre to the movie
TEST_F(MoviesTests, AddingGenre){
	m1.addGenre("Drama");
	m1.addGenre("Thrill");
	//bool found = (std::find(m1.getGenres().begin(), m1.getGenres().end(), "Drama") != m1.getGenres().end());
	//ASSERT_EQ(found, true);
	EXPECT_EQ(2, m1.getGenresNum());
}

// adding an expert to the movie
TEST_F(MoviesTests, AddingExpert){
	int num= m1.getPros().size();
	EXPECT_EQ(num, 0);
	m1.addExpert(e);
	//bool found = (std::find(m1.getPros().begin(), m1.getPros().end(), e) != m1.getPros().end());
	//EXPECT_EQ(found, true);
	int currentNum= m1.getPros().size();
	EXPECT_EQ(currentNum, num+1);
}

// combining two movies into one
TEST_F(MoviesTests, CombiningMovies){
	Movie m3= m1+m2;
	EXPECT_EQ(m3.getLength(), this->m2.getLength());
	EXPECT_EQ(m3.getName(), m2.getName());
	EXPECT_EQ(m3.getBrief(), m2.getBrief());
	int numOFGenres= m2.getGenresNum()+ m1.getGenresNum();
	EXPECT_EQ(m3.getGenresNum(), numOFGenres);
	int numOfPros= m1.getPros().size()+ m2.getPros().size();
	EXPECT_EQ(numOfPros, m3.getPros().size());
	EXPECT_EQ(m3.getYear(), m2.getYear());
	EXPECT_EQ(m3.getRate(), m2.getRate());
}

// removing a pro from the list
TEST_F(MoviesTests, RemovingProGoodArgs){
	m1.addExpert(this->e2);
	int numOfPros= m1.getPros().size();
	m1.removePro(this->e2->getID());
	EXPECT_EQ(numOfPros-1, this->m1.getPros().size());
	//bool found = (std::find(m1.getPros().begin(), m1.getPros().end(), e2) != m1.getPros().end());
	//EXPECT_NE(found, true);
}

// sorting the pros of the movies
TEST_F(MoviesTests, SortTesting){
	Movie m= Movie("default", "default", 40, 1950, 78, "default");
	m.addExpert(this->e);
	m.addExpert(this->e2);
	EXPECT_EQ(m.getPros().front()->getID(), e2->getID());
}

// adding existing expert
TEST_F(MoviesTests, AddingExistingExpert){
	int prevNum= this->m1.getPros().size();
	this->m1.addExpert(e);
	EXPECT_EQ(this->m1.getPros().size(), prevNum);
}

