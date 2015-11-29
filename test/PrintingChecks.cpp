/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  checks the printing methods

****************************************/

# include "gtest.h"
#include "Expert.h"
#include "Actor.h"
#include "Producer.h"
#include "Director.h"
#include "Screenwriter.h"
#include "Movie.h"

class PrintingChecks: public ::testing::Test{

protected:
	virtual void SetUp(){

	}
	virtual void TearDown(){

	}
public:
	PrintingChecks(){
	}
};

// printing an actor
TEST_F(PrintingChecks, PrintingActor){
	Actor actor= Actor("Eli", 40, "main actor", 123456, male);
	string output= actor.toString();
	string expected= "Name: Eli\n Age: 40";
	EXPECT_EQ(output, expected);
}

// printing a producer
TEST_F(PrintingChecks, PrintingProducer){
	Producer prod= Producer("Hanna", 25, "main producer", 234567, female);
	string output= prod.toString();
	string expected = "Hanna";
	EXPECT_EQ(expected, output);
}

// printing a director
TEST_F(PrintingChecks, PrintinDirector){
	Director d= Director("Avia", 22, "great director", 308504703, female);
	string output= d.toString();
	string expected= "Avia";
	EXPECT_EQ(expected, output);
}

// printing a screenwriter
TEST_F(PrintingChecks, PrintingWriter){
	Screenwriter s = Screenwriter("Adiel", 19, "boring screenwriter", 3333333, male);
	string output = s.toString();
	string expected= "Name: Adiel\nDescription: boring screenwriter";
	EXPECT_EQ(expected, output);
}

// printing a movie
TEST_F(PrintingChecks, PrintingMovie){
	Movie m= Movie("Hello", "Star Wars", 120, 2014, 3, "good movie");
	string output= m.printMe();
	string expected= "Code: Hello\nName: Star Wars\nLength: 120 min\nYear: 2014\nBrief: good movie";
	EXPECT_EQ(expected, output);
}
