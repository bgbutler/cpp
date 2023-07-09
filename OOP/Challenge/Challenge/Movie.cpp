#include "Movie.h"
#include <iostream>

// constructor
Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {
}

// implement the copy constructor
Movie::Movie(const Movie &source)
    : Movie {source.name, source.rating, source.watched}{
    }

// implement the destructor
Movie::~Movie(){
}


// implement the display method
void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}
