#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Define the structure for a song
struct Song {
    string title;
    string artist;
    Song* next;
};

// Function to insert a song at the beginning of the playlist
void insertAtBeginning(Song*& head, const string& title, const string& artist) {
    Song* newSong = new Song{title, artist, head};
    head = newSong;
}

// Function to insert a song at the end of the playlist
void insertAtEnd(Song*& head, const string& title, const string& artist) {
    Song* newSong = new Song{title, artist, nullptr};
    if (head == nullptr) {
        head = newSong;
    } else {
        Song* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newSong;
    }
}
