// Music Streaming Service:
//    Create a music streaming service where each platform hosts multiple playlists, and each playlist contains multiple songs. Implement classes for Platform, Playlist, and Song. The Platform class should aggregate Playlist objects, and each Playlist object should aggregate Song objects. Implement functionalities to add new songs to playlists, search for songs by artist or genre, and display all playlists available on a platform.

#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    string genre;
public:
    Song(string title, string artist, string genre) : title(title), artist(artist), genre(genre) {}

     string& getTitle()  {
        return title;
    }

     string& getArtist()  {
        return artist;
    }

     string& getGenre()  {
        return genre;
    }

    void display()  {
        cout << "Title: " << title << ", Artist: " << artist << ", Genre: " << genre << endl;
    }
};

class Playlist {
private:
    string name;
    Song* songs[100];
    int numSongs;
public:
    Playlist(string name) : name(name), numSongs(0) {}

     string& getName()  {
        return name;
    }

    void addSong(const Song& song) {
        if (numSongs < 100) {
            songs[numSongs++] = new Song(song);
        }
    }

    void displaySongs()  {
        cout << "Songs in Playlist " << name << ":" << endl;
        for (int i = 0; i < numSongs; ++i) {
            songs[i]->display();
        }
    }

    Song* findSongByArtist(const string& artist) {
        for (int i = 0; i < numSongs; ++i) {
            if (songs[i]->getArtist() == artist) {
                return songs[i];
            }
        }
        return nullptr;
    }

    Song* findSongByGenre(const string& genre)  {
        for (int i = 0; i < numSongs; ++i) {
            if (songs[i]->getGenre() == genre) {
                return songs[i];
            }
        }
        return nullptr;
    }
};

class Platform {
private:
    string name;
    Playlist* playlists[10];
    int numPlaylists;
public:
    Platform(string name) : name(name), numPlaylists(0) {}

    void addPlaylist(const Playlist& playlist) {
        if (numPlaylists < 10) {
            playlists[numPlaylists++] = new Playlist(playlist);
        }
    }

    void displayPlaylists() {
        cout << "Playlists available on " << name << ":" << endl;
        for (int i = 0; i < numPlaylists; ++i) {
            cout << "Playlist: " << i + 1 << " - " << playlists[i]->getName() << endl;
        }
    }
};

int main() {
    Song song1("Shape of You", "Ed Sheeran", "Pop");
    Song song2("Bohemian Rhapsody", "Queen", "Rock");
    Song song3("Dance Monkey", "Tones and I", "Pop");

    Playlist playlist1("Top Hits");
    playlist1.addSong(song1);
    playlist1.addSong(song3);

    Playlist playlist2("Classic Rock");
    playlist2.addSong(song2);

    Platform streamingService("My Music Streaming");

    streamingService.addPlaylist(playlist1);
    streamingService.addPlaylist(playlist2);

    streamingService.displayPlaylists();

    return 0;
}
