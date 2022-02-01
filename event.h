#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>


class event{

    private:
        int day;
        int month;
        int year;
        std::string name;

    public:
        event(int d, int m, int y, std::string name);
        int getDay();
        int getMonth();
        int getYear();
        void display();
        std::string getName();


        
        
};
#endif