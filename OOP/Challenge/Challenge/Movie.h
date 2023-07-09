#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;
    
public:
    // constructor with all three attributes
    Movie(std::string name, std::string rating, int watched);
    
    // Copy constructor
    Movie(const Movie &source);
    
    // Destructor
    ~Movie();
    
    // need some getters and setters
    
    void set_name(std::string name){this->name = name;}
    std::string get_name() const {return name;}
    
    void set_rating(std::string rating){this->rating = rating;}
    std::string get_rating() const {return rating;}
    
    void set_watched(int watched){this->watched = watched;}
    int get_watched() const {return watched;}
    
    // increment the watched by 1
    void increment_watched(){++watched;}
    
    // simple display of the movie
    void display() const;

};

#endif // MOVIE_H
