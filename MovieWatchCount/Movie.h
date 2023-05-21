#ifndef _Movie_H_
#define _Movie_H_

#include <string>

class Movie
{
    private:
        std::string name;
        std::string rating;
        int watched;

    public:
        //Constructor xpects all 3 movie attributes
        Movie(std::string name, std::string rating, int watched);

        //Copy constructor
        Movie(const Movie &source);

        //Destructor
        ~Movie();

        //Basic getters and setters
        void set_name(std::string name) { this->name=name; }
        std::string get_name() const { return name; }

        void set_rating(std::string rating) { this->rating = rating; }
        std::string get_rating() const { return rating; }

        void set_watched(int watched) { this->watched = watched; }
        int get_watched() const { return watched; }

        //Incrementer
        void increment_watched() { ++watched; }

        //Displays movie info
        void display() const;
};
#endif