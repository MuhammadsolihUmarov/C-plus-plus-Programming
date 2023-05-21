#include <iostream>
#include "Movies.h"

using namespace std;

//Function prototypes
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name);


int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);    //OK
    add_movie(my_movies, "Somemovie2", "PG", 5); //OK
    add_movie(my_movies, "Somemovie3", "Cinderella", 7);//OK

    my_movies.display(); 
    cout << "display 3" << endl;
    add_movie(my_movies, "Ice Age" , "PG-13", 5);//Alreadyt exists
    add_movie(my_movies, "Somemovie5", "Ice Age", 6);  //OK

    my_movies.display();

    increment_watched(my_movies, "Big");        //OK
    increment_watched(my_movies, "Ice Age");  //OK

    my_movies.display(); //Big Ice Age watched count incremented by 1

    increment_watched(my_movies, "k"); //Not found

    return 0;
}


//Functions
void increment_watched(Movies &movies, std::string name)
{
    if (movies.increment_watched(name)){
        std::cout << name << " watch incremented" << std::endl;
    }
    else {
        std::cout << name << " not found" << std::endl;
    }
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched){
    if (movies.add_movie(name, rating, watched)){
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" << std::endl;
    }
}


