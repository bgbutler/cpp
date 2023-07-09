#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    // make a vector of movies using the Moie class
    std::vector<Movie> movies;
public:
    Movies();
    
    ~Movies();
    
    // add movie
    bool add_movie(std::string name, std::string rating, int watched);
    
    
    // increment watched
    bool increment_watched(std::string name);
    
    // display
    void display() const;
    

};

#endif // MOVIES_H
