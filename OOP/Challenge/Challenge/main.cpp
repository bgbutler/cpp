#include <iostream>
#include "Movies.h"

// function prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name){
    if(movies.increment_watched(name))
        {
        std::cout << name << " watch incremented" << std::endl;
    } else {
        std::cout << name << " not found" << std::endl;
    }
}


void add_movie(Movies &movies, std::string name, std::string rating, int watched){
    if (movies.add_movie(name, rating, watched))
        {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" << std::endl;
    }
}


int main(){
    
    // create the object
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Excaliber", "R", 3);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Fellowship of the Ring", "PG-13", 10);
    
    my_movies.display();
    
    add_movie(my_movies, "Excaliber", "R", 5);  //already exists
    add_movie(my_movies, "The Two Towers", "PG", 8); 
    
    my_movies.display();
    
    increment_watched(my_movies, "Star Wars");
    increment_watched(my_movies, "Fellowship of the Ring");
    
    my_movies.display();
    
    increment_watched(my_movies, "XXX");
    
    
    
    return 0;
}