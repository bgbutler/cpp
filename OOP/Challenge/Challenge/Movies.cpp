#include "Movies.h"
#include <iostream>



// movies no args constructor
Movies::Movies(){
}


// movies destructor
Movies::~Movies(){
}

// check to see if it already exists
// return true if successful
bool Movies::add_movie(std::string name, std::string rating, int watched){
    for(const Movie &movie: movies){
        if(movie.get_name() == name)
            return false;
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    return true;
}


// increment watched
bool Movies::increment_watched(std::string name){
    // use &movie as a reference
    for(Movie &movie: movies){
        if (movie.get_name() == name){
            movie.increment_watched();
            return true;
        }
    }
    return false;
}


// display all the movie objects
void Movies::display() const {
    if(movies.size() == 0){
        std::cout << "Sorry, no movies to display" << std::endl;
    } else {
        std::cout << "\n====================================================" << std::endl;
        for (const auto movie: movies)
            movie.display();
        std::cout << "\n====================================================" << std::endl;
    }
}
