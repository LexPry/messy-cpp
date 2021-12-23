//
// Created by pryme on 12/17/21.
//

#ifndef MOVIE_TRACKER_PROJECT_MOVIES_H
#define MOVIE_TRACKER_PROJECT_MOVIES_H


#include <vector>
#include <string>
#include <iostream>
#include "Movie.h"

class Movies {
    std::vector<Movie> movies;

public:
    Movies(std::string name, std::string rating, int watched);   // Constructor
    ~Movies();  // Destructor

    bool add_movie(std::string name, std::string rating, int watched);

    bool increment_watched(std::string name);


    void display() const;

};


#endif //MOVIE_TRACKER_PROJECT_MOVIES_H
