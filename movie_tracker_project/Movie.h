//
// Created by pryme on 12/17/21.
//

#ifndef MOVIE_TRACKER_PROJECT_MOVIE_H
#define MOVIE_TRACKER_PROJECT_MOVIE_H


#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    Movie();    // Constructor
    ~Movie();   // Destructor

};


#endif //MOVIE_TRACKER_PROJECT_MOVIE_H
