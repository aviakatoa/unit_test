/*
 * test_movie.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: avia
 */

# include "gtest/gtest.h"
#include "Movie.h"

using namespace std;

class MovieTests :public::testing::Test{
protected:
	Movie m1;
	Movie m2;
	Movie m3;

	virtual void SetUp(){
		m3=m1+m2;
	}

	virtual void TearDown(){

	}
public:
	MovieTests() : m1("code1", "first", 60.5, 1995,5,"boring"),
				   m2("code2", "second", 120, 2000, 2, "very good") {
		std::cout<<"MovieTests Ctor called"<<std::endl;
	}
};

TEST_F(MovieTests, AddingGenre){
	int prev= m1.getGenresNum();
	m1.addGenre("Drama");
	ASSERT_NE(prev, m1.getGenresNum());
}

