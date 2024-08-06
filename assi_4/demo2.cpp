#include <iostream>
#include <string>
using namespace std;

class Artist {
public:
    string name;
    string country;
    int rating;

    void acceptArtistData() {
        cout << "Enter the name of the artist: ";
        cin >> name;
        cout << "Enter the country name: ";
        cin >> country;
        cout << "Enter the rating (1-4): ";
        cin >> rating;
    }

    void printArtistData() {
        cout << "Name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Rating: " << rating << endl;
    }

    bool isFamous() {
        return rating >= 3;
    }
};

class Painter : public Artist {
public:
    string type;
    int paintingRate;
    int numberOfPaintings;

    void acceptPainterData() {
        acceptArtistData();
        cout << "Enter the type of painting (decorative/commercial): ";
        cin >> type;
        cout << "Enter the painting rate per painting: ";
        cin >> paintingRate;
        cout << "Enter the number of paintings: ";
        cin >> numberOfPaintings;
    }

    void printPainterData() {
        printArtistData();
        cout << "Type: " << type << endl;
        cout << "Painting Rate: " << paintingRate << endl;
        cout << "Number of Paintings: " << numberOfPaintings << endl;
    }

    int calculateTotalIncome() {
        return paintingRate * numberOfPaintings;
    }
};

class Singer : public Artist {
public:
    int numberOfAlbums;
    int ratePerSong;

    void acceptSingerData() {
        acceptArtistData();
        cout << "Enter the number of albums: ";
        cin >> numberOfAlbums;
        cout << "Enter the rate per song: ";
        cin >> ratePerSong;
    }

    void printSingerData() {
        printArtistData();
        cout << "Number of Albums: " << numberOfAlbums << endl;
        cout << "Rate per Song: " << ratePerSong << endl;
    }

    int calculateTotalIncome() {
        return ratePerSong * numberOfAlbums;
    }
};

int main() {
    bool result;

    // Testing Artist
    Artist a1;
    a1.acceptArtistData();
    a1.printArtistData();
    result = a1.isFamous();
    if (result) {
        cout << "Artist is Famous" << endl;
    } else {
        cout << "Artist is not famous" << endl;
    }

    // Testing Painter
    Painter p1;
    p1.acceptPainterData();
    p1.printPainterData();
    cout << "Total Income for Painter: " << p1.calculateTotalIncome() << endl;

    // Testing Singer
    Singer s1;
    s1.acceptSingerData();
    s1.printSingerData();
    cout << "Total Income for Singer: " << s1.calculateTotalIncome() << endl;

    return 0;
}
