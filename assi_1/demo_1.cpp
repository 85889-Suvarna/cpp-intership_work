//Define a class in C++ for to save time 
//struct members

//Time class
//int hr,min,sec
//initTime()    ->0:0:0
//acceptTime()
//DisplayTime()
//increamentTimeBy1Min()



#include <iostream>

class Time {
private:
    int hr, min, sec;

public:
    // Constructor to initialize time to 0:0:0
    Time() : hr(0), min(0), sec(0) {}

    // Method to initialize time to 0:0:0
    void initTime() {
        hr = 0;
        min = 0;
        sec = 0;
    }

    // Method to accept time from the user
    void acceptTime() {
        std::cout << "Enter hours: ";
        std::cin >> hr;
        std::cout << "Enter minutes: ";
        std::cin >> min;
        std::cout << "Enter seconds: ";
        std::cin >> sec;
    }

    // Method to display the time
    void displayTime() const {
        std::cout << (hr < 10 ? "0" : "") << hr << ":"
                  << (min < 10 ? "0" : "") << min << ":"
                  << (sec < 10 ? "0" : "") << sec << std::endl;
    }

    // Method to increment time by 1 minute
    void incrementTimeBySec() {
        sec++;
        if(sec>= 60){
            sec=0;
        min++;
        if (min >= 60) {
            min = 0;
            hr++;
            if (hr >= 24) {
                hr = 0;
            }
        }
    }
}
};
int main() {
    Time t;
    t.initTime();
    t.displayTime();
    t.acceptTime();
    t.displayTime();
    t.incrementTimeBySec();
    t.displayTime();

    return 0;
}
