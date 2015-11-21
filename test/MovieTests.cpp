/*
 * test_movie.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: avia
 */

# include "gtest/gtest.h"
#include "Movie.h"
#include<algorithm>

using namespace std;

class MovieTests :public::testing::Test{
protected:
	Movie m1;
	Movie m2;
	Movie m3;
	Expert* e;
	Expert* e2;

	virtual void SetUp(){
		m3=m1+m2;
	}

	virtual void TearDown(){
		delete(e);
		delete(e2);
	}
public:
	MovieTests() : m1("code1", "first", 60.5, 1995,5,"boring"),
				   m2("code2", "second", 120, 2000, 2, "very good"){
		this->e = new Producer("someone", 40, "producer", 123456, male);
		this->e2 = new Producer("somebody", 35, "producer2", 123456789, female);
		m1.addExpert(e);
		m1.addExpert(e2);
	}
};

TEST_F(MovieTests, AddingGenre){
	int prev= m1.getGenresNum();
	m1.addGenre("Drama");
	m1.addGenre("Thrill");
	bool found = (std::find(m1.getGenres().begin(), m1.getGenres().end(), "Drama") != m1.getGenres().end());
	ASSERT_EQ(found, true);
	EXPECT_NE(prev+2, m1.getGenresNum());
}

TEST_F(MovieTests, AddingExpert){
	int num= m1.getPros().size();
	EXPECT_EQ(num, 2);
	bool found = (std::find(m1.getPros().begin(), m1.getPros().end(), e) != m1.getPros().end());
	EXPECT_EQ(found, true);
}

TEST_F(MovieTests, CombiningMovies){
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

TEST_F(MovieTests, RemovingProBadArgs){
	int prevNum=m1.getPros().size();
	m1.removePro(e2->getID());
	int currentNum= m1.getPros().size();
	EXPECT_EQ(prevNum, currentNum);
}

TEST_F(MovieTests, RemovingProGoodArgs){
	m1.addExpert(this->e2);
	int numOfPros= m1.getPros().size();
	m1.removePro(this->e2->getID());
	EXPECT_EQ(numOfPros-1, this->m1.getPros().size());
	bool found = (std::find(m1.getPros().begin(), m1.getPros().end(), e2) != m1.getPros().end());
	EXPECT_NE(found, true);
}

TEST_F(MovieTests, SortTesting){

}
