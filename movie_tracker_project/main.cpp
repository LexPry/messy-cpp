// Created by Alexander Boswell
/*
 * Goal: Make a movie tracker application using a movie class and movies class
 * class movie:
        Takes movie name, movie rating, and times watched
 * class movies:
        will know about movie class because it is a collection of movie object
        main will only be able to interact with movies class

* Main
    Should be able to create a movies class
    ask the movies object to add a movie since it is a collection of movie object
    ask the movies object to increment the watched count by 1 for a movie given its name
    ask the movies object to display all of its movies

* Additionally:
    if movie is already in the collection we should display an error to user
    if we try to increment watched count for a movie not in movies collection we should display error to user
*/

#include <iostream>
#include "Movies.h"

// Function Prototypes
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void increment_watched(Movies &movies, std::string name) {

}