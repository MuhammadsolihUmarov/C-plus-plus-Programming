// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

using namespace std;

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}



void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
    std::cout << "\nPlaying: " << song << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    for (auto &song : playlist)
    {
        cout << song << endl;
    }
    // std::cout << "You implement this function" << std::endl;
}


int main() {
    char operation;
    bool turn_on{true};
    string name, artist;
    int rating;
    std::list<Song> playlist{
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pray For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris & Grey", 5},
        {"Wait", "Maroone 5", 4},
        {"Whatever It Takes", "Imagine Dragons", 3}};

    std::list<Song>::iterator current_song = playlist.begin();
    
    //std::cout << "To be implemented" << std::endl;
    // Your program logic goes here
    while(turn_on)
    {
        play_current_song(*current_song);
        display_menu();
        cin >> operation;
        operation = toupper(operation);

        switch(operation)
        {
            case 'F':
                current_song = playlist.begin();
                break;
            case 'N':
                current_song++;
                if (current_song==playlist.end())
                {
                    current_song = playlist.begin();
                }
                break;
                /*auto c = find(playlist.begin(), playlist.end(), current_song);
                cout << *c << endl;*/
            case 'P':
                if (current_song!=playlist.begin())
                {
                    current_song--;
                    cout << "BYE" << endl;
                }
                else
                {
                    current_song = prev(playlist.end());
                    cout << "HI" << endl;
                    
                }
                break;
            case 'A':
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << "Adding and playing new song" << std::endl;
                cout << "Enter the music name: ";
                getline(std::cin, name);
                cout << "Enter the artist name: ";
                getline(std::cin, artist);
                cout << "Enter a rating for the music: (1-5 integer) ";
                cin >> rating;
                playlist.insert(current_song, Song{name, artist, rating});
                current_song--;
                break;

            case 'L':
                display_playlist(playlist, *current_song);
                break;
            case 'Q':
                turn_on = false;
                break;
            default:
                cout << "Invalid command!" << endl;
            }
            

    }

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}