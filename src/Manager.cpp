/****************************************

* Student Name:  Avia Katoa

* Exercise Name:  exc2

* File description:  represents a manager

****************************************/

#include "Manager.h"

		/**********
		 * Manager- constructor
		 */
		Manager::Manager() {
		}

		/*********
		 * Manager- destructor
		 */
		Manager::~Manager() {
		}

		/********
		 * start
		 *
		 * the method starts the system by running a menu
		 */
		void Manager::start(){

		}
		/********
		 * createExpert
		 *
		 * the method gets an expert details from the user
		 * and adds him to the list
		 */
		void Manager::createExpert(int id, int age, string specifec_desc, Gender gender, string name){

		}

		/***********
		 * createMovie
		 *
		 * the method gets a movie details from the user and adds
		 * him to the list
		 */
		void Manager::createMovie(){

		}

		/*********
		 * addExpert
		 *
		 * the method adds an expert to a movie
		 */
		void Manager::addExpert(){
		}

		/********
		 * addGenre
		 *
		 * the method adds a genre to a movie
		 */
		void Manager::addGenre(){

		}

		/**********
		 * setSort
		 *
		 * the method sets a sort method to a movie
		 */
		void Manager::setSort(){

		}

		/***********
		 * printAllMovies
		 *
		 * the method prints all the movies
		 */
		void Manager::printAllMovies(){

		}

		/***********
		 * printllPros
		 *
		 * the method prints all the pros
		 */
		void Manager::printAllPros(){

		}

		/***********
		 * printMovie
		 *
		 * the method prints a specific movie
		 */
		void Manager::printMovie(){

		}

		/***********
		 * combineMovies
		 *
		 * the method gets two movies from the user and combines
		 * them into one
		 */
		void Manager::combineMovies(){

		}

		/***********
		 * printMoviesOfPro
		 *
		 * the method prints movies of a pros
		 */
		void Manager::printMoviesOfPro(){

		}

		/***********
		 * printProsOfMovie
		 *
		 * the method prints the pros of a movie
		 */
		void Manager::printProsOfMovie(){
		}

		/***********
		* removeMovie
		*
		* the method removes a movie from the movies' list
		*/
		void Manager::removeMovie(){

		}

		/*********
		* removeProFromMovie
		*
		* the method removes a pro from a specefic movie
		*/
		void Manager::removeProFromMovie(){

		}

		/**********
		* removePro
		*
		* the method removes a specific pro from the pros' list
		*/
		void Manager::removePro(){

		}

		/**********
		* getExperts
		*
		* the method retruns the experts list
		*/
		const list<Expert*>& Manager::getExperts() const {
			return experts;
		}

		/***********
		* getMovies
		*
		* the method returns the movies' list
		*/
		const list<Movie*>& Manager::getMovies() const {
			return movies;
		}
